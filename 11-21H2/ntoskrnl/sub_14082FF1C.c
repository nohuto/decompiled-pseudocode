/*
 * XREFs of sub_14082FF1C @ 0x14082FF1C
 * Callers:
 *     sub_14083008C @ 0x14083008C (sub_14083008C.c)
 * Callees:
 *     sub_1403C5E48 @ 0x1403C5E48 (sub_1403C5E48.c)
 */

_QWORD *sub_14082FF1C()
{
  _QWORD *result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  result = sub_1403C5E48(0x18u, 4u, 0x1Cu, 0, 0, &v1);
  if ( result )
  {
    *(_DWORD *)result = v1;
    result[2] = result + 3;
    *((_DWORD *)result + 1) = 4;
  }
  return result;
}
