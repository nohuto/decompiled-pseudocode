/*
 * XREFs of sub_1405695E0 @ 0x1405695E0
 * Callers:
 *     sub_140569910 @ 0x140569910 (sub_140569910.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405695E0(__int64 a1, __int64 a2, __int64 _R8)
{
  _RDX = a1 - 8;
  __asm { wrussq  qword ptr [rdx], r8 }
  __writemsr(0x6A7u, a1 - 8);
  return 0LL;
}
