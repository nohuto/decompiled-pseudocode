/*
 * XREFs of ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x180036390
 * Callers:
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800118E0 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180032710 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180026404 (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowData::EnsureClientAreaVisualProxy(CWindowData *this)
{
  __int64 *v1; // rdi
  __int64 *v2; // rcx
  __int64 v3; // rax
  int ProxyFromShared; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 144);
  if ( *((_QWORD *)this + 18) )
    return 0LL;
  v9 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 3);
  v3 = *v2;
  v9 = 0LL;
  ProxyFromShared = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 312))(v2, &v9);
  v5 = ProxyFromShared;
  if ( ProxyFromShared < 0 )
  {
    v7 = 8109LL;
  }
  else
  {
    ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(
                        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                        v9,
                        v1);
    v5 = ProxyFromShared;
    if ( ProxyFromShared >= 0 )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v9);
      return 0LL;
    }
    v7 = 8111LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)ProxyFromShared);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v9);
  return v5;
}
