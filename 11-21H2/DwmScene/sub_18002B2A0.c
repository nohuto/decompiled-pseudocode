/*
 * XREFs of sub_18002B2A0 @ 0x18002B2A0
 * Callers:
 *     sub_18002B268 @ 0x18002B268 (sub_18002B268.c)
 *     sub_18002B33C @ 0x18002B33C (sub_18002B33C.c)
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18007BD68 @ 0x18007BD68 (sub_18007BD68.c)
 *     sub_18007BD8C @ 0x18007BD8C (sub_18007BD8C.c)
 */

__int64 __fastcall sub_18002B2A0(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // r11d
  volatile signed __int32 *v7; // rax
  int v8; // r8d
  __int64 v9; // r10

  *(_QWORD *)(a1 + 32) = 15LL;
  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  *(_DWORD *)(a1 + 40) = 3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 48) = a3;
  v4 = a2;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 64) = 0LL;
  v5 = sub_18007BD8C();
  sub_18007BD68(v5, v6, 2LL);
  v7 = (volatile signed __int32 *)sub_18001DE70((__int64)&unk_1801F74DC + 4 * v4);
  _InterlockedAdd(v7, v8 - 1);
  sub_18007BD68(v9, *(unsigned int *)(a1 + 48), 0LL);
  return a1;
}
