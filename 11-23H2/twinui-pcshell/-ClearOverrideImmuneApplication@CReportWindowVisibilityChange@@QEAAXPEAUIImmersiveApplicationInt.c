/*
 * XREFs of ?ClearOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180398328
 * Callers:
 *     ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18039FC00 (-RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CReportWindowVisibilityChange::ClearOverrideImmuneApplication(
        CReportWindowVisibilityChange *this,
        struct IUnknown *a2)
{
  struct IUnknown **v4; // r15
  struct IUnknown **v5; // r14
  bool v6; // di
  struct IUnknown **v7; // rdi
  struct IUnknown **i; // rbx
  struct IUnknown *v9; // rcx
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v12; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown **v13; // [rsp+48h] [rbp+10h]

  v4 = (struct IUnknown **)*((_QWORD *)this + 7);
  v5 = (struct IUnknown **)*((_QWORD *)this + 6);
  try
  {
    while ( v5 != v4 )
    {
      v12 = *v5;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
      v13 = &v12;
      v6 = (unsigned int)SHIsSameObject(a2, v12) != 0;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
      if ( v6 )
        break;
      ++v5;
    }
    v7 = (struct IUnknown **)*((_QWORD *)this + 7);
    for ( i = v5 + 1; i != v7; ++i )
    {
      v9 = 0LL;
      if ( &v12 != i )
      {
        v9 = *i;
        *i = 0LL;
      }
      v12 = *(i - 1);
      *(i - 1) = v9;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(*((_QWORD *)this + 7) - 8LL));
    *((_QWORD *)this + 7) -= 8LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x8D,
      (int)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
      v10);
  }
}
