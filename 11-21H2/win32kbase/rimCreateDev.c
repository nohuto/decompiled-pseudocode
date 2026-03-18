/*
 * XREFs of RIMCreateDev @ 0x1C0045A34
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C0004880 (RIMAddInjectionDeviceOfType.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00454B0 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0181990 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0182000 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01A82F4 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimCreateDev @ 0x1C0045360 (rimCreateDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0046ABC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C004B44C (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C0055EE4 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMCreateHidDesc @ 0x1C0056014 (RIMCreateHidDesc.c)
 *     RIMIsCurrentProcessTrusted @ 0x1C005F0F0 (RIMIsCurrentProcessTrusted.c)
 *     Win32AllocPoolNonPagedZInit @ 0x1C005F140 (Win32AllocPoolNonPagedZInit.c)
 *     Win32AllocPoolZInit @ 0x1C00869F0 (Win32AllocPoolZInit.c)
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C009F0E8 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     RIMGetMouseDeviceHardwareId @ 0x1C00A0FE0 (RIMGetMouseDeviceHardwareId.c)
 *     rimDereferenceDev @ 0x1C00A12A0 (rimDereferenceDev.c)
 *     RIMGetDeviceParent @ 0x1C00A13E0 (RIMGetDeviceParent.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1C00A1600 (RIMLoadDeviceLegacyInfo.c)
 *     rimDoRimDevChange @ 0x1C00A1F28 (rimDoRimDevChange.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00B7910 (RIMFreeSpecificDevWorker.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00C1EA4 (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMFindInputDeviceForConfig @ 0x1C018B1B0 (RIMFindInputDeviceForConfig.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C018C290 (RIMMarkSiblingMouseDevice.c)
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1C01A05FC (RIMPopulateExtendedMouseDeviceProperties.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C020F954 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreateDev(
        CDeviceIdentity **Object,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        struct _UNICODE_STRING **a7)
{
  int v7; // r12d
  int v8; // edi
  char v10; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _UNICODE_STRING *Dev; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // r14
  char *v20; // rcx
  PVOID v21; // rcx
  struct _KEVENT *v22; // rax
  int v23; // edx
  PDEVICE_OBJECT v24; // rcx
  __int16 v25; // r9
  __int64 v26; // rax
  char Length; // al
  int v28; // edx
  int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  PVOID v33; // r15
  char *v34; // r14
  CDeviceIdentity *v35; // rcx
  CDeviceIdentity *v36; // rax
  PWSTR Buffer; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  _QWORD *v41; // r14
  PVOID Objecta[2]; // [rsp+50h] [rbp-10h] BYREF
  int v44; // [rsp+98h] [rbp+38h] BYREF
  int v45; // [rsp+A8h] [rbp+48h] BYREF

  v7 = a5;
  v8 = a4;
  v10 = a2;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3);
  if ( (v8 || v7) && v8 == v7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3);
  Dev = (struct _UNICODE_STRING *)rimCreateDev((__int64)Object, a2, a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v16 = Win32AllocPoolZInit(*(unsigned __int16 *)(a3 + 2), 1886417746LL);
    Dev[13].Buffer = (PWSTR)v16;
    if ( !v16 )
    {
      LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_S(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          (_DWORD)gRimLog,
          2,
          1,
          13,
          (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids,
          *(_QWORD *)(a3 + 8));
      goto LABEL_102;
    }
    Dev[13].MaximumLength = *(_WORD *)(a3 + 2);
    RtlCopyUnicodeString(Dev + 13, (PCUNICODE_STRING)a3);
  }
  LOBYTE(Dev[3].Length) = v10;
  if ( v8 )
    LODWORD(Dev[11].Buffer) |= 0x20u;
  v19 = a6;
  if ( v7 )
  {
    if ( !a6 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15);
    LODWORD(Dev[11].Buffer) |= 0x2000u;
    Dev[24].Buffer = *(PWSTR *)(v19 + 116);
    *(_DWORD *)&Dev[25].Length = *(_DWORD *)(v19 + 124);
    HIDWORD(Dev[82].Buffer) = *(_DWORD *)(v19 + 132);
    *(_QWORD *)&Dev[83].Length = *(_QWORD *)(v19 + 136);
    if ( (unsigned int)RIMIsCurrentProcessTrusted() )
    {
      v20 = *(char **)&Dev[83].Length;
      LODWORD(Dev[11].Buffer) |= 0x4000u;
      Objecta[0] = 0LL;
      if ( (int)RawInputManagerDeviceObjectResolveHandle(v20, 1u, 1, Objecta) >= 0 )
      {
        v21 = Objecta[0];
        if ( (*((_DWORD *)Objecta[0] + 68) & 0x2000) == 0 )
          LODWORD(Dev[11].Buffer) |= 0x8000u;
        ObfDereferenceObject(v21);
      }
    }
    v22 = (struct _KEVENT *)Win32AllocPoolNonPagedZInit(24LL, 1986358098LL);
    Dev[23].Buffer = (PWSTR)v22;
    if ( !v22 )
    {
      v24 = WPP_GLOBAL_Control;
      LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_102;
      v25 = 14;
      goto LABEL_101;
    }
  }
  else
  {
    v22 = (struct _KEVENT *)Win32AllocPoolNonPagedZInit(24LL, 1986358098LL);
    *(_QWORD *)&Dev[22].Length = v22;
    if ( !v22 )
    {
      v24 = WPP_GLOBAL_Control;
      LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_102;
      v25 = 15;
LABEL_101:
      WPP_RECORDER_AND_TRACE_SF_(
        v24->AttachedDevice,
        v23,
        v18,
        (_DWORD)gRimLog,
        2,
        1,
        v25,
        (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids);
      goto LABEL_102;
    }
  }
  KeInitializeEvent(v22, SynchronizationEvent, 0);
  LODWORD(Dev[11].Buffer) |= 0x20000u;
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    v26 = RIMCreateHidDesc(Object, Dev, v19);
    Dev[28].Buffer = (PWSTR)v26;
    if ( !v26 )
    {
      v24 = WPP_GLOBAL_Control;
      LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_102;
      v25 = 16;
      goto LABEL_101;
    }
  }
  Length = Dev[3].Length;
  if ( !Length )
  {
    if ( v7 )
    {
      Dev[55].Length = 32;
      goto LABEL_73;
    }
    if ( !(unsigned int)RIMGetDeviceParent(0LL, Dev) )
    {
      LOBYTE(v28) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v28,
          v29,
          (_DWORD)gRimLog,
          3,
          1,
          17,
          (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids);
      }
    }
    Objecta[0] = 0LL;
    if ( (unsigned int)RIMFindSiblingPointerDeviceForMouse(Dev, Objecta) )
    {
      v33 = Objecta[0];
      if ( Objecta[0] )
        v34 = (char *)Objecta[0] + 88;
      else
        v34 = 0LL;
      if ( v34[48] != 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
      RIMMarkSiblingMouseDevice(Dev, *(unsigned __int16 *)(*((_QWORD *)v34 + 57) + 40LL));
      ObfDereferenceObject(v33);
    }
    else
    {
      RIMLoadDeviceLegacyInfo(Dev);
    }
    RIMGetMouseDeviceHardwareId(Dev);
    RIMPopulateExtendedMouseDeviceProperties((struct RIMDEV *)Dev);
    Length = Dev[3].Length;
  }
  if ( Length == 1 && !v7 )
    RIMPopulateExtendedKeyboardDeviceProperties(Dev);
LABEL_73:
  LODWORD(Dev[12].Buffer) |= 0x20u;
  if ( (int)ObfReferenceObject(Object) < 0 )
  {
LABEL_102:
    *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 9LL) = 1;
    RIMFreeSpecificDevWorker(Object, Dev, v18);
    rimDereferenceDev(Dev);
    return 3221225495LL;
  }
  *(_QWORD *)&Dev[21].Length = Object;
  v36 = Object[53];
  if ( v36 )
  {
    do
    {
      v35 = v36;
      v36 = (CDeviceIdentity *)*((_QWORD *)v36 + 5);
    }
    while ( v36 );
    *((_QWORD *)v35 + 5) = Dev;
  }
  else
  {
    Object[53] = (CDeviceIdentity *)Dev;
  }
  CDeviceIdentity::IssueIdentityOnDeviceArrival(v35, *(struct RawInputManagerDeviceObject **)&Dev[2].Length);
  if ( !Object[108] || *((_DWORD *)Object + 272) || !v7 )
    rimDoRimDevChange(Object, Dev, 1LL);
  if ( ((__int64)Dev[11].Buffer & 0x1000) != 0 )
  {
    Buffer = Dev[28].Buffer;
    v45 = 0;
    v44 = 0;
    Objecta[0] = 0LL;
    if ( (unsigned int)RIMFindInputDeviceForConfig(
                         (_DWORD)Buffer,
                         (_DWORD)Object,
                         (_DWORD)Dev,
                         (unsigned int)&v45,
                         (__int64)&v44,
                         (__int64)Objecta) )
    {
      if ( !v44 )
      {
        v41 = Objecta[0];
        if ( *(_DWORD *)(*((_QWORD *)Objecta[0] + 59) + 24LL) != 7 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
        ApiSetSetUserPTPEnabledPreference(v41, v41[57], Object);
      }
    }
  }
  if ( !Object[108] && !*((_DWORD *)Object + 272) && v7 )
    rimDoRimDevChange(Object, Dev, 2LL);
  RimTelemetry::ReportRimDevice(1, -__CFSHR__(Dev[12].Buffer, 8), (struct RIMDEV *const)Dev);
  *a7 = Dev;
  return 0LL;
}
