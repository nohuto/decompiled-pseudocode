/*
 * XREFs of sub_1800982FC @ 0x1800982FC
 * Callers:
 *     sub_18007BF3C @ 0x18007BF3C (sub_18007BF3C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800982FC(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return a1;
}
