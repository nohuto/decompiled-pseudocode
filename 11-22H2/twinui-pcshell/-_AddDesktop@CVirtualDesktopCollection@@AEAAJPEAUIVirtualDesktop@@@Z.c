/*
 * XREFs of ?_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18013CBA4
 * Callers:
 *     ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x18013B060 (-AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x1805FBD60 (-AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18013EBD0 (-AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopCollection::_AddDesktop(CVirtualDesktopCollection *this, struct IVirtualDesktop *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CVirtualDesktopCollection::AddDesktopHelper(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  else
  {
    v5 = *((_QWORD *)this + 4);
    if ( v5 )
      (*(void (__fastcall **)(__int64, CVirtualDesktopCollection *))(*(_QWORD *)v5 + 24LL))(v5, this);
    return 0LL;
  }
}
