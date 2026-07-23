/*
 * XREFs of sub_14042AB50 @ 0x14042AB50
 * Callers:
 *     sub_1402423D0 @ 0x1402423D0 (sub_1402423D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14042AB50(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xsavec  byte ptr [rcx] }
  return result;
}
