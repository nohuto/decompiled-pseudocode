/*
 * XREFs of sub_140380900 @ 0x140380900
 * Callers:
 *     sub_1403800F0 @ 0x1403800F0 (sub_1403800F0.c)
 *     sub_14038FC10 @ 0x14038FC10 (sub_14038FC10.c)
 * Callees:
 *     sub_140380950 @ 0x140380950 (sub_140380950.c)
 *     sub_140380C38 @ 0x140380C38 (sub_140380C38.c)
 */

__int64 __fastcall sub_140380900(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_140380C38(a1, *a2, a3);
  if ( (_DWORD)result == -1073741275 )
    return sub_140380950(a1, a3, a2);
  if ( (int)result >= 0 )
    return 3221225812LL;
  return result;
}
