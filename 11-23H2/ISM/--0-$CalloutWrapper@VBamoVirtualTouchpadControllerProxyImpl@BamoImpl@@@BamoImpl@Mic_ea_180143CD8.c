/*
 * XREFs of ??0?$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoVirtualTouchpadControllerProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180143CD8
 * Callers:
 *     ??0?$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoVirtualTouchpadControllerProxyImpl@1@@Z @ 0x180143CAC (--0-$CalloutWrapper@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 *     ?UpdateIsActive@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180145F00 (-UpdateIsActive@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdatePrimaryClickZone@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z @ 0x18014604C (-UpdatePrimaryClickZone@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUPhysicalClic.c)
 *     ?UpdateSecondaryClickZone@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z @ 0x1801461A8 (-UpdateSecondaryClickZone@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUPhysicalCl.c)
 *     ?UpdateSize@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z @ 0x180146304 (-UpdateSize@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUVirtualTouchpadSize@Inpu.c)
 *     ?UpdateSizeValid@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180146464 (-UpdateSizeValid@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTypingDefensesEnabled@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180146634 (-UpdateTypingDefensesEnabled@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800221F0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>(
        __int64 a1,
        Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        void (__fastcall ***a3)(_QWORD),
        int a4)
{
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)(a1 + 8) = a3;
  if ( a3 )
    (**a3)(a3);
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)a1 = 0LL;
  if ( !*((_DWORD *)a2 + 47) )
  {
    *(_QWORD *)a1 = a2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(a2);
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 - 16) + 88LL))(v7 - 16);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v8,
          v10);
    }
  }
  return a1;
}
