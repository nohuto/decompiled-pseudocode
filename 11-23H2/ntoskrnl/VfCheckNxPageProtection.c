/*
 * XREFs of VfCheckNxPageProtection @ 0x1405CE900
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x140AC3868 (VfCheckPageProtection.c)
 */

__int64 __fastcall VfCheckNxPageProtection(int a1, int a2)
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPageProtection(a1, a2);
  return result;
}
