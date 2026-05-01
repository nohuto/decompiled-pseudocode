/*
 * XREFs of ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F15EC
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F0618 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18003AD20 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18007A3FC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800F0FC0 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800F276C (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_GetPreferredPosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        struct IApplicationViewPosition **a4)
{
  __int64 (__fastcall *v8)(struct IApplicationView *, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 (__fastcall *v11)(struct IApplicationView *, __int64 *); // rbx
  int OffsetRectFromSize; // eax
  __int64 v14; // rdx
  __int64 v15; // rdi
  int (__fastcall *v16)(__int64, __int64, __int64, __int64 *); // rbx
  CDesktopPositioner *v17; // rcx
  int fixed; // eax
  __int64 v19; // rdx
  void *v20; // [rsp+30h] [rbp-69h] BYREF
  __int64 v21; // [rsp+38h] [rbp-61h] BYREF
  int v22; // [rsp+40h] [rbp-59h] BYREF
  struct tagSIZE v23; // [rsp+48h] [rbp-51h] BYREF
  __int64 v24; // [rsp+50h] [rbp-49h] BYREF
  __int64 v25; // [rsp+58h] [rbp-41h]
  __int64 v26; // [rsp+60h] [rbp-39h]
  __int64 v27; // [rsp+68h] [rbp-31h] BYREF
  __int64 v28; // [rsp+70h] [rbp-29h]
  __int64 v29; // [rsp+78h] [rbp-21h]
  struct tagRECT v30; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v31; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v32; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *a4 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v24);
  v25 = -1LL;
  v26 = -1LL;
  v9 = v8(a2, &v24);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4FC,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_7;
  }
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v11 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 488LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v27);
  v28 = -1LL;
  v29 = -1LL;
  OffsetRectFromSize = v11(a2, &v27);
  v10 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v14 = 1279LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)OffsetRectFromSize);
    goto LABEL_6;
  }
  OffsetRectFromSize = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 32) + 24LL))(
                         *((_QWORD *)this + 32),
                         v24,
                         &v22);
  v10 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v14 = 1282LL;
    goto LABEL_15;
  }
  if ( v22 == 1 )
  {
    OffsetRectFromSize = (*(__int64 (__fastcall **)(_QWORD, __int64, struct tagSIZE *))(**((_QWORD **)this + 32) + 40LL))(
                           *((_QWORD *)this + 32),
                           v24,
                           &v23);
    v10 = OffsetRectFromSize;
    if ( OffsetRectFromSize < 0 )
    {
      v14 = 1289LL;
      goto LABEL_15;
    }
    OffsetRectFromSize = CDesktopPositioner::_GetOffsetRectFromSize(this, a3, a3, v23, &v30);
    v10 = OffsetRectFromSize;
    if ( OffsetRectFromSize < 0 )
    {
      v14 = 1295LL;
      goto LABEL_15;
    }
    v21 = 0LL;
    if ( IsRectEmpty(a3) )
    {
      v15 = *((_QWORD *)this + 31);
      v16 = *(int (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v15 + 24LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
      if ( v16(v15, v24, v27, &v21) >= 0
        && (*(int (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v21 + 56LL))(v21, &v32) >= 0
        && (int)CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v17, &v32, &v31) >= 0 )
      {
        v30.left = v31.left;
        v30.top = v31.top;
        v30.right = v23.cx + v31.left;
        v30.bottom = v31.top + v23.cy;
      }
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
    fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
              &v20,
              &v30);
    v10 = fixed;
    if ( fixed >= 0 )
    {
      fixed = CDesktopPositioner::_FixPosition(this, 2u, (__int64)v20, (__int64 *)a4);
      v10 = fixed;
      if ( fixed >= 0 )
      {
        v10 = 0;
        goto LABEL_27;
      }
      v19 = 1320LL;
    }
    else
    {
      v19 = 1319LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)fixed);
LABEL_27:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
    goto LABEL_6;
  }
  v10 = -2147023728;
LABEL_6:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v27);
LABEL_7:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v24);
  return v10;
}
