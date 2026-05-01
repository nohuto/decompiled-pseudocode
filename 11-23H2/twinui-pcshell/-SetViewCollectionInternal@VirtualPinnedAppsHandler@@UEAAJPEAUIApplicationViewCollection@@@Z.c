/*
 * XREFs of ?SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x18013A520
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x18013A7FC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180613BAC (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualPinnedAppsHandler::SetViewCollectionInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationViewCollection *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  struct IApplicationView *v7; // rbx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  int v10; // eax
  _QWORD *v11; // r12
  _QWORD *i; // rsi
  _QWORD *v13; // rdx
  int v14; // eax
  char v15; // cl
  __int64 v16; // rax
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-88h] BYREF
  __int64 v21; // [rsp+28h] [rbp-80h] BYREF
  struct IApplicationView *v22; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+38h] [rbp-70h] BYREF
  int v24; // [rsp+40h] [rbp-68h]
  int v25; // [rsp+48h] [rbp-60h] BYREF
  struct IApplicationView *v26; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v27; // [rsp+58h] [rbp-50h]
  int v28; // [rsp+60h] [rbp-48h] BYREF
  __int64 v29; // [rsp+68h] [rbp-40h] BYREF
  __int64 *v30; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  char v32; // [rsp+B0h] [rbp+8h] BYREF
  char v33; // [rsp+C0h] [rbp+18h] BYREF
  int v34; // [rsp+C8h] [rbp+20h] BYREF

  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    v20 = 0LL;
    v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    v5 = v4(v3, &v20);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF5,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v5,
        v20);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      &v23,
      v20);
    v25 = 0;
    v26 = 0LL;
    v27 = &v23;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v25);
    v28 = v24;
    v29 = 0LL;
    v30 = &v23;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v28);
    while ( 1 )
    {
      if ( v25 == v28 && v27 == v30 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v29);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v26);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
        return 0LL;
      }
      v7 = v26;
      v22 = v26;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
      v21 = 0LL;
      v8 = *((_QWORD *)this + 6);
      v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 360LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
      v10 = v9(v8, &v21);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xF9,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v10,
          v20);
      v11 = (_QWORD *)*((_QWORD *)this + 12);
      for ( i = (_QWORD *)*((_QWORD *)this + 11); i != v11; i += 4 )
      {
        v13 = i;
        if ( i[3] >= 8uLL )
          v13 = (_QWORD *)*i;
        v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *, int *))(*(_QWORD *)v22 + 152LL))(
                v22,
                v13,
                &v34);
        if ( v14 >= 0 )
        {
          if ( v34 )
          {
            v15 = 1;
            goto LABEL_21;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x100,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v14);
        }
      }
      v15 = 0;
LABEL_21:
      v16 = **((_QWORD **)this + 8);
      if ( v15 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, char *))(v16 + 120))(
                *((_QWORD *)this + 8),
                v7,
                &v32)
          || !v32 )
        {
          v17 = VirtualPinnedAppsHandler::PinViewInternal(this, v7, 1);
          v18 = retaddr;
          if ( v17 < 0 )
          {
            v19 = 262LL;
LABEL_30:
            wil::details::in1diag3::_Log_Hr(
              v18,
              (void *)v19,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
              (const char *)(unsigned int)v17);
          }
        }
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, char *))(v16 + 120))(
                  *((_QWORD *)this + 8),
                  v7,
                  &v33) )
      {
        if ( v33 )
        {
          v17 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, __int64))(*(_QWORD *)this + 104LL))(
                  this,
                  v7,
                  v21);
          v18 = retaddr;
          if ( v17 < 0 )
          {
            v19 = 270LL;
            goto LABEL_30;
          }
        }
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
      ++v25;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v25);
    }
  }
  return 0LL;
}
