/*
 * XREFs of _lambda_6990cc1065daf1bb2b53d774e458881b_::operator() @ 0x180065200
 * Callers:
 *     wistd::__function::__func__lambda_6990cc1065daf1bb2b53d774e458881b__void___cdecl(int_const_&)_::operator() @ 0x180065350 (wistd--__function--__func__lambda_6990cc1065daf1bb2b53d774e458881b__void___cdecl(int_const_-)_--.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180047520 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18004FAE0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1A98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_6990cc1065daf1bb2b53d774e458881b_::operator()(__int64 *a1, _DWORD *a2)
{
  char v2; // di
  __int64 v3; // rbx
  unsigned int i; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  CVisual *v7; // rbx
  int v8; // eax
  int v9; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2 != 0;
  v3 = *a1;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *(_BYTE *)(v3 + 641) == v2 )
    goto LABEL_10;
  *(_BYTE *)(v3 + 641) = v2;
  for ( i = 0; i < *(_DWORD *)(v3 + 600); ++i )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 576) + 16LL * i) + 440LL);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 296);
      if ( v6 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 4096LL);
    }
  }
  v7 = *(CVisual **)(v3 + 544);
  if ( !v7
    || (CVisual::SetDirtyFlags(v7, 0x4000),
        *((_OWORD *)v7 + 18) = 0LL,
        v8 = CVisual::RenderRecursive(v7),
        v9 = v8,
        v8 >= 0) )
  {
LABEL_10:
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x143,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v8,
      v10);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6EB,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v9,
      v11);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6CB,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v9,
      v10);
}
