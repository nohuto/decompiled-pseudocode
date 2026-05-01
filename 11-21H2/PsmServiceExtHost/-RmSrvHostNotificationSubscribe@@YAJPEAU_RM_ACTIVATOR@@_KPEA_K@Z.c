/*
 * XREFs of ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x18002AF94
 * Callers:
 *     RmCoreRpcSrvRegisterActivityHostCallbacks @ 0x18002B4F0 (RmCoreRpcSrvRegisterActivityHostCallbacks.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x180024AC0 (-RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADE.c)
 *     CempLockTrackerIsSetForThread @ 0x18002AF38 (CempLockTrackerIsSetForThread.c)
 *     ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002B380 (-RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall RmSrvHostNotificationSubscribe(struct _RM_ACTIVATOR *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  DWORD v5; // ebx
  int v6; // r15d
  DWORD v7; // edi
  unsigned __int64 v8; // r14
  _QWORD *Value; // rbx
  __int64 v10; // rbx
  int ObjectByHandleWithLock; // esi
  char *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 *v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v22; // [rsp+68h] [rbp-98h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  void *v25; // [rsp+120h] [rbp+20h]
  int v26; // [rsp+128h] [rbp+28h]
  int v27; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+130h] [rbp+30h] BYREF
  void *v29; // [rsp+140h] [rbp+40h]
  int v30; // [rsp+148h] [rbp+48h]
  int v31; // [rsp+14Ch] [rbp+4Ch]
  unsigned __int64 *v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+158h] [rbp+58h]
  PVOID *p_P; // [rsp+160h] [rbp+60h]
  __int64 v35; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v36; // [rsp+170h] [rbp+70h]
  __int64 v37; // [rsp+178h] [rbp+78h]
  unsigned __int64 **v38; // [rsp+180h] [rbp+80h]
  __int64 v39; // [rsp+188h] [rbp+88h]

  v19 = a3;
  v20 = a2;
  if ( CempLockTrackerIsSetForThread() )
  {
    v6 = 0;
  }
  else
  {
    memset_0(TlsValue, 0, 0x88uLL);
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v5, TlsValue);
    }
    v6 = 1;
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v25 = &unk_1800C267A;
    UserData.Reserved = 2;
    v26 = 39;
    v27 = 1;
    LODWORD(v16) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v7 = HampLockTrackerId;
  v8 = -1LL;
  v17 = -1LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v7) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DD4E8 = GetCurrentThreadId();
  v10 = *(_QWORD *)a1;
  v16 = a2;
  RtlAcquireSRWLockShared(v10 + 32);
  ObjectByHandleWithLock = RmpObjectTableFindObjectByHandleWithLock(
                             (struct _RM_OBJECT_TABLE *)(v10 + 16),
                             &v16,
                             (struct _RM_OBJECT_HEADER **)&P);
  RtlReleaseSRWLockShared(v10 + 32);
  if ( ObjectByHandleWithLock < 0 )
    goto LABEL_29;
  v12 = (char *)P;
  if ( *((_BYTE *)P + 656) != 2 )
  {
    ObjectByHandleWithLock = -1073741776;
    if ( P )
    {
      RmpObjectRelease((char *)P);
      v12 = 0LL;
      goto LABEL_19;
    }
LABEL_29:
    v12 = 0LL;
    goto LABEL_19;
  }
  v13 = RmpActivatorSubscribeForNotifications(a1, (struct _RM_ACTIVITY_HOST *)P, &v17);
  v8 = v17;
  ObjectByHandleWithLock = v13;
  if ( v13 >= 0 )
  {
    ObjectByHandleWithLock = 0;
    *v19 = v17;
  }
LABEL_19:
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  CempLockTrackerMarkReleased(HampLockTrackerId, v14, 0);
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 9) != 0 && (qword_1800DC1F8 & 9) == qword_1800DC1F8 )
  {
    LODWORD(P) = *((_DWORD *)a1 + 14);
    v38 = &v19;
    v36 = &v20;
    p_P = &P;
    v32 = &v16;
    *(_DWORD *)&v22.Level = 516;
    v28.Ptr = (ULONGLONG)off_1800DC1E8;
    v35 = 4LL;
    v33 = 4LL;
    v19 = (unsigned __int64 *)v8;
    LODWORD(v16) = ObjectByHandleWithLock;
    v39 = 8LL;
    v37 = 8LL;
    *(_DWORD *)&v22.Id = 184549376;
    v22.Keyword = 9LL;
    v28.Size = *(unsigned __int16 *)off_1800DC1E8;
    v29 = &unk_1800C261C;
    v28.Reserved = 2;
    v30 = 82;
    v31 = 1;
    LODWORD(v17) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v22, 0LL, 0LL, 6u, &v28);
  }
  if ( v12 )
    RmpObjectRelease(v12);
  if ( v6 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)ObjectByHandleWithLock;
}
