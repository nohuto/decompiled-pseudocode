/*
 * XREFs of sub_140394878 @ 0x140394878
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x1403B9A30 (PoFxStartDevicePowerManagement.c)
 *     sub_140A50A10 @ 0x140A50A10 (sub_140A50A10.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_140394878(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al
  int v3; // ecx
  unsigned __int64 v4; // rdi
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf

  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
      v3 = *(_DWORD *)(v1 + 124);
      v4 = v2;
      _m_prefetchw((const void *)(v1 + 296));
      v5 = *(_DWORD *)(v1 + 296);
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 296), v5, v5);
      }
      while ( v6 != v5 );
      if ( (v5 & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v1 + 80) + 824LL) & 1) == 0 )
        *(_DWORD *)(v1 + 124) = v3 + 1;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 88));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v11 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
    }
  }
}
