/*
 * XREFs of sub_140841A58 @ 0x140841A58
 * Callers:
 *     sub_14084192C @ 0x14084192C (sub_14084192C.c)
 *     sub_1408422F0 @ 0x1408422F0 (sub_1408422F0.c)
 *     sub_140A15148 @ 0x140A15148 (sub_140A15148.c)
 *     sub_140A1530C @ 0x140A1530C (sub_140A1530C.c)
 *     sub_140A18AA0 @ 0x140A18AA0 (sub_140A18AA0.c)
 *     sub_140A18FB4 @ 0x140A18FB4 (sub_140A18FB4.c)
 *     sub_140A19154 @ 0x140A19154 (sub_140A19154.c)
 *     sub_140A19614 @ 0x140A19614 (sub_140A19614.c)
 * Callees:
 *     sub_1403CB4C0 @ 0x1403CB4C0 (sub_1403CB4C0.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140842E88 @ 0x140842E88 (sub_140842E88.c)
 */

__int64 __fastcall sub_140841A58(__int64 a1)
{
  int v2; // edi
  _DWORD *v4; // rsi

  if ( !*(_DWORD *)(a1 + 80) )
  {
    if ( *(_QWORD *)(a1 + 32) )
      return 0;
    v4 = (_DWORD *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 64) != 1 )
    {
      v2 = sub_1403CB4C0(a1 + 8, 0);
      if ( v2 >= 0 )
      {
        if ( *(_BYTE *)(a1 + 59) )
        {
          *v4 = 6;
        }
        else
        {
          v2 = sub_140842E88(a1 + 8, v4);
          if ( v2 < 0 )
          {
            sub_1406E0C3C(1LL, (__int64)"AslFileMappingEnsure");
            *v4 = 3;
          }
        }
      }
      return (unsigned int)v2;
    }
    return 3221225758LL;
  }
  if ( *(_DWORD *)(a1 + 64) == 1 )
    return 3221225758LL;
  return *(_QWORD *)(a1 + 32) == 0LL ? 0xC000046D : 0;
}
