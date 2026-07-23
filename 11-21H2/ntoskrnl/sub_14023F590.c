/*
 * XREFs of sub_14023F590 @ 0x14023F590
 * Callers:
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 * Callees:
 *     sub_14028494C @ 0x14028494C (sub_14028494C.c)
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     sub_140287F58 @ 0x140287F58 (sub_140287F58.c)
 *     sub_14028ADEC @ 0x14028ADEC (sub_14028ADEC.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14023F590(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edi
  __int64 v6; // rdi
  unsigned __int8 v7; // bl
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  __int64 v16; // r8
  int v17; // eax
  unsigned __int8 v18; // cl
  struct _KPRCB *v19; // r10
  __int64 v20; // r8
  int v21; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v23; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v25; // r8
  int v26; // eax
  unsigned __int8 v27; // [rsp+30h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v27 = 0;
  v3 = sub_14028494C(*(_QWORD *)(v1 + 40), (*(_BYTE *)(a1 + 19) & 1) == 0, &v27);
  v4 = v3;
  if ( !v3 )
    return 3221225473LL;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v23 = v27;
      if ( v27 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v25 = *((_QWORD *)CurrentPrcb + 4375);
        v23 = v27;
        v26 = ~(unsigned __int16)(-1LL << (v27 + 1));
        v13 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    else
    {
      v23 = v27;
    }
    __writecr8(v23);
    return 3221225473LL;
  }
  v5 = sub_14028ADEC(a1, v3);
  if ( v5 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && v27 <= 0xFu && v9 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = *((_QWORD *)v10 + 4375);
          v12 = ~(unsigned __int16)(-1LL << (v27 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(v10);
        }
      }
    }
    goto LABEL_24;
  }
  if ( (*(_DWORD *)a1 & 0x8000000) != 0 && (*(_BYTE *)(v4 + 62) & 0xC) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && v27 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = *((_QWORD *)v15 + 4375);
          v17 = ~(unsigned __int16)(-1LL << (v27 + 1));
          v13 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v13 )
            sub_140418E4C(v15);
        }
      }
    }
    v5 = -1073739503;
LABEL_24:
    __writecr8(v27);
    return (unsigned int)v5;
  }
  v6 = sub_140287F58(a1, v4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v18 = KeGetCurrentIrql(), v18 <= 0xFu) )
  {
    v7 = v27;
    if ( v27 <= 0xFu && v18 >= 2u )
    {
      v19 = KeGetCurrentPrcb();
      v20 = *((_QWORD *)v19 + 4375);
      v7 = v27;
      v21 = ~(unsigned __int16)(-1LL << (v27 + 1));
      v13 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
      *(_DWORD *)(v20 + 20) &= v21;
      if ( v13 )
        sub_140418E4C(v19);
    }
  }
  else
  {
    v7 = v27;
  }
  __writecr8(v7);
  sub_1402879F8(v6);
  return 0LL;
}
