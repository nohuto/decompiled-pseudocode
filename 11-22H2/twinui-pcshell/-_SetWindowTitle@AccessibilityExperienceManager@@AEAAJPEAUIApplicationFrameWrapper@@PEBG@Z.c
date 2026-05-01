/*
 * XREFs of ?_SetWindowTitle@AccessibilityExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEBG@Z @ 0x18053D8E0
 * Callers:
 *     ?_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x18053CDE8 (-_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewIn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibilityExperienceManager::_SetWindowTitle(
        AccessibilityExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        const unsigned __int16 *a3)
{
  __int64 (__fastcall *v4)(struct IApplicationFrameWrapper *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, const unsigned __int16 **); // rdi
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  const unsigned __int16 *v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = a3;
  v13 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64 *))(*(_QWORD *)a2 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  v5 = v4(a2, &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v14 = 0LL;
    v7 = v13;
    v8 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 **))(*(_QWORD *)v13 + 144LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
    v9 = v8(v7, &v14);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(const unsigned __int16 *, const WCHAR *))(*(_QWORD *)v14 + 24LL))(
             v14,
             &LocaleName);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v10 = 239LL;
    }
    else
    {
      v10 = 237LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_9:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEA,
    (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_10:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  return v6;
}
