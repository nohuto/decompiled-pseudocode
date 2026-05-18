/*
 * XREFs of sub_180097B04 @ 0x180097B04
 * Callers:
 *     sub_1800977BC @ 0x1800977BC (sub_1800977BC.c)
 *     sub_18009784C @ 0x18009784C (sub_18009784C.c)
 *     sub_1800978DC @ 0x1800978DC (sub_1800978DC.c)
 *     sub_18009796C @ 0x18009796C (sub_18009796C.c)
 * Callees:
 *     sub_18009A154 @ 0x18009A154 (sub_18009A154.c)
 */

__int64 __fastcall sub_180097B04(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v7; // rcx
  __int64 result; // rax

  sub_18009A154(a1, a2, a3, a4, a5, a6);
  *(_DWORD *)(v7 + 32) = a7;
  result = v7;
  *(_QWORD *)v7 = &Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`vftable';
  return result;
}
