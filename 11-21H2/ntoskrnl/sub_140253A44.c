/*
 * XREFs of sub_140253A44 @ 0x140253A44
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140253A44(__int64 a1, int a2)
{
  char v2; // bp
  unsigned int v4; // r15d
  unsigned __int8 CurrentIrql; // bl
  char v6; // al
  char v7; // al
  char v8; // cl
  char v9; // r8
  char v10; // cl
  char v11; // r8
  char v12; // cl
  char v13; // r8
  char v14; // cl
  char v15; // r8
  char v16; // cl
  char v17; // dl
  char v18; // r9
  bool v19; // zf
  char v20; // dl
  __int64 v22; // r9
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v25; // r9
  int v26; // edx

  v2 = a2;
  if ( (a2 & 0xFFFFFF80) != 0 || !*(_QWORD *)(a1 + 1408) || *(_WORD *)(a1 + 2412) != 332 )
    return 3221225485LL;
  v4 = -1073741790;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v22 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v22 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v6 = *(_BYTE *)(a1 + 643);
  if ( (v6 & 8) == 0 )
  {
    v7 = v6 & 0xFE;
    if ( (v2 & 1) != 0 )
      v7 = v7 & 0xFC | 1;
    v8 = v7 | 4;
    if ( (v2 & 4) == 0 )
      v8 = v7;
    v9 = v8;
    v10 = v8 | 2;
    if ( (v2 & 2) == 0 )
      v10 = v9;
    v11 = v10;
    v12 = v10 | 0x10;
    if ( (v2 & 0x10) == 0 )
      v12 = v11;
    v13 = v12;
    v14 = v12 | 0x20;
    if ( (v2 & 0x20) == 0 )
      v14 = v13;
    v15 = v14;
    v16 = v14 | 0x40;
    if ( (v2 & 0x40) == 0 )
      v16 = v15;
    v17 = v16 | 8;
    if ( (v2 & 8) == 0 )
      v17 = v16;
    v18 = v17;
    v19 = (v17 & 2) == 0;
    v20 = v17 | 0x30;
    if ( v19 )
      v20 = v18;
    v4 = 0;
    *(_BYTE *)(a1 + 643) = v20;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v25 = *((_QWORD *)CurrentPrcb + 4375);
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v19 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
