/*
 * XREFs of sub_1403B37F0 @ 0x1403B37F0
 * Callers:
 *     sub_1403B36F4 @ 0x1403B36F4 (sub_1403B36F4.c)
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403B58F0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     sub_1403BC758 @ 0x1403BC758 (sub_1403BC758.c)
 *     sub_1403BE95C @ 0x1403BE95C (sub_1403BE95C.c)
 *     sub_14051FA44 @ 0x14051FA44 (sub_14051FA44.c)
 *     sub_140A550E0 @ 0x140A550E0 (sub_140A550E0.c)
 *     sub_140B27364 @ 0x140B27364 (sub_140B27364.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char sub_1403B37F0()
{
  char v0; // r8

  v0 = byte_140C0978F;
  if ( byte_140C0978F == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX != 1986945624;
    }
    byte_140C0978F = v0;
  }
  return v0;
}
