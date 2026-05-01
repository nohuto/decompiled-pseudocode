/*
 * XREFs of sub_18000CA24 @ 0x18000CA24
 * Callers:
 *     sub_18001056C @ 0x18001056C (sub_18001056C.c)
 * Callees:
 *     sub_180010314 @ 0x180010314 (sub_180010314.c)
 */

char *__fastcall sub_18000CA24(char *Destination, char *a2, _BYTE *a3, _QWORD *a4)
{
  rsize_t v6; // rax
  const void *v7; // r8
  __int64 v8; // rdx
  rsize_t v9; // rdx
  rsize_t v10; // rsi

  if ( Destination != a2 && a3 && *a3 && (v6 = sub_180010314(a3), v9 = v8 - (_QWORD)Destination, v10 = v6, v9 >= v6) )
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
