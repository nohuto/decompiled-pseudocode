/*
 * XREFs of sub_1402874E8 @ 0x1402874E8
 * Callers:
 *     sub_140287FB8 @ 0x140287FB8 (sub_140287FB8.c)
 *     sub_1406F4904 @ 0x1406F4904 (sub_1406F4904.c)
 * Callees:
 *     sub_140287930 @ 0x140287930 (sub_140287930.c)
 *     sub_14028799C @ 0x14028799C (sub_14028799C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C48A0 @ 0x1405C48A0 (sub_1405C48A0.c)
 */

__int64 __fastcall sub_1402874E8(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v5; // rsi
  KIRQL v6; // di
  char v7; // al
  int v8; // ecx
  BOOL v9; // r9d
  __int64 v10; // r8
  int v11; // r10d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // edx
  bool v16; // zf

  if ( (unsigned int)sub_14028799C() || !(unsigned int)sub_140287930() )
    return 0LL;
  v5 = 0LL;
  if ( v2 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v7 = *(_BYTE *)(a1 + 62);
  if ( (v7 & 2) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 62) = v7 & 0xFD;
    v9 = (v8 & 0x20) != 0 || !*(_QWORD *)(a1 + 64);
    v10 = a1 + 128;
    if ( a1 != -128 )
    {
      v11 = 0x3FFFFFFF;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v10 + 34) & 1) != 0 )
          goto LABEL_22;
        if ( (v11 & *(_DWORD *)(v10 + 48)) == v11 || v9 )
          break;
LABEL_23:
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v10 )
          goto LABEL_7;
      }
      v5 += sub_1405C48A0(v10);
LABEL_22:
      if ( v9 )
        goto LABEL_7;
      goto LABEL_23;
    }
  }
LABEL_7:
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  return v5;
}
