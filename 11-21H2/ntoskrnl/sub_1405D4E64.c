/*
 * XREFs of sub_1405D4E64 @ 0x1405D4E64
 * Callers:
 *     PoFxSetComponentWake @ 0x1405CAD20 (PoFxSetComponentWake.c)
 * Callees:
 *     sub_140354B48 @ 0x140354B48 (sub_140354B48.c)
 *     sub_1403565AC @ 0x1403565AC (sub_1403565AC.c)
 *     sub_1403565F8 @ 0x1403565F8 (sub_1403565F8.c)
 *     sub_14035666C @ 0x14035666C (sub_14035666C.c)
 *     sub_1403567F8 @ 0x1403567F8 (sub_1403567F8.c)
 *     sub_140356948 @ 0x140356948 (sub_140356948.c)
 */

__int64 __fastcall sub_1405D4E64(unsigned int *a1, int a2, char a3)
{
  __int64 v4; // rdi
  int v6; // ebx
  char v7; // al
  char v8; // r14
  unsigned int v9; // ebx
  unsigned int v10; // eax
  KIRQL v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  v4 = (__int64)&a1[52 * a2 + 48];
  if ( a3 )
    v6 = *(_DWORD *)(v4 + 148);
  else
    v6 = *(_DWORD *)(v4 + 188) - 1;
  v7 = sub_140356948((__int64)a1, (volatile LONG *)v4, 6u, 1u, &v12);
  *(_BYTE *)(v4 + 144) = a3;
  v8 = v7;
  if ( *(_DWORD *)(v4 + 164) != v6 )
  {
    *(_DWORD *)(v4 + 164) = v6;
    v9 = sub_1403565AC(a1, v4, 2);
    sub_140354B48((__int64)a1, (unsigned int *)v4, 1);
    sub_1403567F8((__int64)a1, v4, 2);
    v10 = sub_1403565AC(a1, v4, 2);
    sub_14035666C(v9, v10);
  }
  return sub_1403565F8((__int64)a1, (volatile LONG *)v4, v8, v12);
}
