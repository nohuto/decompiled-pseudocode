/*
 * XREFs of ?GetCurrentCoreWindow@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUICoreWindow@Core@34@@Z @ 0x18003D8D8
 * Callers:
 *     ?ActivateInstance@CompositorFactory@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18003C560 (-ActivateInstance@CompositorFactory@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z.c)
 *     ?ActivateInstance@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18003CA00 (-ActivateInstance@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAPEAUIInspecta.c)
 *     ?RuntimeClassInitialize@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@W4DeviceVersion@DirectComposition@@@Z @ 0x18003DA04 (-RuntimeClassInitialize@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIIntero.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180086C8C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x180111694 (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CoreHelper::GetCurrentCoreWindow(
        struct Windows::UI::Core::ICoreWindow **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a1 = 0LL;
  *(_QWORD *)v5 = &Windows::UI::Composition::CoreHelper::s_lock;
  AcquireSRWLockExclusive(&Windows::UI::Composition::CoreHelper::s_lock);
  dword_180220B48 = GetCurrentThreadId();
  if ( !Windows::UI::Composition::CoreHelper::s_pAgileCoreWindowStatics )
  {
    if ( !GetModuleHandleW(L"windows.ui.dll") )
    {
      CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(v5);
      return 0LL;
    }
    v7 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.UI.Core.CoreWindow",
      0x1Bu,
      0x1Au);
    if ( (int)RoGetActivationFactory(
                v7,
                &GUID_4d239005_3c2a_41b1_9022_536bb9cf93b1,
                &Windows::UI::Composition::CoreHelper::s_pAgileCoreWindowStatics) < 0 )
    {
      dword_180220B48 = 0;
      ReleaseSRWLockExclusive(&Windows::UI::Composition::CoreHelper::s_lock);
      return 0LL;
    }
  }
  dword_180220B48 = 0;
  ReleaseSRWLockExclusive(&Windows::UI::Composition::CoreHelper::s_lock);
  v2 = (*(__int64 (__fastcall **)(struct Windows::UI::Core::ICoreWindowStatic *, struct Windows::UI::Core::ICoreWindow **))(*(_QWORD *)Windows::UI::Composition::CoreHelper::s_pAgileCoreWindowStatics + 48LL))(
         Windows::UI::Composition::CoreHelper::s_pAgileCoreWindowStatics,
         a1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x45,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionroot.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
