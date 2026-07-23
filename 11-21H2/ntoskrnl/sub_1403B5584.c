/*
 * XREFs of sub_1403B5584 @ 0x1403B5584
 * Callers:
 *     sub_1403A4B90 @ 0x1403A4B90 (sub_1403A4B90.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405CBF94 @ 0x1405CBF94 (sub_1405CBF94.c)
 */

__int64 __fastcall sub_1403B5584(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  __int64 result; // rax
  int v6; // ett
  unsigned __int64 v7; // rsi
  unsigned int v8; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v11; // r10
  int v12; // eax
  bool v13; // zf

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 824), 0, 0);
  if ( (result & 0x20) != 0 )
  {
    _m_prefetchw((const void *)(BugCheckParameter3 + 32));
    LODWORD(result) = *(_DWORD *)(BugCheckParameter3 + 32);
    do
    {
      v6 = result;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)(BugCheckParameter3 + 32),
                               result,
                               result);
    }
    while ( v6 != (_DWORD)result );
    if ( (result & 0x2000) != 0 )
    {
      _m_prefetchw((const void *)(BugCheckParameter3 + 32));
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 32), 0);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1152));
      v8 = *(_DWORD *)(BugCheckParameter3 + 1180) & 0xFFFFFFFC | 2;
      *(_DWORD *)(BugCheckParameter3 + 1176) = a3;
      *(_DWORD *)(BugCheckParameter3 + 1180) = v8;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(BugCheckParameter3 + 1152));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = *((_QWORD *)CurrentPrcb + 4375);
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
            *(_DWORD *)(v11 + 20) &= v12;
            if ( v13 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      return sub_1405CBF94(BugCheckParameter3);
    }
  }
  return result;
}
