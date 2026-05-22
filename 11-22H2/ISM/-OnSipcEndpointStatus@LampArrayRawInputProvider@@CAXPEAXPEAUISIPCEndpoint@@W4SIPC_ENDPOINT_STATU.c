/*
 * XREFs of ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800F8570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001B674 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001B8CC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x180059DE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z @ 0x1800F7E18 (--_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAPEAULampArrayClientListEntry@LampArrayRawInputProvider@@PEAU23@@Z @ 0x1800F86FC (-RemoveAt@-$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAPEAULampArrayClien.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800F875C (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x1800FB850 (-RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z.c)
 */

void __fastcall LampArrayRawInputProvider::OnSipcEndpointStatus(__int64 a1, __int64 a2, int a3)
{
  __int64 *v4; // r15
  __int64 *i; // rbx
  __int64 ***v6; // r14
  __int64 **j; // rdi
  const char *v8; // r9
  __int64 **k; // rdi
  LampArrayRawInputProvider::LampArrayClientListEntry *v10; // rax
  LampArrayRawInputProvider::LampArrayClientListEntry *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v4 = (__int64 *)(a1 + 96);
    for ( i = *(__int64 **)(a1 + 96); i != v4; i = (__int64 *)*i )
    {
      if ( i[2] == a2 )
      {
        v6 = (__int64 ***)(a1 + 72);
        for ( j = *(__int64 ***)(a1 + 72); j != (__int64 **)v6; j = (__int64 **)*j )
        {
          if ( LampArrayDevice::RemoveViewClient((LampArrayDevice *)j[2], (struct LampArrayEndpoint *)(i + 2))
            && !SetEvent(*(HANDLE *)(a1 + 320)) )
          {
            wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x290,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
              v8);
          }
        }
        if ( *((_DWORD *)i + 6) == *(_DWORD *)(a1 + 64) )
        {
          for ( k = *v6; k != (__int64 **)v6; k = (__int64 **)*k )
            LampArrayRawInputProvider::SetActiveViewClient(
              (LampArrayRawInputProvider *)a1,
              (struct LampArrayDevice *)k[2],
              0LL);
        }
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
        {
          wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 144), &v13);
          v10 = (LampArrayRawInputProvider::LampArrayClientListEntry *)NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::RemoveAt(
                                                                         v4,
                                                                         i);
          if ( v10 )
            LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'(v10);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v13);
        }
        else
        {
          v11 = (LampArrayRawInputProvider::LampArrayClientListEntry *)NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::RemoveAt(
                                                                         v4,
                                                                         i);
          if ( v11 )
            LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'(v11);
        }
        return;
      }
    }
  }
}
