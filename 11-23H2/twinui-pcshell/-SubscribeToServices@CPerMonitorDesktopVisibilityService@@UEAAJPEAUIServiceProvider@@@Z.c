/*
 * XREFs of ?SubscribeToServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B5630
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7F64 (-InternalRelease@-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerMonitorDesktopVisibilityService::SubscribeToServices(
        CPerMonitorDesktopVisibilityService *this,
        struct IServiceProvider *a2)
{
  _QWORD *v2; // r14
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v6; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 192);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IFullScreenPositioner>::InternalRelease((char *)this + 192);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))QueryService)(
         a2,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         &GUID_b6b9bca5_a1ad_4216_ab1f_4de46296eac8,
         v2);
  if ( v6 < 0 )
  {
    v8 = 48LL;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(*(_QWORD *)*v2 + 24LL))(
           *v2,
           ((unsigned __int64)this + 72) & -(__int64)(this != (CPerMonitorDesktopVisibilityService *)40),
           (char *)this + 168);
    if ( v6 >= 0 )
      return 0LL;
    v8 = 49LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
