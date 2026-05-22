/*
 * XREFs of ?UpdateSecondaryClickZone@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z @ 0x1801461A8
 * Callers:
 *     ?Thunk_UpdateSecondaryClickZone_404@?$IVirtualTouchpadControllerProxy_Receive@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18005FB90 (-Thunk_UpdateSecondaryClickZone_404@-$IVirtualTouchpadControllerProxy_Receive@VBamoVirtualTouchp.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801465C0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@UEA.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoVirtualTouchpadControllerProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180143CD8 (--0-$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Mic_ea_180143CD8.c)
 *     ??1?$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180143E6C (--1-$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 */

__int64 __fastcall BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateSecondaryClickZone(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *this,
        __int64 a2,
        const struct Windows::UI::Internal::Input::PhysicalClickZone *a3)
{
  char v4; // bp
  char *v6; // r14
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v6 = (char *)this - 16;
    v7 = (*(__int64 (__fastcall **)(char *, const struct Windows::UI::Internal::Input::PhysicalClickZone *))(*((_QWORD *)this - 2) + 184LL))(
           (char *)this - 16,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2E52,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>((__int64)v10);
  }
  else
  {
    v6 = (char *)this - 16;
  }
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)a3;
  *((_DWORD *)this + 26) = *((_DWORD *)a3 + 4);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 192LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2E5E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
