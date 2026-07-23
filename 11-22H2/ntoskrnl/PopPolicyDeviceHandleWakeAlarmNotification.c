/*
 * XREFs of PopPolicyDeviceHandleWakeAlarmNotification @ 0x140994684
 * Callers:
 *     PopNotifyPolicyDevice @ 0x14084DF30 (PopNotifyPolicyDevice.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140251430 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     IoGetDeviceObjectPointer @ 0x14075B770 (IoGetDeviceObjectPointer.c)
 *     PopResetCurrentPolicies @ 0x140825058 (PopResetCurrentPolicies.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140A87C40 (EmClientQueryRuleState.c)
 */

__int64 __fastcall PopPolicyDeviceHandleWakeAlarmNotification(__int64 a1)
{
  int v2; // ecx
  bool v3; // si
  __int64 v4; // rax
  NTSTATUS DeviceObjectPointer; // ebx
  IRP *v6; // rax
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // eax
  PVOID OutputBuffer; // [rsp+28h] [rbp-E0h]
  __int64 OutputBufferLength; // [rsp+30h] [rbp-D8h]
  int v17; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v18; // [rsp+5Ch] [rbp-ACh] BYREF
  char v19; // [rsp+5Eh] [rbp-AAh] BYREF
  char v20; // [rsp+5Fh] [rbp-A9h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-A0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-90h] BYREF
  __int64 v25; // [rsp+90h] [rbp-78h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  __int128 v27; // [rsp+A8h] [rbp-60h] BYREF
  int v28; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  int *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  char *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  char *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  char *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  __int16 *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  char *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  char *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  PFILE_OBJECT *p_FileObject; // [rsp+168h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  char *v48; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+188h] [rbp+80h]
  __int64 v51; // [rsp+190h] [rbp+88h]
  struct _KEVENT *p_Event; // [rsp+198h] [rbp+90h]
  __int64 v53; // [rsp+1A0h] [rbp+98h]

  v28 = 0;
  v25 = 0LL;
  DeviceObject = 0LL;
  LODWORD(v21) = 1;
  v27 = 0LL;
  FileObject = 0LL;
  Event.Header.WaitListHead = 0LL;
  IoStatusBlock = 0LL;
  EmClientQueryRuleState(&GUID_EM_RULE_TREAT_TAD_AS_RTC, &v21);
  v3 = (_DWORD)v21 == 2;
  v4 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v4 && (_DWORD)v21 != 2 )
  {
    DeviceObjectPointer = IoGetDeviceObjectPointer(*(PUNICODE_STRING *)(a1 + 40), 3u, &FileObject, &DeviceObject);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_11;
    KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
    v6 = IoBuildDeviceIoControlRequest(
           0x29421Cu,
           DeviceObject,
           0LL,
           0,
           &v27,
           0x14u,
           0,
           (PKEVENT)&Event.Header.WaitListHead,
           &IoStatusBlock);
    if ( v6 )
    {
      DeviceObjectPointer = IofCallDriver(DeviceObject, v6);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
    }
    else
    {
      DeviceObjectPointer = -1073741670;
    }
    ObfDereferenceObject(FileObject);
    if ( DeviceObjectPointer < 0 )
    {
LABEL_11:
      v27 = 0LL;
      v28 = 0;
    }
    if ( (unsigned int)dword_140C03950 > 5 && tlgKeywordOn((__int64)&dword_140C03950, 0x400000000000LL) )
    {
      LODWORD(DeviceObject) = v7;
      v30 = &v21;
      v17 = v27;
      LODWORD(v21) = DeviceObjectPointer;
      v32 = &v17;
      v34 = (char *)&v17 + 1;
      v36 = (char *)&v17 + 2;
      v38 = (char *)&v17 + 3;
      v18 = WORD2(v27);
      v40 = &v18;
      v42 = (char *)&v18 + 1;
      v19 = BYTE6(v27);
      v44 = &v19;
      LODWORD(FileObject) = DWORD2(v27);
      p_FileObject = &FileObject;
      v20 = BYTE12(v27);
      v48 = &v20;
      p_DeviceObject = &DeviceObject;
      p_Event = &Event;
      v31 = 4LL;
      v33 = 1LL;
      v35 = 1LL;
      v37 = 1LL;
      v39 = 1LL;
      v41 = 1LL;
      v43 = 1LL;
      v45 = 1LL;
      v47 = 4LL;
      v49 = 1LL;
      v51 = 4LL;
      *(_QWORD *)&Event.Header.Lock = 0x1000000LL;
      v53 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03950,
        (unsigned __int8 *)&word_14003054E,
        0LL,
        0LL,
        0xEu,
        &v29);
    }
  }
  PopAcquirePolicyLock(v2);
  v12 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( !v12 || v3 )
  {
    if ( byte_140C3DAD3 )
    {
      byte_140C3DAD3 = 0;
      PopResetCurrentPolicies();
    }
    v13 = 0;
    PopAcpiTimeAndAlarmCapabilities = 0LL;
  }
  else
  {
    if ( byte_140C3DAD3 != 1 )
    {
      byte_140C3DAD3 = 1;
      PopResetCurrentPolicies();
    }
    v13 = v28;
    PopAcpiTimeAndAlarmCapabilities = v27;
  }
  dword_140C3A510 = v13;
  return PopReleasePolicyLock(v9, v8, v10, v11, OutputBuffer, OutputBufferLength);
}
