/*
 * XREFs of sub_180089564 @ 0x180089564
 * Callers:
 *     sub_18008925C @ 0x18008925C (sub_18008925C.c)
 *     sub_1800892EC @ 0x1800892EC (sub_1800892EC.c)
 *     sub_18008937C @ 0x18008937C (sub_18008937C.c)
 *     sub_18008940C @ 0x18008940C (sub_18008940C.c)
 * Callees:
 *     sub_18008B3D4 @ 0x18008B3D4 (sub_18008B3D4.c)
 */

__int64 __fastcall sub_180089564(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v7; // rcx
  __int64 result; // rax

  sub_18008B3D4(a1, a2, a3, a4, a5, a6);
  *(_DWORD *)(v7 + 32) = a7;
  result = v7;
  *(_QWORD *)v7 = &Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`vftable';
  return result;
}
