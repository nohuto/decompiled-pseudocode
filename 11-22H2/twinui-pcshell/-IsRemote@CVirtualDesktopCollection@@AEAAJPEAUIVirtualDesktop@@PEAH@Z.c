/*
 * XREFs of ?IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x1800DF144
 * Callers:
 *     ?ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z @ 0x1800DF070 (-ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z.c)
 *     ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18013EBD0 (-AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@PEA_K@Z @ 0x1801B7230 (-GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@PEA_K@Z.c)
 *     ?RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1802E71E0 (-RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z @ 0x1805FC0E0 (-MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z.c)
 *     ?RemoveRemoteDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x1805FC434 (-RemoveRemoteDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection::IsRemote(
        CVirtualDesktopCollection *this,
        __int64 (__fastcall ***a2)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **),
        int *a3)
{
  __int64 (__fastcall **v4)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **); // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CVirtualDesktopCollection *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = this;
  v4 = *a2;
  v11 = 0LL;
  v5 = (*v4)((struct IVirtualDesktop *)a2, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(CVirtualDesktopCollection *, int *))(*(_QWORD *)v11 + 56LL))(v11, a3);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 89LL;
  }
  else
  {
    v7 = 88LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
    (const char *)(unsigned int)v5,
    v9);
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  return v6;
}
