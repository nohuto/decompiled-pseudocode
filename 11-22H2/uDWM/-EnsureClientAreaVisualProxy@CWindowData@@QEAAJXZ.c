/*
 * XREFs of ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x1800516F8
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002BEC0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180051620 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x1800213A0 (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowData::EnsureClientAreaVisualProxy(CWindowData *this)
{
  _QWORD *v1; // rbx
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  int ProxyFromShared; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE hObject; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 144);
  if ( *((_QWORD *)this + 18) )
    return 0LL;
  hObject = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 3);
  v3 = *v2;
  hObject = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, HANDLE *))(v3 + 312))(v2, &hObject);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CF,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
      (const char *)(unsigned int)v4,
      v9);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    return v5;
  }
  else
  {
    ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(
                        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                        (__int64)hObject,
                        v1);
    v7 = ProxyFromShared;
    if ( ProxyFromShared >= 0 )
    {
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D1,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
      (const char *)(unsigned int)ProxyFromShared,
      v9);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    return v7;
  }
}
