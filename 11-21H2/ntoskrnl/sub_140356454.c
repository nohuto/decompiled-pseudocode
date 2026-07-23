/*
 * XREFs of sub_140356454 @ 0x140356454
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_1403562C8 @ 0x1403562C8 (sub_1403562C8.c)
 *     sub_140356350 @ 0x140356350 (sub_140356350.c)
 *     sub_14045E5E0 @ 0x14045E5E0 (sub_14045E5E0.c)
 *     sub_1405D4C64 @ 0x1405D4C64 (sub_1405D4C64.c)
 *     sub_140823318 @ 0x140823318 (sub_140823318.c)
 * Callees:
 *     sub_140355DFC @ 0x140355DFC (sub_140355DFC.c)
 *     sub_1403565AC @ 0x1403565AC (sub_1403565AC.c)
 *     sub_1403565F8 @ 0x1403565F8 (sub_1403565F8.c)
 *     sub_14035666C @ 0x14035666C (sub_14035666C.c)
 *     sub_140356698 @ 0x140356698 (sub_140356698.c)
 *     sub_1403567F8 @ 0x1403567F8 (sub_1403567F8.c)
 *     sub_140356948 @ 0x140356948 (sub_140356948.c)
 *     sub_140356AF0 @ 0x140356AF0 (sub_140356AF0.c)
 *     sub_140356BCC @ 0x140356BCC (sub_140356BCC.c)
 */

char __fastcall sub_140356454(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  char v10; // r12
  unsigned int v11; // ebp
  unsigned int v12; // r15d
  char v13; // r14
  unsigned int v14; // eax
  bool v15; // si
  __int64 v16; // r9
  __int64 v17; // r8

  v6 = (int)a3;
  v10 = sub_140356948(a1, a2, a3);
  if ( (_DWORD)v6 == 6 || (v11 = dword_140002EDC[34 * v6], (int)v11 < 2) )
    v11 = 2;
  v12 = sub_1403565AC(a1, a2, v11);
  if ( (_DWORD)v6 != 6 )
    sub_140356AF0(a1, a2, (unsigned int)v6);
  if ( a4 != 6 )
    sub_140356BCC(a1, a2, a4, 0LL);
  sub_1403567F8(a1, a2, v11);
  v13 = sub_140356698(a1, a2, a6);
  v14 = sub_1403565AC(a1, a2, v11);
  v15 = 0;
  if ( (*(_BYTE *)(a1 + 24) & 1) == 0 && !v14 && !v13 && !*(_DWORD *)(a1 + 140) )
    v15 = *(_BYTE *)(a1 + 136) != 0;
  sub_14035666C(v12, v14);
  LOBYTE(v16) = 0;
  LOBYTE(v17) = v10;
  sub_1403565F8(a1, a2, v17, v16);
  if ( v15 )
    return sub_140355DFC(a1, a6);
  return v13;
}
