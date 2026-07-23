/*
 * XREFs of sub_1405D4C64 @ 0x1405D4C64
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 * Callees:
 *     sub_140356454 @ 0x140356454 (sub_140356454.c)
 *     sub_1403565AC @ 0x1403565AC (sub_1403565AC.c)
 *     sub_1403565F8 @ 0x1403565F8 (sub_1403565F8.c)
 *     sub_14035666C @ 0x14035666C (sub_14035666C.c)
 *     sub_140356948 @ 0x140356948 (sub_140356948.c)
 *     sub_14045EA32 @ 0x14045EA32 (sub_14045EA32.c)
 */

__int64 __fastcall sub_1405D4C64(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  char v5; // al
  __int64 v6; // rcx
  char v7; // bp
  int v8; // r8d
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 v12; // [rsp+20h] [rbp-18h]
  KIRQL v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0;
  v3 = 208LL * a2 + a1 + 192;
  v5 = sub_140356948(a1, (volatile LONG *)v3, 6u, 1u, &v13);
  v6 = *(_QWORD *)(v3 + 64);
  v7 = v5;
  if ( *(_DWORD *)(v6 + 12) == 1 )
  {
    *(_DWORD *)(v6 + 12) = 2;
    sub_1403565AC((unsigned int *)a1, v3, 2);
    **(_DWORD **)(v3 + 64) |= 8u;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 104));
    v9 = sub_1403565AC((unsigned int *)a1, v3, v8);
    sub_14035666C(v10, v9);
    return sub_1403565F8(a1, (volatile LONG *)v3, v7, v13);
  }
  else
  {
    sub_1403565F8(a1, (volatile LONG *)v3, v5, v13);
    sub_140356454(a1, v3, 1u, 6u, v12, 0LL);
    return sub_14045EA32(*(_QWORD *)(a1 + 32), a2, *(_DWORD *)(v3 + 180), *(_DWORD *)(v3 + 176), 1);
  }
}
