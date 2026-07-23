/*
 * XREFs of sub_1405C9980 @ 0x1405C9980
 * Callers:
 *     sub_1405D06F0 @ 0x1405D06F0 (sub_1405D06F0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14038AF44 @ 0x14038AF44 (sub_14038AF44.c)
 *     sub_1405D4150 @ 0x1405D4150 (sub_1405D4150.c)
 *     sub_1407FD7A8 @ 0x1407FD7A8 (sub_1407FD7A8.c)
 *     sub_14081CEB4 @ 0x14081CEB4 (sub_14081CEB4.c)
 */

void sub_1405C9980()
{
  __int64 i; // rbx
  __int64 v1; // rdx
  __int64 j; // rdi

  sub_1402D66A8((ULONG_PTR)&qword_140C225E0);
  for ( i = qword_140C225F0; (__int64 *)i != &qword_140C225F0; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      sub_1402D66A8(i + 32);
      for ( j = *(_QWORD *)(i + 16); j != i + 16; j = *(_QWORD *)j )
      {
        if ( *(_BYTE *)(j + 18) )
        {
          if ( *(_QWORD *)(i + 136) )
          {
            LOBYTE(v1) = *(_BYTE *)(j + 16);
            sub_1407FD7A8(j + 40, v1);
            sub_14038AF44(j);
          }
          if ( *(_QWORD *)(i + 128) )
          {
            LOBYTE(v1) = *(_BYTE *)(j + 17) == 0;
            sub_14081CEB4(j + 40, v1);
            sub_1405D4150(j);
          }
        }
      }
      sub_1402935D0(i + 32);
    }
  }
  sub_1402935D0((ULONG_PTR)&qword_140C225E0);
}
