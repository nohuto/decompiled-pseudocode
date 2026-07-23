/*
 * XREFs of sub_14082A224 @ 0x14082A224
 * Callers:
 *     sub_14082A0D8 @ 0x14082A0D8 (sub_14082A0D8.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 */

__int64 __fastcall sub_14082A224(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    qword_140C2BC60 = 0LL;
    KeInitializeDpc((PRKDPC)&stru_140C2BC80, (PKDEFERRED_ROUTINE)sub_14057A0A0, 0LL);
    KeInitializeDpc(&stru_140C2B940, (PKDEFERRED_ROUTINE)sub_14057A1B0, 0LL);
    BYTE1(stru_140C2BC80) = 3;
    stru_140C2B940.Importance = 3;
    if ( !dword_140D05038 )
      dword_140D06A38 = 1;
  }
  KeInitializeDpc((PRKDPC)(a1 + 34200), (PKDEFERRED_ROUTINE)sub_140579F20, 0LL);
  *(_BYTE *)(a1 + 34201) = 3;
  result = *(_QWORD *)(a1 + 34256);
  if ( !result )
  {
    result = 2048LL;
    *(_WORD *)(a1 + 34202) = *(_DWORD *)(a1 + 36) + 2048;
  }
  return result;
}
