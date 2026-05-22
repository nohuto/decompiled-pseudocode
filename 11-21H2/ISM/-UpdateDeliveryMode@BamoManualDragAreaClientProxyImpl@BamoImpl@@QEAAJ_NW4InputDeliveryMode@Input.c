/*
 * XREFs of ?UpdateDeliveryMode@BamoManualDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NW4InputDeliveryMode@Input@Internal@UI@Windows@@@Z @ 0x18013A080
 * Callers:
 *     ?Thunk_UpdateDeliveryMode_16@?$IManualDragAreaClientProxy_Receive@VBamoManualDragAreaClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18013A050 (-Thunk_UpdateDeliveryMode_16@-$IManualDragAreaClientProxy_Receive@VBamoManualDragAreaClientProxy.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoManualDragAreaClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18013A1C0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoManualDragAreaClientProxyImpl@BamoImpl@@UEAAXPEA.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoManualDragAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoManualDragAreaClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1801397CC (--0-$CalloutWrapper@VBamoManualDragAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsof_ea_1801397CC.c)
 *     ??1?$CalloutWrapper@VBamoManualDragAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18013989C (--1-$CalloutWrapper@VBamoManualDragAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateDeliveryMode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  char v4; // si
  char v6; // al
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = *(_BYTE *)(a1 + 28);
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoManualDragAreaClientProxyImpl>::CalloutWrapper<BamoImpl::BamoManualDragAreaClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))a1,
      1);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 16) + 120LL))(a1 - 16, v3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB089,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoManualDragAreaClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoManualDragAreaClientProxyImpl>((__int64)v10);
    v6 = *(_BYTE *)(a1 + 28);
  }
  *(_DWORD *)(a1 + 48) = v3;
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoManualDragAreaClientProxyImpl>::CalloutWrapper<BamoImpl::BamoManualDragAreaClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))a1,
      2);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 128LL))(a1 - 16);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB095,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoManualDragAreaClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoManualDragAreaClientProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference((Microsoft::BamoImpl::BamoProxyImpl *)a1, a2, a3);
  return 0LL;
}
