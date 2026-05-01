/*
 * XREFs of ?SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E7E60
 * Callers:
 *     ?DisableApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802E24D0 (-DisableApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1802DE6FC (--$_Emplace_reallocate@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@-$vector@V-$Co.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E5814 (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CReportWindowVisibilityChange::SetOverrideImmuneApplication(
        CReportWindowVisibilityChange *this,
        struct IUnknown *a2)
{
  const char *v4; // r9
  unsigned int v5; // ebx
  __int64 *v6; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v9; // [rsp+40h] [rbp+18h] BYREF

  try
  {
    v5 = 0;
    if ( CReportWindowVisibilityChange::IsOverrideImmuneApplication(this, a2) )
    {
      v5 = -2147418113;
    }
    else
    {
      v9 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
      v6 = (__int64 *)*((_QWORD *)this + 7);
      if ( v6 == *((__int64 **)this + 8) )
      {
        std::vector<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>(
          (__int64 *)this + 6,
          (__int64)v6,
          (__int64 *)&v9);
      }
      else
      {
        *v6 = 0LL;
        if ( v6 != (__int64 *)&v9 )
        {
          *v6 = (__int64)a2;
          v9 = 0LL;
        }
        *((_QWORD *)this + 7) += 8LL;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
    }
    result = v5;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7B,
                           (int)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
                           v4);
  }
  return result;
}
