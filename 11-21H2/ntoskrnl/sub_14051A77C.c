/*
 * XREFs of sub_14051A77C @ 0x14051A77C
 * Callers:
 *     sub_14051A460 @ 0x14051A460 (sub_14051A460.c)
 * Callees:
 *     sub_14064F634 @ 0x14064F634 (sub_14064F634.c)
 */

__int64 __fastcall sub_14051A77C(__int64 a1, _QWORD *a2)
{
  __int64 *i; // r11
  __int64 v5; // r11
  __int64 *v7; // rax
  __int64 **v8; // rcx

  *a2 = 0LL;
  for ( i = (__int64 *)qword_140C4BEA0; ; i = *(__int64 **)v5 )
  {
    if ( i == &qword_140C4BEA0 )
      return 3221226021LL;
    if ( (unsigned __int8)sub_14064F634(i[2], a1) )
      break;
  }
  if ( _InterlockedDecrement64((volatile signed __int64 *)(v5 + 24)) <= -1 )
    __fastfail(0xEu);
  if ( !*(_QWORD *)(v5 + 24) )
  {
    v7 = *(__int64 **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v8 = *(__int64 ***)(v5 + 8), *v8 != (__int64 *)v5) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
  }
  *a2 = v5;
  return 0LL;
}
