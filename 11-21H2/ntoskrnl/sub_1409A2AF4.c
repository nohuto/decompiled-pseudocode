/*
 * XREFs of sub_1409A2AF4 @ 0x1409A2AF4
 * Callers:
 *     sub_1409A25D0 @ 0x1409A25D0 (sub_1409A25D0.c)
 * Callees:
 *     sub_1409A216C @ 0x1409A216C (sub_1409A216C.c)
 *     sub_1409A21EC @ 0x1409A21EC (sub_1409A21EC.c)
 *     sub_1409A2EE4 @ 0x1409A2EE4 (sub_1409A2EE4.c)
 */

void __fastcall sub_1409A2AF4(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // esi

  if ( *(_QWORD *)(a2 + 56) )
  {
    if ( *(_QWORD *)(a2 + 24) != 0xFFFFFFFFLL && a3 <= 1 )
      sub_1409A216C((int *)a1, a2, 0);
    sub_1409A21EC(a1, a2, a3);
    if ( *(_QWORD *)(a2 + 24) == 0xFFFFFFFFLL )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
    }
    else
    {
      v6 = 2;
      if ( a3 == 2 )
      {
        sub_1409A216C((int *)a1, a2, 2u);
      }
      else if ( a3 == 3 )
      {
        sub_1409A216C((int *)a1, a2, 1u);
        v6 = 1;
      }
      else
      {
        v6 = 0;
      }
      sub_1409A2EE4(a1, a2, v6);
    }
  }
}
