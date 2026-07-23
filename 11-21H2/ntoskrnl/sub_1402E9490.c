/*
 * XREFs of sub_1402E9490 @ 0x1402E9490
 * Callers:
 *     sub_1402E8AA0 @ 0x1402E8AA0 (sub_1402E8AA0.c)
 *     sub_1402E9070 @ 0x1402E9070 (sub_1402E9070.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E9490(ULONG_PTR a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax

  if ( a1 >= qword_140C52CE0 && a1 < qword_140C52CE0 + 2048 )
    return 2LL;
  v1 = *(_QWORD *)(48 * a1 - 0x220000000000LL + 16);
  if ( (v1 & 0x400) != 0 )
    v2 = v1 >> 3;
  else
    v2 = v1 >> 27;
  return (v2 & 1) == 0;
}
