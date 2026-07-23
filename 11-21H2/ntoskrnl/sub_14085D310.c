/*
 * XREFs of sub_14085D310 @ 0x14085D310
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407FAA3C @ 0x1407FAA3C (sub_1407FAA3C.c)
 *     sub_14085D380 @ 0x14085D380 (sub_14085D380.c)
 */

void __fastcall sub_14085D310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // edi

  v7 = a2;
  if ( *(_QWORD *)(a7 + 328) )
    sub_14042A5E0(a1, a2);
  if ( v7 == 1 )
  {
    sub_14085D380(a7);
  }
  else if ( v7 == 2 )
  {
    sub_1407FAA3C(a7);
  }
}
