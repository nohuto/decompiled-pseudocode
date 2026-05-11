/*
 * XREFs of DeviceCreate @ 0x1C0001060
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x1C0001658 (McGenEventRegister_EtwRegister.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     InitializeSidebandContext @ 0x1C00085BC (InitializeSidebandContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     WmiRegisterProvider @ 0x1C0032130 (WmiRegisterProvider.c)
 */

__int64 __fastcall DeviceCreate(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // edi
  PDEVICE_OBJECT v4; // rcx
  PDRIVER_CONTROL *Pool2; // rax
  int v6; // edx
  int v7; // r8d
  PDRIVER_CONTROL *v8; // rbx
  __int64 v9; // rdx
  const wchar_t *v10; // rax
  signed int v11; // ecx
  __int16 v12; // dx
  KIRQL v13; // al
  PDRIVER_CONTROL DeviceRoutine; // rcx
  int CsqAcquireLock; // [rsp+20h] [rbp-60h]
  _COUNTED_REASON_CONTEXT Context; // [rsp+50h] [rbp-30h] BYREF

  memset(&Context, 0, sizeof(Context));
  v3 = -1073741670;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  McGenEventRegister_EtwRegister(v4, a2, &EXBUSAUD_PROVIDER_Context, &EXBUSAUD_PROVIDER_Context);
  EtwSetInformation(
    EXBUSAUD_PROVIDER_Context,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  Pool2 = (PDRIVER_CONTROL *)ExAllocatePool2(64LL, 1008LL, 1096972357LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    v3 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Pool2, ExFreePool);
    if ( v3 < 0 )
    {
      ExFreePool(v8);
    }
    else
    {
      *(_QWORD *)(a1 + 16) = v8;
      InitializeSidebandContext(v8 + 89);
      WmiRegisterProvider(a1);
      KeInitializeSpinLock((PKSPIN_LOCK)v8 + 12);
      v8[2] = (PDRIVER_CONTROL)a1;
      v8[14] = (PDRIVER_CONTROL)(v8 + 13);
      v8[13] = (PDRIVER_CONTROL)(v8 + 13);
      *((_BYTE *)v8 + 64) = 1;
      Context.ResourceReasonId = 900;
      v9 = 0x7FFFLL;
      v10 = L"mmres.dll";
      Context.Flags = 2;
      Context.StringCount = 0;
      Context.ReasonStrings = 0LL;
      Context.ResourceFileName = 0LL;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v9;
      }
      while ( v9 );
      v11 = v9 == 0 ? 0xC000000D : 0;
      if ( v9 )
      {
        v12 = 2 * v9;
        Context.ResourceFileName.Buffer = L"mmres.dll";
        Context.ResourceFileName.Length = -2 - v12;
        Context.ResourceFileName.MaximumLength = -v12;
      }
      if ( v11 >= 0 )
        PoCreatePowerRequest((PVOID *)v8 + 65, *(PDEVICE_OBJECT *)(a1 + 24), &Context);
      KeInitializeEvent((PRKEVENT)v8 + 23, NotificationEvent, 1u);
      KeInitializeSpinLock((PKSPIN_LOCK)v8 + 80);
      KeInitializeSemaphore((PRKSEMAPHORE)(v8 + 83), 0, 0x7FFFFFFF);
      v8[82] = (PDRIVER_CONTROL)(v8 + 81);
      v8[81] = (PDRIVER_CONTROL)(v8 + 81);
      v3 = IoCsqInitialize(
             (PIO_CSQ)v8 + 9,
             CsInsertIrp,
             CSidebandDevice::staticCsqRemoveIrp,
             CsPeekNextIrp,
             CsAcquireLock,
             CsReleaseLock,
             CsCompleteCanceledIrp);
      if ( v3 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(__int64))pExtBusDeviceDispatchTable)(a1);
        if ( v3 >= 0 )
        {
          v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
          DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
          ++WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
          if ( *((struct _DEVICE_OBJECT **)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 1) != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
            __fastfail(3u);
          *v8 = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
          v8[1] = (PDRIVER_CONTROL)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
          *((_QWORD *)DeviceRoutine + 1) = v8;
          WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)v8;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v13);
          return (unsigned int)v3;
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( (_BYTE)v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      WPP_GLOBAL_Control->DeviceExtension,
      CsqAcquireLock,
      1,
      11,
      (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids,
      a1,
      v3);
  }
  return (unsigned int)v3;
}
