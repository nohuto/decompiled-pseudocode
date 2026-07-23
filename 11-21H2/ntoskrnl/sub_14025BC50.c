/*
 * XREFs of sub_14025BC50 @ 0x14025BC50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

__int64 __fastcall sub_14025BC50(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // rdi
  unsigned int v7; // r11d
  __int64 v8; // r12
  int v9; // r13d
  int v10; // r15d
  unsigned __int8 v11; // r14
  __m128i v12; // xmm0
  const signed __int64 *v13; // rdx
  signed __int64 v14; // r8
  const signed __int64 *v15; // r9
  bool v16; // zf
  __int64 result; // rax
  bool i; // zf
  unsigned __int8 v19; // al
  __int32 v20; // eax
  ULONG_PTR v21; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v23; // ecx
  char *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // r8d
  struct _KTHREAD *v28; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v31; // r8
  int v32; // eax
  unsigned __int64 v33; // [rsp+30h] [rbp-38h] BYREF
  const signed __int64 *v34; // [rsp+38h] [rbp-30h]

  v4 = (unsigned __int64)a3 >> 12;
  v6 = (a2 - a1) >> 12;
  v7 = a3;
  v8 = a4;
  v9 = a2;
  v10 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v11 = -1;
  }
  else
  {
    v19 = sub_140365AF4(a1 + 24, *(unsigned int *)(a1 + 32));
    v7 = a3;
    v11 = v19;
  }
  v12 = *(__m128i *)(a1 + 48);
  v33 = *(_QWORD *)(a1 + 48);
  v34 = (const signed __int64 *)(a1 ^ _mm_srli_si128(v12, 8).m128i_u64[0]);
  if ( v6 >= v33 )
    goto LABEL_19;
  if ( v4 <= 1 )
  {
    if ( v4 == 1 && _bittest64(v34, v6) )
      goto LABEL_9;
LABEL_19:
    sub_1405F1BBC(8, a1, v9, v7, v8, 0LL);
    __fastfail(0x32u);
  }
  if ( v33 - v6 < v4 )
    goto LABEL_19;
  v13 = &v34[v6 >> 6];
  v14 = *v13;
  v15 = &v34[(v6 + v4 - 1) >> 6];
  if ( v13 == v15 )
  {
    v16 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v6) & v14) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v6;
  }
  else
  {
    for ( i = ((-1LL << v6) & v14) == -1LL << v6; ; i = *v13 == -1 )
    {
      if ( !i )
        goto LABEL_19;
      if ( ++v13 == v15 )
        break;
    }
    v16 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v6 + (unsigned __int8)v4 - 1)) & *v13) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v6 + (unsigned __int8)v4 - 1);
  }
  if ( !v16 )
    goto LABEL_19;
LABEL_9:
  result = RtlClearBitsEx(&v33, v6, v4);
  if ( !v10 )
  {
    v20 = *(_DWORD *)(a1 + 32);
    v21 = a1 + 24;
    if ( v20 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v21);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v31 = *((_QWORD *)CurrentPrcb + 4375);
            v32 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v16 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
            *(_DWORD *)(v31 + 20) &= v32;
            if ( v16 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      result = v11;
      __writecr8(v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v21);
      CurrentThread = KeGetCurrentThread();
      if ( v21 - qword_140C50630 >= 0x8000000000LL )
        v23 = -1;
      else
        v23 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      _disable();
      v24 = (char *)CurrentThread + 1696;
      v25 = 0LL;
      v26 = v21 & 0x7FFFFFFFFFFFFFFCLL;
      while ( (*(_QWORD *)v24 & 0x7FFFFFFFFFFFFFFCLL) != v26
           || !v24[18]
           || (*(_DWORD *)v24 & 1) != 0
           || *((_DWORD *)v24 + 2) != v23 )
      {
        v25 = (unsigned int)(v25 + 1);
        v24 += 96;
        if ( (unsigned int)v25 >= 6 )
          goto LABEL_37;
      }
      v24[18] = 0;
      if ( v24 )
      {
        if ( *(__int64 *)v24 < 0 )
        {
          *v24 |= 2u;
          _enable();
          sub_14034EE30(v24, v25, v26);
          _disable();
        }
        v27 = *((_DWORD *)v24 + 22);
        *((_DWORD *)v24 + 22) = 0;
        v24[17] = 0;
        *(_QWORD *)v24 = 0LL;
        result = (unsigned __int8)v24[16];
        *((_BYTE *)CurrentThread + 792) |= 1 << result;
        _enable();
        if ( v27 )
          result = sub_14022B568((ULONG_PTR)CurrentThread, v21, v27);
        goto LABEL_40;
      }
LABEL_37:
      result = *((unsigned int *)CurrentThread + 30);
      if ( (result & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v21, v23, 0LL);
      _enable();
LABEL_40:
      v28 = KeGetCurrentThread();
      v16 = (*((_WORD *)v28 + 243))++ == 0xFFFF;
      if ( v16 )
      {
        result = (__int64)v28 + 152;
        if ( *(_QWORD *)result != result )
          return KiCheckForKernelApcDelivery();
      }
    }
  }
  return result;
}
