/*
 * XREFs of ?PublishServices@PenWorkspaceDiscoverBrokerFactory@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801B92B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBrokerFactory::PublishServices(
        LPUNKNOWN pUnk,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  HRESULT v6; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = CoRegisterClassObject(&GUID_ad20f6d7_28b9_4a05_86b3_d6a3e149b28d, pUnk, 4u, 1u, (LPDWORD)&pUnk[4]);
  if ( v6 < 0 )
  {
    v8 = 213LL;
  }
  else
  {
    v6 = (*((__int64 (__fastcall **)(ULONG (__stdcall **)(IUnknown *), struct IServiceProvider *, struct IProfferService *))pUnk[3].lpVtbl[1].Release
          + 3))(
           &pUnk[3].lpVtbl[1].Release,
           a2,
           a3);
    if ( v6 >= 0 )
      return 0LL;
    v8 = 214LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
