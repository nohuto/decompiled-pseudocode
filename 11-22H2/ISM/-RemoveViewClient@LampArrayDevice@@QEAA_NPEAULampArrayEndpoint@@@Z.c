/*
 * XREFs of ?RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x1800FB850
 * Callers:
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800F8570 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DL51543428@@@details@wil@@QEAA_NXZ @ 0x180064494 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DL51543428@@@details@wil@@QEAA_NX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z @ 0x1800FA690 (--_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z.c)
 */

char __fastcall LampArrayDevice::RemoveViewClient(LampArrayDevice *this, struct LampArrayEndpoint *a2)
{
  char v4; // bp
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  LampArrayDevice::ViewClientListEntry *i; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  LampArrayDevice::ViewClientListEntry *v9; // rcx
  LampArrayDevice::ViewClientListEntry **v10; // rax

  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  for ( i = (LampArrayDevice::ViewClientListEntry *)*((_QWORD *)this + 4);
        i != (LampArrayDevice *)((char *)this + 32);
        i = *(LampArrayDevice::ViewClientListEntry **)i )
  {
    if ( *((_QWORD *)i + 2) == *(_QWORD *)a2 )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DL51543428>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DL51543428>::GetImpl'::`2'::impl) )
      {
        v7 = *((_QWORD *)this + 13);
        if ( v7 )
        {
          if ( *((_QWORD *)i + 2) == *(_QWORD *)(v7 + 16) )
            *((_QWORD *)this + 13) = 0LL;
        }
      }
      v8 = *((_QWORD *)this + 12);
      if ( v8 && *((_QWORD *)i + 2) == *(_QWORD *)(v8 + 16) )
      {
        *((_QWORD *)this + 12) = 0LL;
        v4 = 1;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)i + 2) + 48LL))(*((_QWORD *)i + 2), *((_QWORD *)i + 4));
      v9 = *(LampArrayDevice::ViewClientListEntry **)i;
      v10 = (LampArrayDevice::ViewClientListEntry **)*((_QWORD *)i + 1);
      if ( *(LampArrayDevice::ViewClientListEntry **)(*(_QWORD *)i + 8LL) != i || *v10 != i )
        __fastfail(3u);
      *v10 = v9;
      *((_QWORD *)v9 + 1) = v10;
      --*((_QWORD *)this + 6);
      LampArrayDevice::ViewClientListEntry::`scalar deleting destructor'(i);
      break;
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v4;
}
