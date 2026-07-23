/*
 * XREFs of sub_140B0DDAC @ 0x140B0DDAC
 * Callers:
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 * Callees:
 *     sub_140A7C1B8 @ 0x140A7C1B8 (sub_140A7C1B8.c)
 */

char __fastcall sub_140B0DDAC(_QWORD ***a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  __int64 v4; // rax

  v2 = (__int64)(*a1)[6];
  v3 = **a1;
  v4 = v2 + *((unsigned int *)*a1 + 16);
  qword_140C1ACC8 = v2;
  for ( qword_140C1AD28 = v4; v3 != a1; v3 = (_QWORD *)*v3 )
    LOBYTE(v4) = sub_140A7C1B8((__int64)v3, v2, 0);
  return v4;
}
