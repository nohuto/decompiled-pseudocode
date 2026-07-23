/*
 * XREFs of sub_140A4CD50 @ 0x140A4CD50
 * Callers:
 *     sub_140A4D310 @ 0x140A4D310 (sub_140A4D310.c)
 * Callees:
 *     sub_140A4D208 @ 0x140A4D208 (sub_140A4D208.c)
 */

__int64 __fastcall sub_140A4CD50(int a1, int a2, __int64 a3)
{
  _DWORD *v3; // rax
  int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v3 = (_DWORD *)sub_140A4D208(a1, a2, (unsigned int)&v5, (_DWORD)qword_140C22C58, a3, 0);
  return ((*v3 >> 8) & 0x3FFFFF) + 8 * (unsigned int)(unsigned __int8)*v3 + 4;
}
