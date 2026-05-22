/*
 * XREFs of ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x1800BC97C
 * Callers:
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800BC1E4 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x1800BC5D0 (-OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800BC7B8 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDeviceCollection::ReadInputReportFromRIM(RIMDeviceCollection *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_QWORD *)this + 337) = *((_QWORD *)this + 335);
  v1 = RIMReadInput(*((_QWORD *)this + 10), (char *)this + 2696, *((unsigned int *)this + 672), *((_QWORD *)this + 5));
  if ( v1 >= 0 )
    return 0LL;
  else
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x110,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             (const char *)(unsigned int)v1);
}
