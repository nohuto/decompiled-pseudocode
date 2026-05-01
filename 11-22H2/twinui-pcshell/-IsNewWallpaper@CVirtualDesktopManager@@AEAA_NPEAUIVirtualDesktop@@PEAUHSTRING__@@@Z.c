/*
 * XREFs of ?IsNewWallpaper@CVirtualDesktopManager@@AEAA_NPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180601D14
 * Callers:
 *     ?AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1806008C4 (-AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall CVirtualDesktopManager::IsNewWallpaper(
        CVirtualDesktopManager *this,
        int (__fastcall ***a2)(struct IVirtualDesktop *, GUID *, __int64 **),
        HSTRING a3)
{
  int (__fastcall **v4)(struct IVirtualDesktop *, GUID *, __int64 **); // rax
  __int64 v5; // rax
  bool v6; // bl
  CVirtualDesktopManager *result; // [rsp+30h] [rbp+10h] BYREF
  HSTRING string1; // [rsp+38h] [rbp+18h] BYREF
  __int64 *v10; // [rsp+48h] [rbp+28h] BYREF

  result = this;
  v4 = *a2;
  v10 = 0LL;
  if ( (*v4)((struct IVirtualDesktop *)a2, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v10) < 0 )
  {
LABEL_8:
    v6 = 0;
    goto LABEL_9;
  }
  string1 = 0LL;
  v5 = *v10;
  string1 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, HSTRING *))(v5 + 48))(v10, &string1) < 0
    || WindowsCompareStringOrdinal(string1, a3, (INT32 *)&result) < 0 )
  {
    if ( string1 )
      WindowsDeleteString(string1);
    goto LABEL_8;
  }
  v6 = (_DWORD)result != 0;
  if ( string1 )
    WindowsDeleteString(string1);
LABEL_9:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
  return v6;
}
