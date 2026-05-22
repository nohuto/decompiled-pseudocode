/*
 * XREFs of ?OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x180129FD0 (-GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ?GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@XZ @ 0x18012A070 (-GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windo.c)
 *     ?GetSizeValid@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x18012A0A0 (-GetSizeValid@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A6C0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?ServerConnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N1AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z @ 0x18012AFA4 (-ServerConnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N1AEBUVirtualTouchpadSize@Input@Inte.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnConnected(VirtualTouchpadControllerProxy *this)
{
  BamoVirtualTouchpadControllerProxy *v1; // rdi
  const struct Windows::UI::Internal::Input::VirtualTouchpadSize *Size; // rsi
  bool SizeValid; // bl
  bool IsActive; // al
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (VirtualTouchpadControllerProxy *)((char *)this + 8);
  Size = BamoVirtualTouchpadControllerProxy::GetSize((VirtualTouchpadControllerProxy *)((char *)this + 8));
  SizeValid = BamoVirtualTouchpadControllerProxy::GetSizeValid(v1);
  IsActive = BamoVirtualTouchpadControllerProxy::GetIsActive(v1);
  InputTraceLogging::VirtualTouchpad::ServerConnected(this, IsActive, SizeValid, Size);
  v6 = VirtualTouchpadControllerProxy::OnSizeChanged(this);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8A,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontroller\\"
         "server\\virtualtouchpadcontrollerproxy.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
