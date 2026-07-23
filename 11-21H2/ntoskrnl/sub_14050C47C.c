/*
 * XREFs of sub_14050C47C @ 0x14050C47C
 * Callers:
 *     sub_14050BFD0 @ 0x14050BFD0 (sub_14050BFD0.c)
 *     sub_14050D91C @ 0x14050D91C (sub_14050D91C.c)
 * Callees:
 *     sub_140354420 @ 0x140354420 (sub_140354420.c)
 *     sub_14050C570 @ 0x14050C570 (sub_14050C570.c)
 */

__int64 __fastcall sub_14050C47C(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8

  v7 = sub_140354420(a1, 3u, a2, 1, a4);
  v8 = (unsigned int)v7;
  if ( v7 >= 0
    || (v9 = sub_140354420(a1, 2u, a2, 1, a4), v8 = (unsigned int)v9, v9 >= 0)
    || (v10 = sub_140354420(a1, 1u, a2, 1, a4), v8 = (unsigned int)v10, v10 >= 0) )
  {
    sub_14050C570(a1, 17LL, v8);
    sub_14050C570(v11, 18LL, v12);
  }
  return (unsigned int)v8;
}
