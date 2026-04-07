/*
 * XREFs of wistd::__function::__func__lambda_044de6e8757de13608340bdff9bfffd6__void___cdecl(int_const_&)_::operator() @ 0x18005EF20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18003609C (-UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::__function::__func__lambda_044de6e8757de13608340bdff9bfffd6__void___cdecl_int_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  char v2; // di
  __int64 v3; // rbx
  CVisual *v4; // rbx
  int v5; // ebx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2 != 0;
  v3 = *(_QWORD *)(a1 + 8);
  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *(_BYTE *)(v3 + 657) == v2 )
    goto LABEL_3;
  *(_BYTE *)(v3 + 657) = v2;
  CWindowList::UpdateAccentState(v3, 0LL, 5);
  CWindowList::UpdateAccentState(v3, 0LL, 4);
  v4 = *(CVisual **)(v3 + 560);
  if ( !v4
    || (CVisual::SetDirtyFlags(v4, 0x4000),
        *((_OWORD *)v4 + 19) = 0LL,
        v6 = CVisual::RenderRecursive(v4),
        v5 = v6,
        v6 >= 0) )
  {
LABEL_3:
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v6);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67C,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v5);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x65B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v5,
      v7);
}
