/*
 * XREFs of ?CreateDataProviderRegistrarProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180050F94
 * Callers:
 *     ?Materialize_BamoDataProviderRegistrarProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180050EF0 (-Materialize_BamoDataProviderRegistrarProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000BAE0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000BCD0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

void __fastcall BamoImpl::CreateDataProviderRegistrarProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct dataprovider_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8[5]; // [rsp+20h] [rbp-28h] BYREF
  _OWORD *v9; // [rsp+58h] [rbp+10h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v8,
    (__int64)this,
    (__int64)a3,
    0LL);
  v9 = operator new(0x30uLL);
  *v9 = 0LL;
  v9[1] = 0LL;
  v9[2] = 0LL;
  *((_QWORD *)v9 + 1) = &DataProviderRegistrarProxy::`vftable'{for `IDataProviderRegistrarProxy'};
  *((_DWORD *)v9 + 6) = 0;
  *((_QWORD *)v9 + 4) = 0LL;
  *((_DWORD *)v9 + 10) = 0;
  *((_DWORD *)v9 + 11) = 0;
  *((_QWORD *)v9 + 2) = &BamoImpl::BamoDataProviderRegistrarProxyImpl::`vftable';
  *(_QWORD *)v9 = &DataProviderRegistrarProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v9 + 1) = &DataProviderRegistrarProxy::`vftable'{for `IDataProviderRegistrarProxy'};
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v8,
    v5,
    v6,
    v7);
  *(_QWORD *)a3 = v9;
}
