/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x140615414
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x14053FE90 (HvlpHvIdentityInfoCallback.c)
 *     HvlGetSystemPasidCapabilities @ 0x140544450 (HvlGetSystemPasidCapabilities.c)
 *     HviGetHardwareFeatures @ 0x1406153A0 (HviGetHardwareFeatures.c)
 *     HviGetIptFeatures @ 0x1406154EC (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140940E58 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140382850 (HviIsAnyHypervisorPresent.c)
 */

char __fastcall HviGetHypervisorVendorAndMaxFunction(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
  if ( (_BYTE)_RAX )
  {
    _RAX = 0x40000000LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
