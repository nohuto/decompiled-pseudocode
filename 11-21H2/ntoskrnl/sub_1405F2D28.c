/*
 * XREFs of sub_1405F2D28 @ 0x1405F2D28
 * Callers:
 *     sub_1405F2C80 @ 0x1405F2C80 (sub_1405F2C80.c)
 * Callees:
 *     HviIsHypervisorVendorMicrosoft @ 0x1403BF790 (HviIsHypervisorVendorMicrosoft.c)
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 */

char sub_1405F2D28()
{
  bool v5; // di
  char v6; // si
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v14; // bl
  __int128 v16; // [rsp+20h] [rbp-50h]
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF

  _RAX = 0LL;
  __asm { cpuid }
  v5 = 0;
  v18 = 0LL;
  if ( (_DWORD)_RBX != 1970169159 || (_DWORD)_RDX != 1231384169 || (v6 = 1, (_DWORD)_RCX != 1818588270) )
    v6 = 0;
  v16 = 0LL;
  v17 = 0LL;
  HviGetHypervisorFeatures(&v17);
  _RAX = (unsigned __int64)v17 >> 44;
  if ( (v17 & 0x100000000000LL) != 0 )
  {
    LOBYTE(_RAX) = HviIsHypervisorVendorMicrosoft(v8, v7);
    if ( (_BYTE)_RAX )
    {
      _RAX = 1073741831LL;
      __asm { cpuid }
      BYTE8(v16) = _RCX;
    }
  }
  if ( (BYTE8(v16) & 1) != 0 )
  {
    v14 = 0;
    LOBYTE(_RAX) = HviGetHardwareFeatures(&v18);
    v5 = (v18 & 0x8000) != 0;
  }
  else
  {
    v14 = 1;
  }
  byte_140D04924 = v6;
  byte_140C0D790 = v14;
  byte_140D04926 = v5;
  byte_140D04925 = 1;
  return _RAX;
}
