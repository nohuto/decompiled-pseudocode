/*
 * XREFs of ?CreateManualDragAreaClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180123D08
 * Callers:
 *     ?Materialize_BamoManualDragAreaClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180127EE4 (-Materialize_BamoManualDragAreaClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000B660 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B850 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

void __fastcall BamoImpl::CreateManualDragAreaClientProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8[5]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp+10h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v8,
    (__int64)this,
    (__int64)a3,
    0LL);
  v9 = operator new(0x50uLL);
  memset_0(v9, 0, 0x50uLL);
  v9[1] = &BamoManualDragAreaClientProxy::`vftable'{for `IManualDragAreaClientProxy'};
  *((_DWORD *)v9 + 6) = 0;
  v9[4] = 0LL;
  *((_DWORD *)v9 + 10) = 0;
  *((_DWORD *)v9 + 11) = 0;
  v9[2] = &BamoImpl::BamoManualDragAreaClientProxyImpl::`vftable';
  *((_OWORD *)v9 + 3) = 0LL;
  *((_DWORD *)v9 + 16) = 0;
  *v9 = &ManualDragAreaClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v9[1] = &BamoManualDragAreaClientProxy::`vftable'{for `IManualDragAreaClientProxy'};
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v8,
    v5,
    v6,
    v7);
  *(_QWORD *)a3 = v9;
}
