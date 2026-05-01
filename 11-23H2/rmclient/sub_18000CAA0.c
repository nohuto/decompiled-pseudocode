/*
 * XREFs of sub_18000CAA0 @ 0x18000CAA0
 * Callers:
 *     sub_18001056C @ 0x18001056C (sub_18001056C.c)
 * Callees:
 *     sub_180010340 @ 0x180010340 (sub_180010340.c)
 */

char *__fastcall sub_18000CAA0(char *Destination, char *a2, _WORD *a3, _QWORD *a4)
{
  rsize_t v6; // rax
  const void *v7; // r8
  __int64 v8; // r10
  rsize_t v9; // r10
  rsize_t v10; // rsi

  if ( Destination != a2 && a3 && *a3 && (v6 = sub_180010340(a3), v9 = v8 - (_QWORD)Destination, v10 = v6, v9 >= v6) )
  {
    memcpy_s(Destination, v9, v7, v6);
    if ( a4 )
      *a4 = Destination;
    return &Destination[v10];
  }
  else
  {
    if ( a4 )
      *a4 = 0LL;
    return Destination;
  }
}
