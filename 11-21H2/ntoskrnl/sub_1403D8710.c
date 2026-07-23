/*
 * XREFs of sub_1403D8710 @ 0x1403D8710
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403D8710(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // esi
  KIRQL v6; // al
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf

  v2 = 0;
  if ( *(_DWORD *)a1 != 1 )
    return 3221225659LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C4BE88);
  v7 = qword_140C4BE70;
  v8 = v6;
  if ( (__int64 *)qword_140C4BE70 == &qword_140C4BE70 )
  {
LABEL_4:
    v2 = -1073741275;
  }
  else
  {
    while ( *(_WORD *)(v7 + 24) != *(_WORD *)(a1 + 8) || *(_WORD *)(v7 + 28) != *(_WORD *)(a1 + 12) )
    {
      v7 = *(_QWORD *)v7;
      if ( (__int64 *)v7 == &qword_140C4BE70 )
        goto LABEL_4;
    }
    *a2 |= 1u;
    *a2 ^= (*a2 ^ (2 * *(_BYTE *)(v7 + 40))) & 2;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4BE88);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return v2;
}
