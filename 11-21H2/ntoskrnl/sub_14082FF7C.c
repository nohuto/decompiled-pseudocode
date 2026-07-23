/*
 * XREFs of sub_14082FF7C @ 0x14082FF7C
 * Callers:
 *     sub_14082FDD8 @ 0x14082FDD8 (sub_14082FDD8.c)
 *     sub_140830634 @ 0x140830634 (sub_140830634.c)
 * Callees:
 *     sub_1403C5E48 @ 0x1403C5E48 (sub_1403C5E48.c)
 */

_QWORD *__fastcall sub_14082FF7C(int a1)
{
  unsigned int v1; // ebx
  _QWORD *result; // rax
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v1 = 4;
  if ( a1 >= 1 )
    v1 = a1;
  result = sub_1403C5E48(0x10u, v1, 0xCu, 0, 0, &v3);
  if ( result )
  {
    *(_DWORD *)result = v3;
    result[1] = result + 2;
    *((_WORD *)result + 2) = 0;
    *((_WORD *)result + 3) = v1;
  }
  return result;
}
