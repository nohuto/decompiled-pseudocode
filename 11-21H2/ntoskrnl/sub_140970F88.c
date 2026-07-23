/*
 * XREFs of sub_140970F88 @ 0x140970F88
 * Callers:
 *     sub_140974020 @ 0x140974020 (sub_140974020.c)
 *     sub_1409743A4 @ 0x1409743A4 (sub_1409743A4.c)
 *     sub_140B2F2BC @ 0x140B2F2BC (sub_140B2F2BC.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

_DWORD *__fastcall sub_140970F88(int a1, int a2, const void **a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx

  v6 = sub_1402828F0(256, *(unsigned __int16 *)a3 + 48LL, 0x70486D4Du);
  v7 = v6;
  if ( v6 )
  {
    v6[6] = a1;
    v6[7] = a2;
    *((_WORD *)v6 + 16) = *(_WORD *)a3;
    *((_WORD *)v6 + 17) = *(_WORD *)a3;
    *((_QWORD *)v6 + 5) = v6 + 12;
    memmove(v6 + 12, a3[1], *(unsigned __int16 *)a3);
  }
  return v7;
}
