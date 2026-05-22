/*
 * XREFs of ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E90CC
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C910 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E9C54 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ??9Iterator@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEBA_NAEBV01@@Z @ 0x180010ACC (--9Iterator@-$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEBA_NAEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001AE74 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001AF80 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x1800589B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@U?$default_delete@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800E8D4C (--1-$unique_ptr@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@U-$default_delete@ULampArra.c)
 *     ?PushBack@?$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXPEAULampArrayDeviceListEntry@LampArrayRawInputProvider@@@Z @ 0x1800E9750 (-PushBack@-$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXPEAULampArrayDevi.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800E97DC (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800EA748 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800EB73C (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800EB8C0 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::OnLampArrayAdded(LampArrayRawInputProvider *this, struct PnpDevice *a2)
{
  char *v4; // rax
  char *v5; // r14
  LampArrayDevice **v6; // r15
  unsigned int v7; // edx
  RTL_SRWLOCK *v8; // rax
  RTL_SRWLOCK *Ptr; // rsi
  int active; // eax
  unsigned int v11; // esi
  unsigned int v12; // edx
  RTL_SRWLOCK *v13; // rax
  RTL_SRWLOCK *v14; // rsi
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  int v19; // eax
  unsigned int v20; // edi
  RTL_SRWLOCK *v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  RTL_SRWLOCK *v23; // [rsp+78h] [rbp+38h] BYREF
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v24; // [rsp+80h] [rbp+40h] BYREF
  char *v25; // [rsp+88h] [rbp+48h] BYREF

  if ( *((_DWORD *)a2 + 28) == 65625 )
  {
    v4 = (char *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
    if ( v4 )
    {
      *(_QWORD *)v4 = 0LL;
      *((_QWORD *)v4 + 1) = 0LL;
      *((_QWORD *)v4 + 2) = 0LL;
      v24 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v4;
      v6 = (LampArrayDevice **)(v4 + 16);
      if ( LampArrayDevice::CreateAndInitialize(a2, (struct LampArrayDevice **)v4 + 2) < 0 )
      {
        std::unique_ptr<LampArrayRawInputProvider::LampArrayDeviceListEntry>::~unique_ptr<LampArrayRawInputProvider::LampArrayDeviceListEntry>(
          &v24,
          v7);
        return 1LL;
      }
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
      {
        wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 20, &v23);
        NtList<LampArrayRawInputProvider::LampArrayDeviceListEntry>::PushBack((char *)this + 72, v5);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v23);
      }
      else
      {
        NtList<LampArrayRawInputProvider::LampArrayDeviceListEntry>::PushBack((char *)this + 72, v5);
      }
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
      {
        wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 18, v21);
        v8 = (RTL_SRWLOCK *)((char *)this + 96);
        v25 = (char *)this + 96;
        while ( 1 )
        {
          Ptr = (RTL_SRWLOCK *)v8->Ptr;
          v23 = (RTL_SRWLOCK *)v8->Ptr;
          if ( !NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v23, &v25) )
            break;
          LampArrayDevice::AddViewClient(*v6, (struct LampArrayEndpoint *)&Ptr[2]);
          if ( LODWORD(Ptr[3].Ptr) == *((_DWORD *)this + 16) )
          {
            active = LampArrayRawInputProvider::SetActiveViewClient(this, *v6, (struct LampArrayEndpoint *)&Ptr[2]);
            v11 = active;
            if ( active < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xDF,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
                (const char *)(unsigned int)active);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v21);
              goto LABEL_28;
            }
          }
          v8 = v23;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v21);
      }
      else
      {
        v13 = (RTL_SRWLOCK *)((char *)this + 96);
        v25 = (char *)this + 96;
        while ( 1 )
        {
          v14 = (RTL_SRWLOCK *)v13->Ptr;
          v23 = (RTL_SRWLOCK *)v13->Ptr;
          if ( !NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v23, &v25) )
            break;
          LampArrayDevice::AddViewClient(*v6, (struct LampArrayEndpoint *)&v14[2]);
          if ( LODWORD(v14[3].Ptr) == *((_DWORD *)this + 16) )
          {
            v15 = LampArrayRawInputProvider::SetActiveViewClient(this, *v6, (struct LampArrayEndpoint *)&v14[2]);
            v11 = v15;
            if ( v15 < 0 )
            {
              v16 = (unsigned int)v15;
              v17 = 236LL;
              goto LABEL_27;
            }
          }
          v13 = v23;
        }
      }
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl)
        && !*((_BYTE *)this + 312) )
      {
        (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(LampArrayRawInputProvider *), LampArrayRawInputProvider *, __int64))(**((_QWORD **)this + 7) + 152LL))(
          *((_QWORD *)this + 7),
          lambda_9f1a0e1c1238d44398e04dfbea0d7ef4_::_lambda_invoker_cdecl_,
          this,
          3LL);
        *((_BYTE *)this + 312) = 1;
      }
      v24 = 0LL;
      v11 = 0;
    }
    else
    {
      v24 = 0LL;
      v11 = -2147024882;
      v16 = 2147942414LL;
      v17 = 197LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)v16);
    }
LABEL_28:
    std::unique_ptr<LampArrayRawInputProvider::LampArrayDeviceListEntry>::~unique_ptr<LampArrayRawInputProvider::LampArrayDeviceListEntry>(
      &v24,
      v12);
    return v11;
  }
  else if ( IsEdition(6176LL)
         && (v19 = ConsumerControlManager::QueueAddRemoveDevice(*((ConsumerControlManager **)this + 42), a2, 1),
             v20 = v19,
             v19 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
      (const char *)(unsigned int)v19);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)v20);
    return v20;
  }
  else
  {
    return 0LL;
  }
}
