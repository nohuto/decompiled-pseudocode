/*
 * XREFs of sub_1403A1330 @ 0x1403A1330
 * Callers:
 *     CcRegisterExternalCache @ 0x1403A12A0 (CcRegisterExternalCache.c)
 *     sub_14053A314 @ 0x14053A314 (sub_14053A314.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403A1330(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C49C00);
  v5 = (_QWORD *)(a1 + 32);
  v6 = *(_QWORD **)(a2 + 8);
  if ( *v6 != a2 )
    __fastfail(3u);
  v5[1] = v6;
  *v5 = a2;
  *v6 = v5;
  v7 = dword_140C49B00;
  *(_QWORD *)(a2 + 8) = v5;
  if ( v7 + 1 < v7 )
    KeBugCheckEx(0x34u, 0x16F3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  dword_140C49B00 = v7 + 1;
  KeReleaseSpinLockFromDpcLevel(&qword_140C49C00);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
