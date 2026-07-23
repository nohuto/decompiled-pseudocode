/*
 * XREFs of sub_140A70244 @ 0x140A70244
 * Callers:
 *     sub_1403AE2FC @ 0x1403AE2FC (sub_1403AE2FC.c)
 *     sub_1403AE428 @ 0x1403AE428 (sub_1403AE428.c)
 *     sub_140A6F708 @ 0x140A6F708 (sub_140A6F708.c)
 *     sub_140A73424 @ 0x140A73424 (sub_140A73424.c)
 *     sub_140A73628 @ 0x140A73628 (sub_140A73628.c)
 *     sub_140A7434C @ 0x140A7434C (sub_140A7434C.c)
 *     sub_140A744CC @ 0x140A744CC (sub_140A744CC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140A70244(__int64 a1, char *a2, int a3)
{
  __int64 v3; // rcx
  char result; // al

  if ( a3 )
  {
    v3 = a1 - (_QWORD)a2;
    do
    {
      result = *a2;
      a2[v3] = *a2;
      ++a2;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
