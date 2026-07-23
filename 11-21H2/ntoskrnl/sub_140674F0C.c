/*
 * XREFs of sub_140674F0C @ 0x140674F0C
 * Callers:
 *     sub_140674BE4 @ 0x140674BE4 (sub_140674BE4.c)
 *     sub_1406A894C @ 0x1406A894C (sub_1406A894C.c)
 *     sub_1407A50BC @ 0x1407A50BC (sub_1407A50BC.c)
 *     sub_1407A5C98 @ 0x1407A5C98 (sub_1407A5C98.c)
 *     sub_14099A23C @ 0x14099A23C (sub_14099A23C.c)
 * Callees:
 *     sub_140674FE4 @ 0x140674FE4 (sub_140674FE4.c)
 *     sub_140675014 @ 0x140675014 (sub_140675014.c)
 */

__int64 __fastcall sub_140674F0C(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = sub_140674FE4();
    *a1 = 0LL;
  }
  if ( a1[1] )
  {
    result = sub_140675014(qword_140C5AE28 + 56);
    a1[1] = 0LL;
  }
  return result;
}
