/*
 * XREFs of sub_140558AE0 @ 0x140558AE0
 * Callers:
 *     IoDecrementKeepAliveCount @ 0x140558640 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x1405587A0 (IoIncrementKeepAliveCount.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402A38B4 @ 0x1402A38B4 (sub_1402A38B4.c)
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140558AE0(__int64 a1, __int64 a2, int a3, _DWORD *a4, __int64 *a5)
{
  _QWORD *Pool2; // rbx
  __int64 v6; // rsi
  __int64 result; // rax
  unsigned int v11; // edi
  __int64 v12; // r14
  KIRQL v13; // al
  __int64 v14; // rdx
  __int64 *v15; // rcx
  _DWORD *v16; // rax
  bool v17; // al
  int v18; // edx
  unsigned __int8 CurrentIrql; // al
  KIRQL v20; // r14
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r9
  int v23; // eax
  bool v24; // zf
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-30h]
  KIRQL v27; // [rsp+80h] [rbp+18h]

  v25 = 0LL;
  Pool2 = 0LL;
  v6 = 0LL;
  if ( a3 )
  {
    result = sub_1402A38B4(a1, 1u, 0x20u, 1, &v25, 0LL);
    v11 = result;
    if ( (int)result < 0 )
      return result;
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 538996553LL);
    if ( Pool2 )
    {
      v6 = ExAllocatePool2(64LL, 56LL, 538996553LL);
      if ( !v6 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
      }
    }
    v12 = v25;
  }
  else
  {
    v11 = 0;
    v25 = sub_1402A3A14(a1, 1, 0LL);
    v12 = v25;
    if ( !v25 )
      return 3221225485LL;
  }
  SpinLock = (PKSPIN_LOCK)(a1 + 184);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v14 = *(_QWORD *)(v12 + 24);
  v27 = v13;
  if ( v14 )
  {
    v15 = *(__int64 **)(v12 + 24);
    while ( v15[1] != a2 )
    {
      v15 = (__int64 *)*v15;
      if ( !v15 )
        goto LABEL_11;
    }
    if ( a3 )
      ++*((_DWORD *)v15 + 4);
    else
      --*((_DWORD *)v15 + 4);
    v18 = *((_DWORD *)v15 + 4);
    *a5 = v15[3];
    *a4 = v18;
  }
  else
  {
LABEL_11:
    if ( a3 )
    {
      if ( Pool2 )
      {
        *Pool2 = v14;
        *(_QWORD *)(v12 + 24) = Pool2;
        Pool2[1] = a2;
        *((_DWORD *)Pool2 + 4) = 1;
        Pool2[3] = v6;
        *(_QWORD *)(v6 + 24) = a2;
        *(_QWORD *)(v6 + 40) = a1;
        v17 = 0;
        if ( (*(_DWORD *)(a1 + 80) & 0x20000000) != 0 )
        {
          v16 = *(_DWORD **)(a1 + 208);
          if ( !v16 || (*v16 & 8) == 0 )
            v17 = 1;
        }
        *(_BYTE *)(v6 + 18) = v17;
        Pool2 = 0LL;
        *a5 = v6;
        v6 = 0LL;
        *a4 = 1;
      }
      else
      {
        v11 = -1073741670;
      }
    }
    else
    {
      v11 = -1073741811;
    }
  }
  KeReleaseSpinLockFromDpcLevel(SpinLock);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v20 = v27;
    if ( v27 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = *((_QWORD *)CurrentPrcb + 4375);
      v23 = ~(unsigned __int16)(-1LL << (v27 + 1));
      v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
      *(_DWORD *)(v22 + 20) &= v23;
      if ( v24 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  else
  {
    v20 = v27;
  }
  __writecr8(v20);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0);
  return v11;
}
