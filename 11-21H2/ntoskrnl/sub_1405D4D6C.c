/*
 * XREFs of sub_1405D4D6C @ 0x1405D4D6C
 * Callers:
 *     PoFxSetComponentResidency @ 0x1405CACD0 (PoFxSetComponentResidency.c)
 * Callees:
 *     sub_140354B48 @ 0x140354B48 (sub_140354B48.c)
 *     sub_140354BBC @ 0x140354BBC (sub_140354BBC.c)
 *     sub_1403565AC @ 0x1403565AC (sub_1403565AC.c)
 *     sub_1403565F8 @ 0x1403565F8 (sub_1403565F8.c)
 *     sub_14035666C @ 0x14035666C (sub_14035666C.c)
 *     sub_1403567F8 @ 0x1403567F8 (sub_1403567F8.c)
 *     sub_140356948 @ 0x140356948 (sub_140356948.c)
 */

__int64 __fastcall sub_1405D4D6C(unsigned int *a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rdi
  int v6; // r14d
  char v7; // al
  char v8; // bp
  unsigned int v9; // ebx
  unsigned int v10; // eax
  KIRQL v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v5 = (__int64)&a1[52 * a2 + 48];
  v12 = 0;
  if ( a3 != -1LL )
    v3 = a3;
  v6 = sub_140354BBC(v5, v3);
  v7 = sub_140356948((__int64)a1, (volatile LONG *)v5, 6u, 1u, &v12);
  *(_QWORD *)(v5 + 128) = v3;
  v8 = v7;
  *(_QWORD *)(v5 + 120) = v3;
  if ( *(_DWORD *)(v5 + 160) != v6 )
  {
    *(_DWORD *)(v5 + 160) = v6;
    v9 = sub_1403565AC(a1, v5, 2);
    sub_140354B48((__int64)a1, (unsigned int *)v5, 1);
    sub_1403567F8((__int64)a1, v5, 2);
    v10 = sub_1403565AC(a1, v5, 2);
    sub_14035666C(v9, v10);
  }
  return sub_1403565F8((__int64)a1, (volatile LONG *)v5, v8, v12);
}
