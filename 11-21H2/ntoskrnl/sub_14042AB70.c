/*
 * XREFs of sub_14042AB70 @ 0x14042AB70
 * Callers:
 *     sub_14024215C @ 0x14024215C (sub_14024215C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14042AB70(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xsaves  byte ptr [rcx] }
  return result;
}
