/*
 * XREFs of MmIsFileSectionActive @ 0x140258E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140258F14 @ 0x140258F14 (sub_140258F14.c)
 *     sub_14028494C @ 0x14028494C (sub_14028494C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall MmIsFileSectionActive(__int64 a1, int a2, _DWORD *a3)
{
  char v4; // bl
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  unsigned __int8 v11; // bl
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v14; // di
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  __int64 v21; // r8
  int v22; // eax
  unsigned __int8 v23; // [rsp+48h] [rbp+10h] BYREF

  v23 = 0;
  v4 = a2;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 3) == 0 || (a2 & 4) == 0 )
    return 3221225485LL;
  v6 = 0;
  if ( (a2 & 1) == 0 )
    goto LABEL_31;
  v7 = sub_14028494C(a1, 0LL, &v23);
  if ( !v7 )
    goto LABEL_31;
  v6 = sub_140258F14(v7);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v14 = v23;
    if ( v23 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = *((_QWORD *)CurrentPrcb + 4375);
      v14 = v23;
      v17 = ~(unsigned __int16)(-1LL << (v23 + 1));
      v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
      *(_DWORD *)(v16 + 20) &= v17;
      if ( v18 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  else
  {
    v14 = v23;
  }
  __writecr8(v14);
  if ( !v6 )
  {
LABEL_31:
    if ( (v4 & 2) != 0 )
    {
      v8 = sub_14028494C(a1, 1LL, &v23);
      if ( v8 )
      {
        v6 = sub_140258F14(v8);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v19 = KeGetCurrentIrql(), v19 <= 0xFu) )
        {
          v11 = v23;
          if ( v23 <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v21 = *((_QWORD *)v20 + 4375);
            v11 = v23;
            v22 = ~(unsigned __int16)(-1LL << (v23 + 1));
            v18 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v22;
            if ( v18 )
              sub_140418E4C(v20);
          }
        }
        else
        {
          v11 = v23;
        }
        __writecr8(v11);
      }
    }
  }
  *a3 = v6;
  return 0LL;
}
