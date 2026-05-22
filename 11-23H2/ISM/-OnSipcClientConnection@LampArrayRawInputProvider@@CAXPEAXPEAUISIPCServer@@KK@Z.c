/*
 * XREFs of ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x1800E9490
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001AE74 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001AF80 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x1800589B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z @ 0x1800E8E98 (--_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z.c)
 *     ?PushBack@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAXPEAULampArrayClientListEntry@LampArrayRawInputProvider@@@Z @ 0x1800E9724 (-PushBack@-$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAXPEAULampArrayClie.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800E97DC (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800EB73C (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 */

void __fastcall LampArrayRawInputProvider::OnSipcClientConnection(RTL_SRWLOCK *a1, struct ISIPCServer *a2, int a3)
{
  char *v6; // rsi
  char *i; // rax
  _QWORD *v8; // rax
  LampArrayRawInputProvider::LampArrayClientListEntry *v9; // rbx
  struct LampArrayEndpoint *v10; // r14
  RTL_SRWLOCK *v11; // rsi
  LampArrayDevice *j; // rbx
  struct LampArrayDevice *k; // rbx
  RTL_SRWLOCK *v14; // [rsp+50h] [rbp+8h] BYREF

  v6 = (char *)&a1[12];
  for ( i = (char *)a1[12].Ptr; i != v6; i = *(char **)i )
  {
    if ( *((_DWORD *)i + 6) == a3 )
      return;
  }
  v8 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (LampArrayRawInputProvider::LampArrayClientListEntry *)v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[3] = 0LL;
    v8[2] = 0LL;
    v10 = (struct LampArrayEndpoint *)(v8 + 2);
    if ( (*(int (__fastcall **)(struct ISIPCServer *, _QWORD, void *, RTL_SRWLOCK *, _QWORD *))(*(_QWORD *)a2 + 24LL))(
           a2,
           LODWORD(a1[11].Ptr),
           &LampArrayRawInputProvider::OnSipcEndpointStatus,
           a1,
           v8 + 2) < 0 )
    {
      LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'(v9);
    }
    else
    {
      *((_DWORD *)v9 + 6) = a3;
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
      {
        wil::srwlock::lock_exclusive(a1 + 18, &v14);
        NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::PushBack(v6, v9);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v14);
      }
      else
      {
        NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::PushBack(v6, v9);
      }
      v11 = a1 + 9;
      for ( j = (LampArrayDevice *)a1[9].Ptr; j != (LampArrayDevice *)v11; j = *(LampArrayDevice **)j )
        LampArrayDevice::AddViewClient(*((LampArrayDevice **)j + 2), v10);
      if ( a3 == LODWORD(a1[8].Ptr) )
      {
        for ( k = (struct LampArrayDevice *)v11->Ptr; k != (struct LampArrayDevice *)v11; k = *(struct LampArrayDevice **)k )
          LampArrayRawInputProvider::SetActiveViewClient(
            (LampArrayRawInputProvider *)a1,
            *((struct LampArrayDevice **)k + 2),
            v10);
      }
    }
  }
}
