/*
 * XREFs of ?SubscribeToServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F98D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::SubscribeToServices(
        PenWorkspaceDiscoverBroker *this,
        struct IServiceProvider *a2)
{
  char *v3; // rbx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    v3 = (char *)this + 24;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
           a2,
           &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
           &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
           v3);
    if ( v5 >= 0 )
      return 0LL;
    v7 = 173LL;
  }
  else
  {
    v5 = -2147467259;
    v7 = 172LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v5,
    v8);
  return (unsigned int)v5;
}
