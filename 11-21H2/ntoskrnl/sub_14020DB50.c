/*
 * XREFs of sub_14020DB50 @ 0x14020DB50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020DC34 @ 0x14020DC34 (sub_14020DC34.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     RtlFindClearBitsAndSetEx @ 0x14029E780 (RtlFindClearBitsAndSetEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__m128i *__fastcall sub_14020DB50(unsigned __int64 a1, unsigned int a2, char a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int64 v5; // rbx
  int v8; // r15d
  unsigned __int8 v9; // bp
  __m128i v10; // xmm0
  __int64 ClearBitsAndSet; // rax
  __m128i *v12; // r14
  int v14; // ecx
  __int32 v15; // eax
  ULONG_PTR v16; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v18; // ecx
  char *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rdx
  struct _KTHREAD *v22; // rcx
  bool v23; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v26; // r9
  int v27; // edx
  _QWORD v28[2]; // [rsp+30h] [rbp-38h] BYREF
  char v29; // [rsp+70h] [rbp+8h] BYREF
  int v30; // [rsp+74h] [rbp+Ch]

  v5 = a2;
  v8 = a3 & 1;
  if ( (a3 & 1) != 0 )
    v9 = -1;
  else
    v9 = sub_140365AF4(a1 + 24, *(unsigned int *)(a1 + 32));
  v10 = *(__m128i *)(a1 + 48);
  v28[0] = *(_QWORD *)(a1 + 48);
  v28[1] = a1 ^ _mm_srli_si128(v10, 8).m128i_u64[0];
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(v28, v5 >> 12, 0LL);
  if ( ClearBitsAndSet == -1 )
  {
    if ( (unsigned int)sub_14020DC34(v28, &v29) == 1 )
      v14 = v30;
    else
      v14 = 0;
    v12 = 0LL;
    *a5 = v14 << 12;
  }
  else
  {
    v12 = (__m128i *)(a1 + (ClearBitsAndSet << 12));
    *a5 = 0;
    *a4 = 0;
  }
  if ( !v8 )
  {
    v15 = *(_DWORD *)(a1 + 32);
    v16 = a1 + 24;
    if ( v15 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v16);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v26 = *((_QWORD *)CurrentPrcb + 4375);
            v27 = ~(unsigned __int16)(-1LL << (v9 + 1));
            v23 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
            *(_DWORD *)(v26 + 20) &= v27;
            if ( v23 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v16);
      CurrentThread = KeGetCurrentThread();
      if ( v16 - qword_140C50630 >= 0x8000000000LL )
        v18 = -1;
      else
        v18 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      _disable();
      v19 = (char *)CurrentThread + 1696;
      v20 = v16 & 0x7FFFFFFFFFFFFFFCLL;
      v21 = 0LL;
      while ( (*(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL) != v20
           || !v19[18]
           || (*(_DWORD *)v19 & 1) != 0
           || *((_DWORD *)v19 + 2) != v18 )
      {
        v21 = (unsigned int)(v21 + 1);
        v19 += 96;
        if ( (unsigned int)v21 >= 6 )
          goto LABEL_29;
      }
      v19[18] = 0;
      if ( v19 )
      {
        if ( *(__int64 *)v19 < 0 )
        {
          *v19 |= 2u;
          _enable();
          sub_14034EE30(v19, v21, v20);
          _disable();
        }
        v20 = *((unsigned int *)v19 + 22);
        *((_DWORD *)v19 + 22) = 0;
        v19[17] = 0;
        *(_QWORD *)v19 = 0LL;
        *((_BYTE *)CurrentThread + 792) |= 1 << v19[16];
        _enable();
        if ( (_DWORD)v20 )
          sub_14022B568((ULONG_PTR)CurrentThread);
        goto LABEL_32;
      }
LABEL_29:
      if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v16, v18, 0LL);
      _enable();
LABEL_32:
      v22 = KeGetCurrentThread();
      v23 = (*((_WORD *)v22 + 243))++ == 0xFFFF;
      if ( v23 && *((struct _KTHREAD **)v22 + 19) != (struct _KTHREAD *)((char *)v22 + 152) )
        KiCheckForKernelApcDelivery(v22, v21, v20);
    }
  }
  return v12;
}
