/*
 * XREFs of sub_14020C21C @ 0x14020C21C
 * Callers:
 *     sub_14020BA48 @ 0x14020BA48 (sub_14020BA48.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 * Callees:
 *     sub_14020C420 @ 0x14020C420 (sub_14020C420.c)
 */

__int64 __fastcall sub_14020C21C(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = sub_14020C420(a1, 8LL);
  if ( !v3 )
    return 3221225626LL;
  *(_QWORD *)(v3 + 56) = a2;
  return 0LL;
}
