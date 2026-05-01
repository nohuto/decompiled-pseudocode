/*
 * XREFs of ?IsNewWallpaper@CVirtualDesktopManager@@AEAA_NPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180545FEC
 * Callers:
 *     ?AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180544C64 (-AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18010F5F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall CVirtualDesktopManager::IsNewWallpaper(
        CVirtualDesktopManager *this,
        int (__fastcall ***a2)(struct IVirtualDesktop *, GUID *, __int64 **),
        HSTRING a3)
{
  int (__fastcall **v4)(struct IVirtualDesktop *, GUID *, __int64 **); // rax
  bool v5; // bl
  __int64 v6; // rax
  CVirtualDesktopManager *result; // [rsp+40h] [rbp+20h] BYREF
  HSTRING string1; // [rsp+48h] [rbp+28h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+38h] BYREF

  result = this;
  v4 = *a2;
  v5 = 0;
  v10 = 0LL;
  if ( (*v4)((struct IVirtualDesktop *)a2, &GUID_eddfebdb_99be_41b5_924b_71dee9de176c, &v10) >= 0 )
  {
    string1 = 0LL;
    v6 = *v10;
    string1 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, HSTRING *))(v6 + 64))(v10, &string1) >= 0
      && WindowsCompareStringOrdinal(string1, a3, (INT32 *)&result) >= 0 )
    {
      v5 = (_DWORD)result != 0;
    }
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string1);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v10);
  return v5;
}
