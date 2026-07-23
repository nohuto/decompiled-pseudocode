/*
 * XREFs of sub_140A9A0E0 @ 0x140A9A0E0
 * Callers:
 *     sub_140A99F58 @ 0x140A99F58 (sub_140A99F58.c)
 * Callees:
 *     sub_140A996AC @ 0x140A996AC (sub_140A996AC.c)
 */

PVOID __fastcall sub_140A9A0E0(_QWORD **a1, _QWORD *a2, __int64 a3)
{
  unsigned int *v3; // rax
  PVOID result; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx

  v3 = (unsigned int *)qword_140D57500;
  ++*((_DWORD *)qword_140D57500 + 8212);
  result = (PVOID)v3[8212];
  if ( ((unsigned __int8)result & 0xF) == 0 )
  {
    v7 = *a1;
    while ( v7 != a1 )
    {
      v8 = (__int64)(v7 - 5);
      v7 = (_QWORD *)*v7;
      result = sub_140A996AC(v8, (__int64)a2, a3, a2);
    }
  }
  return result;
}
