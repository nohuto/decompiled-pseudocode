/*
 * XREFs of sub_1402491D0 @ 0x1402491D0
 * Callers:
 *     sub_140362540 @ 0x140362540 (sub_140362540.c)
 *     sub_14036F8F8 @ 0x14036F8F8 (sub_14036F8F8.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140362864 @ 0x140362864 (sub_140362864.c)
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402491D0(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  unsigned __int16 *v4; // r14
  unsigned __int16 v5; // ax
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rbp
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v12; // ecx
  char *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // r8d
  struct _KTHREAD *v17; // rcx
  bool v18; // zf
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // edx
  __int128 v22; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int16 *v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_OWORD *)(a1 + 40);
  v23 = 0LL;
  v22 = v2;
  sub_140362864(a2, &v22, &v23, 0LL);
  v4 = v23;
  v5 = *v23;
  *v23 ^= (*v23 ^ (*v23 + 1)) & 0x7FF;
  if ( ((v5 ^ (v5 ^ (v5 + 1)) & 0x7FF) & 0x8000u) != 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), 1uLL);
    v4 = v23;
  }
  v6 = a1 + 112;
  v7 = (unsigned __int64)*v4 >> 15;
  v8 = sub_140365AF4(a1 + 112, *(_DWORD *)(a1 + 40) & 1);
  *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 8 * v7 + 120);
  *(_QWORD *)(a1 + 8 * v7 + 120) = v4 + 4;
  v9 = v8;
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          result = -1LL << ((unsigned __int8)v9 + 1);
          v20 = *((_QWORD *)CurrentPrcb + 4375);
          v21 = ~(unsigned __int16)result;
          v18 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v18 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 112);
    CurrentThread = KeGetCurrentThread();
    if ( v6 - qword_140C50630 >= 0x8000000000LL )
      v12 = -1;
    else
      v12 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    _disable();
    v13 = (char *)CurrentThread + 1696;
    v14 = v6 & 0x7FFFFFFFFFFFFFFCLL;
    v15 = 0LL;
    while ( (*(_QWORD *)v13 & 0x7FFFFFFFFFFFFFFCLL) != v14
         || !v13[18]
         || (*(_DWORD *)v13 & 1) != 0
         || *((_DWORD *)v13 + 2) != v12 )
    {
      v15 = (unsigned int)(v15 + 1);
      v13 += 96;
      if ( (unsigned int)v15 >= 6 )
        goto LABEL_23;
    }
    v13[18] = 0;
    if ( v13 )
    {
      if ( *(__int64 *)v13 < 0 )
      {
        *v13 |= 2u;
        _enable();
        sub_14034EE30(v13, v15, v14);
        _disable();
      }
      v16 = *((_DWORD *)v13 + 22);
      *((_DWORD *)v13 + 22) = 0;
      v13[17] = 0;
      *(_QWORD *)v13 = 0LL;
      result = (unsigned __int8)v13[16];
      *((_BYTE *)CurrentThread + 792) |= 1 << result;
      _enable();
      if ( v16 )
        result = sub_14022B568((ULONG_PTR)CurrentThread, v6, v16);
      goto LABEL_26;
    }
LABEL_23:
    result = *((unsigned int *)CurrentThread + 30);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, v12, 0LL);
    _enable();
LABEL_26:
    v17 = KeGetCurrentThread();
    v18 = (*((_WORD *)v17 + 243))++ == 0xFFFF;
    if ( v18 )
    {
      result = (__int64)v17 + 152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
