/*
 * XREFs of SidebandCapableDeferredFilterFactoryCreate @ 0x1C0029710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DeInitSideband @ 0x1C000804C (DeInitSideband.c)
 *     IsDeviceInSidebandMode @ 0x1C0008690 (IsDeviceInSidebandMode.c)
 */

void __fastcall SidebandCapableDeferredFilterFactoryCreate(
        PVOID IoObject,
        struct _KSDEVICE *Context,
        PIO_WORKITEM IoWorkItem)
{
  char *v3; // rsi
  int v6; // r14d
  int v7; // r15d
  char v8; // di
  char v9; // dl
  GUID *v10; // rbx
  GUID v11; // xmm0
  struct _KEVENT *v12; // rcx
  PDEVICE_OBJECT v13; // rcx
  char v14; // r8
  unsigned __int16 v15; // ax
  int CreateItemFlags; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+78h] [rbp+10h] BYREF
  PKSFILTERFACTORY FilterFactory; // [rsp+88h] [rbp+20h] BYREF

  v3 = (char *)Context->Context;
  FilterFactory = 0LL;
  v17 = 0;
  v6 = -1073741437;
  v7 = 0;
  v8 = 1;
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      CreateItemFlags,
      9u,
      0x1Bu,
      (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
  KeSetEvent((PRKEVENT)v3 + 40, 0, 0);
  IoFreeWorkItem(IoWorkItem);
  if ( !*((_DWORD *)v3 + 44) )
    goto LABEL_19;
  v10 = (GUID *)*((_QWORD *)v3 + 23);
  v6 = IsDeviceInSidebandMode((__int64)Context, &v17);
  if ( v6 < 0 )
    goto LABEL_19;
  if ( v17 )
  {
    v11 = USBSIDEBANDAUDIO_KSCATEGORY_AUDIO;
    v7 = 1;
  }
  else
  {
    v11 = KSCATEGORY_AUDIO;
  }
  *v10 = v11;
  if ( (unsigned int)(*((_DWORD *)v3 + 215) - 1) <= 1 )
  {
    KsAcquireDevice(Context);
    v6 = KsCreateFilterFactory(
           Context->FunctionalDeviceObject,
           (const KSFILTER_DESCRIPTOR *)(v3 + 128),
           (PWSTR)L"GLOBAL",
           0LL,
           8u,
           0LL,
           0LL,
           &FilterFactory);
    if ( v6 >= 0 )
    {
      v6 = KsFilterFactorySetDeviceClassesState(FilterFactory, 1u);
      *((_QWORD *)v3 + 15) = FilterFactory;
    }
    KsReleaseDevice(Context);
  }
  if ( !v7 )
  {
LABEL_19:
    KeWaitForSingleObject(v3 + 752, Executive, 0, 0, 0LL);
    DeInitSideband((__int64)Context);
    KeReleaseMutex((PRKMUTEX)(v3 + 752), 0);
  }
  v12 = (struct _KEVENT *)*((_QWORD *)v3 + 124);
  if ( v12 )
    KeSetEvent(v12, 0, 0);
  if ( v7 )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = 28;
LABEL_37:
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)v13->AttachedDevice,
        v8,
        v14,
        (__int64)v13->DeviceExtension,
        CreateItemFlags,
        9u,
        v15,
        (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
    }
  }
  else
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = 29;
      goto LABEL_37;
    }
  }
  if ( v6 < 0 )
  {
    KeWaitForSingleObject(v3 + 752, Executive, 0, 0, 0LL);
    *((_DWORD *)v3 + 246) |= 4u;
    KeReleaseMutex((PRKMUTEX)(v3 + 752), 0);
    IoInvalidateDeviceState(Context->PhysicalDeviceObject);
  }
}
