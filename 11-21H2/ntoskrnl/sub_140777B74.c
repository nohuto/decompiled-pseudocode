/*
 * XREFs of sub_140777B74 @ 0x140777B74
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 * Callees:
 *     sub_14025BA80 @ 0x14025BA80 (sub_14025BA80.c)
 *     sub_1402DE9D0 @ 0x1402DE9D0 (sub_1402DE9D0.c)
 *     sub_1407730FC @ 0x1407730FC (sub_1407730FC.c)
 */

__int64 __fastcall sub_140777B74(int a1, int a2, _BYTE *a3)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  int v9; // eax

  *a3 = 0;
  v6 = 0;
  while ( !sub_1402DE9D0() )
  {
    if ( !dword_140C45FEC && (!a2 || !a1 && *a3) )
      break;
    v8 = sub_14025BA80();
    v9 = sub_1407730FC(v8);
    *a3 = 1;
    if ( v9 == -1073741106 )
      v6 = -1073741106;
  }
  return v6;
}
