/*
 * XREFs of ?UpdatePrimaryClickZone@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z @ 0x18012B984
 * Callers:
 *     ?Thunk_UpdatePrimaryClickZone_367@?$IVirtualTouchpadControllerProxy_Receive@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18012B660 (-Thunk_UpdatePrimaryClickZone_367@-$IVirtualTouchpadControllerProxy_Receive@VBamoVirtualTouchpad.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012BE80 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@UEA.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoVirtualTouchpadControllerProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1801295B4 (--0-$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Mic_ea_1801295B4.c)
 *     ??1?$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180129748 (--1-$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdatePrimaryClickZone(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *this,
        __int64 a2,
        const struct Windows::UI::Internal::Input::PhysicalClickZone *a3)
{
  char v4; // si
  char v6; // cl
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  v6 = *((_BYTE *)this + 28);
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(char *, const struct Windows::UI::Internal::Input::PhysicalClickZone *))(*((_QWORD *)this - 2) + 168LL))(
           (char *)this - 16,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xF196,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>((__int64)v10);
    v6 = *((_BYTE *)this + 28);
  }
  *(_OWORD *)((char *)this + 68) = *(_OWORD *)a3;
  *((_DWORD *)this + 21) = *((_DWORD *)a3 + 4);
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 176LL))((char *)this - 16);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xF1A2,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
