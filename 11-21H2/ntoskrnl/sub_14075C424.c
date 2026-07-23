/*
 * XREFs of sub_14075C424 @ 0x14075C424
 * Callers:
 *     sub_1406EAFE4 @ 0x1406EAFE4 (sub_1406EAFE4.c)
 *     sub_14075C380 @ 0x14075C380 (sub_14075C380.c)
 *     sub_14075C460 @ 0x14075C460 (sub_14075C460.c)
 *     sub_14075C7BC @ 0x14075C7BC (sub_14075C7BC.c)
 *     sub_1409638AC @ 0x1409638AC (sub_1409638AC.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 */

void __fastcall sub_14075C424(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  char *v5; // rdi

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = a1 + 3;
      v4 = a2;
      v5 = (char *)(a1 + 2);
      do
      {
        if ( v3[2] )
          sub_14075CDC4(v5 + 16);
        if ( *v3 )
          sub_14075CDC4(v5);
        if ( v3[4] )
          sub_14075CDC4(v5 + 32);
        v5 += 80;
        v3 += 10;
        --v4;
      }
      while ( v4 );
    }
    sub_1402D8494(a1);
  }
}
