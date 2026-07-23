/*
 * XREFs of sub_14082FFE4 @ 0x14082FFE4
 * Callers:
 *     sub_14083008C @ 0x14083008C (sub_14083008C.c)
 *     sub_140A35AE0 @ 0x140A35AE0 (sub_140A35AE0.c)
 * Callees:
 *     sub_1403C5E48 @ 0x1403C5E48 (sub_1403C5E48.c)
 */

_QWORD *__fastcall sub_14082FFE4(int a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  _QWORD *result; // rax
  _WORD *v5; // rcx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v2 = 4;
  if ( a1 >= 1 )
    v2 = a1;
  v3 = 40;
  if ( a2 >= 1 )
    v3 = a2;
  result = sub_1403C5E48(0x20u, v2, 2u, v3, 2u, &v6);
  if ( result )
  {
    *(_DWORD *)result = v6;
    result[2] = result + 4;
    *((_WORD *)result + 4) = v3;
    *((_WORD *)result + 2) = v2;
    v5 = (_WORD *)result + (unsigned __int16)v2 + 16;
    result[3] = v5;
    *v5 = 0;
    *((_WORD *)result + 5) = 1;
    *(_WORD *)result[2] = 0;
    *((_WORD *)result + 3) = 1;
  }
  return result;
}
