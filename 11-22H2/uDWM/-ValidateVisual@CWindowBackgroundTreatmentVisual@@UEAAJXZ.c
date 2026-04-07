/*
 * XREFs of ?ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ @ 0x180013760
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18002E5D0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180041C18 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowBackgroundTreatmentVisual::ValidateVisual(CWindowBackgroundTreatmentVisual *this)
{
  __int64 *v2; // rdx
  __int64 v3; // rsi
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  CVisual::ValidateVisual(this);
  if ( (*((_DWORD *)this + 22) & 0x1000) == 0 )
    return 0LL;
  v2 = (__int64 *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27) + 56LL);
  if ( !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 641LL) )
    v2 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
  v3 = *v2;
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 32);
  v11 = 0LL;
  v5 = (**v4)(v4, &GUID_01dc794b_4ff5_4491_9942_b9e7b8893be4, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 25LL;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, v3);
    v6 = v5;
    if ( v5 >= 0 )
    {
      *((_DWORD *)this + 22) &= ~0x1000u;
      wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v11);
      return 0LL;
    }
    v8 = 26LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowbackgroundtreatmentvisual.cpp",
    (const char *)(unsigned int)v5,
    v9);
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v11);
  return v6;
}
