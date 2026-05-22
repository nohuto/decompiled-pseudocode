/*
 * XREFs of ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180144B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009DCC4 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x1801446B0 (-GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ?ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z @ 0x1801459C8 (-ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801BC044 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801BC0D4 (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x1801BC278 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnIsActiveChanged(VirtualTouchpadControllerProxy *this)
{
  bool IsActive; // al
  bool v3; // zf
  VirtualTouchpadContextProvider *Instance; // rax
  int v5; // ebx
  __int64 v6; // rdx
  VirtualTouchpadContextProvider *v8; // rax
  int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  IsActive = BamoVirtualTouchpadControllerProxy::GetIsActive((VirtualTouchpadControllerProxy *)((char *)this + 8));
  InputTraceLogging::VirtualTouchpad::ServerIsActiveChanged(this, IsActive);
  if ( *((_BYTE *)this + 228) )
  {
    if ( BamoVirtualTouchpadControllerProxy::GetIsActive((VirtualTouchpadControllerProxy *)((char *)this + 8)) )
    {
      v3 = *((_BYTE *)this + 228) == 0;
      *(_QWORD *)v9 = this;
      if ( v3 )
        std::_Throw_bad_optional_access();
      v10 = *(_OWORD *)((char *)this + 212);
      Instance = VirtualTouchpadContextProvider::GetInstance();
      v5 = VirtualTouchpadContextProvider::OnTouchpadAdded(Instance, (const struct VirtualTouchpadRect *)v9);
      if ( v5 < 0 )
      {
        v6 = 182LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadc"
                   "ontroller\\server\\virtualtouchpadcontrollerproxy.cpp",
          (const char *)(unsigned int)v5);
        return (unsigned int)v5;
      }
    }
    else
    {
      v8 = VirtualTouchpadContextProvider::GetInstance();
      v5 = VirtualTouchpadContextProvider::OnTouchpadRemoved(v8, (unsigned __int64)this);
      if ( v5 < 0 )
      {
        v6 = 188LL;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
