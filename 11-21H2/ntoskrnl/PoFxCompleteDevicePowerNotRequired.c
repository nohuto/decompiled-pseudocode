/*
 * XREFs of PoFxCompleteDevicePowerNotRequired @ 0x1403B6A70
 * Callers:
 *     sub_1406190B0 @ 0x1406190B0 (sub_1406190B0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     sub_1403B1998 @ 0x1403B1998 (sub_1403B1998.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall PoFxCompleteDevicePowerNotRequired(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v2; // eax
  bool v3; // zf
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v8; // r8

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 40), 0xFFFFFFFF);
  v3 = v2 == 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
  {
    sub_140355058(*(_QWORD *)(BugCheckParameter2 + 48), 0, 17, 1LL);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 360));
    if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
      sub_1403B1998(v5, BugCheckParameter2 + 304, BugCheckParameter2);
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(BugCheckParameter2 + 360));
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          v3 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= result;
          if ( v3 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  else if ( (int)result < 0 )
  {
    sub_1405CAE6C(0x613uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
