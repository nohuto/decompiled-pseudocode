/*
 * XREFs of sub_14042AB90 @ 0x14042AB90
 * Callers:
 *     sub_14022E800 @ 0x14022E800 (sub_14022E800.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14042AB90(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xrstors byte ptr [rcx] }
  return result;
}
