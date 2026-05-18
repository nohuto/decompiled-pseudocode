/*
 * XREFs of sub_18003B5D8 @ 0x18003B5D8
 * Callers:
 *     sub_18003985C @ 0x18003985C (sub_18003985C.c)
 *     sub_1800399BC @ 0x1800399BC (sub_1800399BC.c)
 *     sub_18006B29C @ 0x18006B29C (sub_18006B29C.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 *     sub_1800967F0 @ 0x1800967F0 (sub_1800967F0.c)
 *     sub_18009D860 @ 0x18009D860 (sub_18009D860.c)
 *     sub_18009D960 @ 0x18009D960 (sub_18009D960.c)
 *     sub_18009D990 @ 0x18009D990 (sub_18009D990.c)
 *     sub_18009DD48 @ 0x18009DD48 (sub_18009DD48.c)
 *     sub_18009DE50 @ 0x18009DE50 (sub_18009DE50.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

_QWORD *__fastcall sub_18003B5D8(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  __int64 v5; // rcx

  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  v4 = a2[1];
  *a1 = *a2;
  v5 = a1[1];
  a1[1] = v4;
  if ( v5 )
    sub_180010530(v5);
  return a1;
}
