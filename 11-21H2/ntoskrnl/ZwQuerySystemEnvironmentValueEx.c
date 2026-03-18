/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x14041E460
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x14083B728 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x140A1F7E0 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
