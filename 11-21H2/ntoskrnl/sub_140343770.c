/*
 * XREFs of sub_140343770 @ 0x140343770
 * Callers:
 *     sub_1402AE9D0 @ 0x1402AE9D0 (sub_1402AE9D0.c)
 *     sub_1403428E0 @ 0x1403428E0 (sub_1403428E0.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 *     sub_14035A424 @ 0x14035A424 (sub_14035A424.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140343770(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1376) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1124LL) & 0x100000) != 0 )
    return 0LL;
  return result;
}
