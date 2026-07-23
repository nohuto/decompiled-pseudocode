/*
 * XREFs of HvipApertureDetectParameters @ 0x1405B6280
 * Callers:
 *     HviEnterKernelAperture @ 0x1405B61D4 (HviEnterKernelAperture.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x140382EE0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140383920 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x1406158F0 (HviGetHardwareFeatures.c)
 */

char HvipApertureDetectParameters()
{
  bool v5; // di
  char v6; // si
  char v12; // bl
  __int128 v14; // [rsp+20h] [rbp-50h]
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF

  _RAX = 0LL;
  __asm { cpuid }
  v5 = 0;
  v16 = 0LL;
  if ( (_DWORD)_RBX != 1970169159 || (_DWORD)_RDX != 1231384169 || (v6 = 1, (_DWORD)_RCX != 1818588270) )
    v6 = 0;
  v14 = 0LL;
  v15 = 0LL;
  HviGetHypervisorFeatures(&v15);
  _RAX = (unsigned __int64)v15 >> 44;
  if ( (v15 & 0x100000000000LL) != 0 )
  {
    LOBYTE(_RAX) = HviIsHypervisorVendorMicrosoft();
    if ( (_BYTE)_RAX )
    {
      _RAX = 1073741831LL;
      __asm { cpuid }
      BYTE8(v14) = _RCX;
    }
  }
  if ( (BYTE8(v14) & 1) != 0 )
  {
    v12 = 0;
    LOBYTE(_RAX) = HviGetHardwareFeatures(&v16);
    v5 = (v16 & 0x8000) != 0;
  }
  else
  {
    v12 = 1;
  }
  byte_140D1BE5C = v6;
  byte_140C0DC50 = v12;
  byte_140D1BE5D = v5;
  byte_140D1BE5E = 1;
  return _RAX;
}
