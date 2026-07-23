/*
 * XREFs of MiSkipStandbyEntries @ 0x14033127C
 * Callers:
 *     MiRebuildStandbyLookasideList @ 0x14033102C (MiRebuildStandbyLookasideList.c)
 * Callees:
 *     MiIsDecayPfn @ 0x14026EE60 (MiIsDecayPfn.c)
 *     MiGetStandbyPageType @ 0x140650CC4 (MiGetStandbyPageType.c)
 */

ULONG_PTR __fastcall MiSkipStandbyEntries(__int64 a1, ULONG_PTR a2, int StandbyPageType, int a4, unsigned __int64 a5)
{
  int v5; // r10d
  int v7; // r11d
  ULONG_PTR v8; // r8
  int v9; // esi
  ULONG_PTR v10; // rdi
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r8

  v5 = 0;
  v7 = a4;
  v8 = a2;
  if ( a2 != 0x3FFFFFFFFFLL )
  {
    while ( 1 )
    {
      v9 = v5;
      v10 = v8;
      v11 = 48 * v8 - 0x220000000000LL;
      if ( v7 )
      {
        StandbyPageType = 0;
      }
      else
      {
        if ( MiIsDecayPfn(v8) && StandbyPageType != 2 )
        {
          v15 = *(_QWORD *)(v14 + 16);
          if ( qword_140C65B40 && (v15 & 0x10) == 0 )
            v15 &= ~qword_140C65B40;
          MiIsDecayPfn((v15 >> 12) & 0xFFFFFFFFFFLL);
        }
        StandbyPageType = MiGetStandbyPageType(v10);
      }
      if ( !v11 )
        goto LABEL_9;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
          v8 = (*(_QWORD *)(v11 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v11 + 36) & 0x1FFFFF) << 19);
          goto LABEL_9;
        }
        v12 = *(_QWORD *)(v11 + 24);
      }
      else
      {
        v12 = *(_QWORD *)v11;
      }
      v8 = v12 & 0xFFFFFFFFFFLL;
LABEL_9:
      if ( (unsigned int)++v5 < a5 )
      {
        if ( v8 == 0x3FFFFFFFFFLL )
          return v8;
      }
      else
      {
        if ( v7 || v8 == 0x3FFFFFFFFFLL || !MiIsDecayPfn(v8) )
          return v8;
        v5 = v9;
      }
    }
  }
  return v8;
}
