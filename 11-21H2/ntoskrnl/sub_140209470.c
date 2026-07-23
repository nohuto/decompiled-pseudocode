/*
 * XREFs of sub_140209470 @ 0x140209470
 * Callers:
 *     sub_1406831A8 @ 0x1406831A8 (sub_1406831A8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140209470(unsigned int *a1, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  __int64 v5; // [rsp+8h] [rbp+8h]

  v3 = *a1;
  if ( a2 > v3 )
  {
    LODWORD(v5) = a2;
    if ( a2 - v3 >= 0x20 )
      HIDWORD(v5) = 1;
    else
      HIDWORD(v5) = (a1[1] << (a2 - v3)) | 1;
    *(_QWORD *)a1 = v5;
  }
  else
  {
    v4 = v3 - a2;
    if ( v4 < 0x20 )
      a1[1] |= 1 << v4;
  }
}
