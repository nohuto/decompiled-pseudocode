/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x14041DAC0
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x14082BC84 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x140A5E390 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
