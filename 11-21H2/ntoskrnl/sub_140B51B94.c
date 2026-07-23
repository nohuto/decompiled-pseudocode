/*
 * XREFs of sub_140B51B94 @ 0x140B51B94
 * Callers:
 *     sub_140B26348 @ 0x140B26348 (sub_140B26348.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_140968AF4 @ 0x140968AF4 (sub_140968AF4.c)
 */

__int64 __fastcall sub_140B51B94(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // esi
  __int64 v3; // rdi
  unsigned int v4; // r9d
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 40);
  sub_1402C1550(v1);
  v7 = v1 << 12;
  v6 = v3 << 12;
  v4 = 2560;
  if ( v2 != 24 )
    v4 = 2048;
  return sub_140968AF4(&StartContext, &v7, (unsigned __int64 *)&v6, v4, 0);
}
