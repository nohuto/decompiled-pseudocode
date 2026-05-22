/*
 * XREFs of ?RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x1800EC76C
 * Callers:
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800E95F0 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z @ 0x1800EB6F0 (--_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z.c)
 */

char __fastcall LampArrayDevice::RemoveViewClient(LampArrayDevice *this, struct LampArrayEndpoint *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  char v4; // bp
  LampArrayDevice::ViewClientListEntry *i; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  LampArrayDevice::ViewClientListEntry *v9; // rcx
  LampArrayDevice::ViewClientListEntry **v10; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  for ( i = (LampArrayDevice::ViewClientListEntry *)*((_QWORD *)this + 4);
        i != (LampArrayDevice *)((char *)this + 32);
        i = *(LampArrayDevice::ViewClientListEntry **)i )
  {
    v7 = *((_QWORD *)i + 2);
    if ( v7 == *(_QWORD *)a2 )
    {
      v8 = *((_QWORD *)this + 12);
      if ( v8 && v7 == *(_QWORD *)(v8 + 16) )
      {
        *((_QWORD *)this + 12) = 0LL;
        v4 = 1;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)i + 2) + 48LL))(*((_QWORD *)i + 2), *((_QWORD *)i + 4));
      v9 = *(LampArrayDevice::ViewClientListEntry **)i;
      if ( *(LampArrayDevice::ViewClientListEntry **)(*(_QWORD *)i + 8LL) != i
        || (v10 = (LampArrayDevice::ViewClientListEntry **)*((_QWORD *)i + 1), *v10 != i) )
      {
        __fastfail(3u);
      }
      *v10 = v9;
      *((_QWORD *)v9 + 1) = v10;
      --*((_QWORD *)this + 6);
      LampArrayDevice::ViewClientListEntry::`scalar deleting destructor'(i);
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
