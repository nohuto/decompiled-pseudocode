/*
 * XREFs of ?CreateControllerNavigationOverrideProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180131350
 * Callers:
 *     ?Materialize_BamoControllerNavigationOverrideProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801342A8 (-Materialize_BamoControllerNavigationOverrideProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEA.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000BAE0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000BCD0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

void __fastcall BamoImpl::CreateControllerNavigationOverrideProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8[5]; // [rsp+20h] [rbp-28h] BYREF
  char *v9; // [rsp+58h] [rbp+10h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v8,
    (__int64)this,
    (__int64)a3,
    0LL);
  v9 = (char *)operator new(0x58uLL);
  *((_QWORD *)v9 + 1) = &BamoControllerNavigationOverrideProxy::`vftable'{for `IControllerNavigationOverrideProxy'};
  *((_DWORD *)v9 + 6) = 0;
  *((_QWORD *)v9 + 4) = 0LL;
  *((_DWORD *)v9 + 10) = 0;
  *((_DWORD *)v9 + 11) = 0;
  *((_QWORD *)v9 + 2) = &BamoImpl::BamoControllerNavigationOverrideProxyImpl::`vftable';
  v9[48] = 0;
  *((_DWORD *)v9 + 13) = 0;
  *(_OWORD *)(v9 + 56) = 0LL;
  *((_QWORD *)v9 + 9) = 0LL;
  *((_QWORD *)v9 + 10) = 0LL;
  *(_QWORD *)v9 = &ControllerNavigationOverrideProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v9 + 1) = &BamoControllerNavigationOverrideProxy::`vftable'{for `IControllerNavigationOverrideProxy'};
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v8,
    v5,
    v6,
    v7);
  *(_QWORD *)a3 = v9;
}
