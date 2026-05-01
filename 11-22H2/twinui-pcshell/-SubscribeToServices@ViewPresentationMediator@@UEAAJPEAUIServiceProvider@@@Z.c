/*
 * XREFs of ?SubscribeToServices@ViewPresentationMediator@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F9720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewPresentationMediator::SubscribeToServices(
        ViewPresentationMediator *this,
        struct IServiceProvider *a2)
{
  _QWORD *v2; // r14
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v6; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 160);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))QueryService)(
         a2,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         v2);
  if ( v6 < 0 )
  {
    v8 = 111LL;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v2 + 56LL))(
           *v2,
           ((unsigned __int64)this + 80) & -(__int64)(this != (ViewPresentationMediator *)40));
    if ( v6 < 0 )
    {
      v8 = 112LL;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v2 + 112LL))(
             *v2,
             ((unsigned __int64)this + 88) & -(__int64)(this != (ViewPresentationMediator *)40));
      if ( v6 < 0 )
      {
        v8 = 113LL;
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v2 + 136LL))(
               *v2,
               ((unsigned __int64)this + 96) & -(__int64)(this != (ViewPresentationMediator *)40));
        if ( v6 >= 0 )
          return 0LL;
        v8 = 114LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
    (const char *)(unsigned int)v6,
    v9);
  return (unsigned int)v6;
}
