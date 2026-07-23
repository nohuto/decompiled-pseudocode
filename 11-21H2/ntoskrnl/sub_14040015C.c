/*
 * XREFs of sub_14040015C @ 0x14040015C
 * Callers:
 *     sub_140400108 @ 0x140400108 (sub_140400108.c)
 * Callees:
 *     sub_1404000A8 @ 0x1404000A8 (sub_1404000A8.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_1404068E0 @ 0x1404068E0 (sub_1404068E0.c)
 *     sub_140407254 @ 0x140407254 (sub_140407254.c)
 */

__int64 __fastcall sub_14040015C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned int v10; // eax

  v5 = sub_1404000A8(a3);
  *(_BYTE *)a1 = 0;
  v6 = v5;
  *(_QWORD *)(a1 + 8) = a3;
  v7 = sub_140407254(a3);
  *(_QWORD *)(a1 + 16) = sub_1404068E0(a1 + 64, v7, a3);
  v9 = sub_140401350(v6, v8);
  v10 = sub_140407254(a3);
  *(_QWORD *)(a1 + 24) = sub_140400BBC(v10 + a1 + 64, v9, v6);
  return a1;
}
