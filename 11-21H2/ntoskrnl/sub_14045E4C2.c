/*
 * XREFs of sub_14045E4C2 @ 0x14045E4C2
 * Callers:
 *     PoFxSetComponentLatency @ 0x14045DDB0 (PoFxSetComponentLatency.c)
 * Callees:
 *     sub_140354B48 @ 0x140354B48 (sub_140354B48.c)
 *     sub_1403565AC @ 0x1403565AC (sub_1403565AC.c)
 *     sub_1403565F8 @ 0x1403565F8 (sub_1403565F8.c)
 *     sub_14035666C @ 0x14035666C (sub_14035666C.c)
 *     sub_1403567F8 @ 0x1403567F8 (sub_1403567F8.c)
 *     sub_140356948 @ 0x140356948 (sub_140356948.c)
 *     sub_1403BA314 @ 0x1403BA314 (sub_1403BA314.c)
 */

__int64 __fastcall sub_14045E4C2(unsigned int *a1, int a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  int v6; // r14d
  char v7; // al
  char v8; // bp
  unsigned int v9; // ebx
  unsigned int v10; // eax
  KIRQL v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0;
  v4 = (__int64)&a1[52 * a2 + 48];
  v6 = sub_1403BA314(v4, a3);
  v7 = sub_140356948((__int64)a1, (volatile LONG *)v4, 6u, 1u, &v12);
  *(_QWORD *)(v4 + 112) = a3;
  v8 = v7;
  if ( *(_DWORD *)(v4 + 156) != v6 )
  {
    *(_DWORD *)(v4 + 156) = v6;
    v9 = sub_1403565AC(a1, v4, 2);
    sub_140354B48((__int64)a1, (unsigned int *)v4, 1);
    sub_1403567F8((__int64)a1, v4, 2);
    v10 = sub_1403565AC(a1, v4, 2);
    sub_14035666C(v9, v10);
  }
  return sub_1403565F8((__int64)a1, (volatile LONG *)v4, v8, v12);
}
