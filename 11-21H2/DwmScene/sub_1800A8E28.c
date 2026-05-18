/*
 * XREFs of sub_1800A8E28 @ 0x1800A8E28
 * Callers:
 *     sub_180087CC0 @ 0x180087CC0 (sub_180087CC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A8E28(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return a1;
}
