/*
 * XREFs of sub_140656340 @ 0x140656340
 * Callers:
 *     <none>
 * Callees:
 *     sub_140656234 @ 0x140656234 (sub_140656234.c)
 *     sub_140656584 @ 0x140656584 (sub_140656584.c)
 *     sub_1406565BC @ 0x1406565BC (sub_1406565BC.c)
 */

__int64 __fastcall sub_140656340(_QWORD *a1, unsigned __int8 a2, char a3)
{
  unsigned __int16 v3; // di
  __int64 v5; // rdx
  __int16 v6; // cx

  v3 = a2;
  if ( !a1 || !*a1 )
    return 3LL;
  if ( a3 )
  {
    while ( !(unsigned __int8)sub_140656584(a1) )
      ;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)((__int64 (*)(void))sub_140656584)() )
    return 3LL;
LABEL_7:
  v5 = v3;
  LOWORD(v5) = v3 | 0x8000;
  while ( 1 )
  {
    v6 = sub_1406565BC(a1, v5);
    if ( v6 >= 0 )
      break;
    sub_140656234(v6);
    v5 = 0LL;
  }
  return 0LL;
}
