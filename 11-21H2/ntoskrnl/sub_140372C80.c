/*
 * XREFs of sub_140372C80 @ 0x140372C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140372C80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  __asm { rdtscp }
  return (a2 << 32) | v2;
}
