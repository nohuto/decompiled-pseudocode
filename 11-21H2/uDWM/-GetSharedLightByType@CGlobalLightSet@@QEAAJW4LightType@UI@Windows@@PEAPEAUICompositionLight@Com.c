/*
 * XREFs of ?GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Composition@34@@Z @ 0x1800BD568
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800CA7DC (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGlobalLightSet::GetSharedLightByType(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  _DWORD Buffer[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Buffer[0] = a2;
  v6 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), Buffer);
  v7 = 0;
  if ( v6 )
  {
    *a3 = v6[1];
    v8 = v6[1];
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x177,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)0x80070057LL);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v7;
}
