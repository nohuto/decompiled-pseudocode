/*
 * XREFs of DeviceSurpriseRemoval @ 0x1C003C780
 * Callers:
 *     <none>
 * Callees:
 *     DeInitSideband @ 0x1C00080F8 (DeInitSideband.c)
 *     ExitIrpThreadAndQueue @ 0x1C000962C (ExitIrpThreadAndQueue.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0009A84 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall DeviceSurpriseRemoval(_QWORD *Object))(_QWORD *)
{
  __int64 v1; // r14
  bool v3; // dl
  void *v4; // rcx
  PVOID i; // rax
  struct _KSFILTER *j; // rax
  ULONG k; // ebp
  PKSPIN m; // rax
  _QWORD *Context; // r13
  void (__fastcall *v10)(struct _KSPIN *); // rax
  struct _KSPIN *v11; // rsi
  struct _KSFILTER *v12; // rbx
  void *v13; // rdi
  struct _KSFILTERFACTORY *v14; // rcx
  __int64 (__fastcall *result)(_QWORD *); // rax

  v1 = Object[2];
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  KeWaitForSingleObject((PVOID)(v1 + 752), Executive, 0, 0, 0LL);
  DeInitSideband((__int64)Object);
  KeReleaseMutex((PRKMUTEX)(v1 + 752), 0);
  v4 = *(void **)(v1 + 992);
  if ( v4 )
  {
    KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
    ExFreePoolWithTag(*(PVOID *)(v1 + 992), 0x65627845u);
    *(_QWORD *)(v1 + 992) = 0LL;
  }
  ExitIrpThreadAndQueue(v1);
  for ( i = KsGetFirstChild(Object); ; i = KsGetNextSibling(v13) )
  {
    v13 = i;
    if ( !i )
      break;
    for ( j = (struct _KSFILTER *)KsGetFirstChild(i); ; j = (struct _KSFILTER *)KsGetNextSibling(v12) )
    {
      v12 = j;
      if ( !j )
        break;
      KsAcquireControl(j);
      for ( k = 0; k < v12->Descriptor->PinDescriptorsCount; ++k )
      {
        for ( m = KsFilterGetFirstChildPin(v12, k); ; m = KsPinGetNextSiblingPin(v11) )
        {
          v11 = m;
          if ( !m )
            break;
          Context = m->Context;
          v10 = *(void (__fastcall **)(struct _KSPIN *))(*(_QWORD *)(Context[18] + 128LL) + 32LL);
          if ( v10 )
            v10(v11);
          *((_BYTE *)Context + 46) = 1;
        }
      }
      KsReleaseControl(v12);
    }
  }
  v14 = *(struct _KSFILTERFACTORY **)(v1 + 120);
  if ( v14 )
  {
    KsFilterFactorySetDeviceClassesState(v14, 0);
    *(_QWORD *)(v1 + 120) = 0LL;
  }
  *(_BYTE *)(Object[2] + 67LL) = 1;
  result = *(__int64 (__fastcall **)(_QWORD *))(pExtBusDeviceDispatchTable + 32);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD *))result(Object);
  return result;
}
