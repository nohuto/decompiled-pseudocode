/*
 * XREFs of ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x180041F74
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041DD0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800E4190 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x1800E44A0 (-OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800E4688 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall RIMDeviceCollection::ReadInputReportFromRIM(
        RIMDeviceCollection *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_QWORD *)this + 337) = *((_QWORD *)this + 335);
  v5 = RIMReadInput(
         *((_QWORD *)this + 10),
         (char *)this + 2696,
         *((unsigned int *)this + 672),
         *((_QWORD *)this + 5),
         (char *)this + 2704,
         (char *)this + 2712,
         (char *)this + 2720);
  if ( v5 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x110,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             (const char *)(unsigned int)v5,
             a5);
  else
    return 0;
}
