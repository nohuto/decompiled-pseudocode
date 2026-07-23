/*
 * XREFs of sub_140408B40 @ 0x140408B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140400FB0 @ 0x140400FB0 (sub_140400FB0.c)
 *     sub_1404068A4 @ 0x1404068A4 (sub_1404068A4.c)
 *     sub_1404068E0 @ 0x1404068E0 (sub_1404068E0.c)
 *     sub_140406AD8 @ 0x140406AD8 (sub_140406AD8.c)
 *     sub_140407254 @ 0x140407254 (sub_140407254.c)
 *     sub_140408D00 @ 0x140408D00 (sub_140408D00.c)
 *     sub_1404091C8 @ 0x1404091C8 (sub_1404091C8.c)
 *     sub_140409980 @ 0x140409980 (sub_140409980.c)
 *     sub_140409F50 @ 0x140409F50 (sub_140409F50.c)
 */

void *__fastcall sub_140408B40(__int64 a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, char a5, __int64 a6, __int64 a7)
{
  int v7; // ebx
  unsigned int v10; // eax
  _BYTE *v11; // r12
  __int64 v12; // r15
  unsigned int v13; // eax
  _BYTE *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rsi

  v7 = (int)a2;
  if ( (a5 & 1) != 0 )
    return (void *)sub_1404091C8(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, a6, a7);
  v10 = sub_140407254(a1);
  v11 = (_BYTE *)sub_1404068E0(a6, v10, a1);
  v12 = (unsigned int)sub_140407254(a1) + a6;
  v13 = sub_140407254(a1);
  v14 = (_BYTE *)sub_1404068E0(v12, v13, a1);
  v15 = (unsigned int)sub_140407254(a1) + v12;
  v16 = a7 - 2 * (unsigned int)sub_140407254(a1);
  sub_140400FB0();
  sub_140400FB0();
  sub_140409F50(a1, v7, (_DWORD)a3, 1, v15, v16);
  sub_140408D00(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)v11, v15, v16);
  sub_140409980(a1, (_DWORD)a2, (_DWORD)v14, 0, v15, v16);
  sub_140406AD8(a1, v14, v11);
  sub_140406AD8(a1, a2, v11);
  sub_140406AD8(a1, a3, v11);
  return sub_1404068A4(a1, v11, a4);
}
