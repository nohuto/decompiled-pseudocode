/*
 * XREFs of ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180037510
 * Callers:
 *     ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x180006010 (-HampRmContextStopActivity@@YAXPEAX@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180021830 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     RmCoreRpcSrvReleaseResourceSet @ 0x1800374E0 (RmCoreRpcSrvReleaseResourceSet.c)
 *     RmtSrv_RS_ReleaseResources @ 0x18006D070 (RmtSrv_RS_ReleaseResources.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetReleaseResources(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  __int64 v7; // rsi
  DWORD v8; // edi
  _QWORD *Value; // rbx
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // r11
  __int64 v13; // r10
  int v14; // edi
  __int64 *v15; // rax
  __int64 v16; // rcx
  unsigned int v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h]
  unsigned __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  struct _RM_SERVICE_GLOBALS *v22; // [rsp+50h] [rbp-B8h]
  EVENT_DESCRIPTOR v23; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v25; // [rsp+70h] [rbp-98h]
  unsigned __int64 v26; // [rsp+78h] [rbp-90h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp-78h]
  char v29[144]; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+128h] [rbp+20h] BYREF
  void *v31; // [rsp+138h] [rbp+30h]
  int v32; // [rsp+140h] [rbp+38h]
  int v33; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+148h] [rbp+40h] BYREF
  void *v35; // [rsp+158h] [rbp+50h]
  int v36; // [rsp+160h] [rbp+58h]
  int v37; // [rsp+164h] [rbp+5Ch]
  unsigned int *v38; // [rsp+168h] [rbp+60h]
  __int64 v39; // [rsp+170h] [rbp+68h]
  unsigned __int64 *v40; // [rsp+178h] [rbp+70h]
  __int64 v41; // [rsp+180h] [rbp+78h]

  v21 = a2 >> 40;
  v24 = HIDWORD(a2);
  *(_QWORD *)&v23.Id = a2 >> 24;
  v26 = a2 >> 16;
  v22 = a1;
  v5 = HIBYTE(a2);
  v6 = HIWORD(a2);
  v19 = a3;
  v25 = a2 >> 8;
  if ( HampLockTrackerId == -1 || !TlsGetValue(HampLockTrackerId) )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v29);
    v20 = 1;
  }
  else
  {
    v20 = 0;
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v31 = &unk_1800C2FD9;
    UserData.Reserved = 2;
    v32 = 32;
    v33 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v7 = 0LL;
  if ( (a3 & 3) == a3 )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v8) )
        __int2c();
      *Value |= 1uLL;
      ++Value[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    dword_1800DD4E8 = GetCurrentThreadId();
    RtlAcquireSRWLockShared((char *)v22 + 552);
    v28 = a2;
    v10 = 0LL;
    v11 = *((_DWORD *)v22 + 135);
    v12 = -1LL << (*((_BYTE *)v22 + 540) & 0x1F);
    v13 = v12 & (v5
               + 37
               * ((unsigned __int8)v6
                + 37
                * ((unsigned __int8)v21
                 + 37
                 * ((unsigned __int8)v24
                  + 37
                  * (LOBYTE(v23.Id)
                   + 37 * ((unsigned __int8)v26 + 37 * ((unsigned __int8)v25 + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_14:
    if ( v10 )
      goto LABEL_17;
    if ( v11 >> 5 )
    {
      v10 = *((_QWORD *)v22 + 68)
          + 8LL
          * ((37
            * (BYTE6(v13)
             + 37
             * (BYTE5(v13)
              + 37
              * (BYTE4(v13)
               + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
            + HIBYTE(v13)) & ((v11 >> 5) - 1));
LABEL_17:
      while ( 1 )
      {
        v10 = *(_QWORD *)v10;
        if ( (v10 & 1) != 0 )
          break;
        if ( v13 == (v12 & *(_QWORD *)(v10 + 8)) )
        {
          if ( a2 != *(_QWORD *)(v10 + 32) )
            goto LABEL_14;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 16)) <= 1 )
            __fastfail(0xEu);
          RtlReleaseSRWLockShared((char *)v22 + 552);
          v7 = *(_QWORD *)(v10 + 48);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
          if ( v10 )
            RmpObjectRelease((char *)v10);
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, v19);
          if ( v14 >= 0 )
            v14 = 0;
          goto LABEL_25;
        }
      }
    }
    RtlReleaseSRWLockShared((char *)v22 + 552);
    v14 = 1;
LABEL_25:
    dword_1800DD4E8 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v15 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v16 = *v15;
      if ( (*v15 & 1) == 0 )
        __int2c();
      if ( v15[1]-- == 1 )
        *v15 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
    }
  }
  else
  {
    v14 = -805306127;
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 9) != 0 && (qword_1800DC1F8 & 9) == qword_1800DC1F8 )
  {
    v40 = &v21;
    v21 = a2;
    v38 = &v19;
    *(_DWORD *)&v23.Level = 516;
    v34.Ptr = (ULONGLONG)off_1800DC1E8;
    v19 = v14;
    v41 = 8LL;
    v39 = 4LL;
    *(_DWORD *)&v23.Id = 184549376;
    v23.Keyword = 9LL;
    v34.Size = *(unsigned __int16 *)off_1800DC1E8;
    v35 = &unk_1800C302F;
    v34.Reserved = 2;
    v36 = 50;
    v37 = 1;
    EventWriteTransfer(RegHandle, &v23, 0LL, 0LL, 4u, &v34);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v20 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v14;
}
