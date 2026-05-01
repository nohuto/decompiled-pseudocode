/*
 * XREFs of ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180010370
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001076C (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18002B254 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

__int64 __fastcall RmpSystemNotificationInputFocusChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        int *a5)
{
  DWORD v7; // r14d
  int v8; // eax
  char i; // cl
  int v11; // edi
  char v12; // cl
  unsigned int v13; // ebx
  char v14; // al
  void *v15; // rax
  void *v16; // rdi
  bool v17; // dl
  int v18; // eax
  bool v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-C0h] BYREF
  void *v24; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-B0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  struct _WNF_STATE_NAME v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  struct _WNF_STATE_NAME v30; // [rsp+80h] [rbp-80h]
  _BYTE TlsValue[144]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  void *v33; // [rsp+130h] [rbp+30h]
  int v34; // [rsp+138h] [rbp+38h]
  int v35; // [rsp+13Ch] [rbp+3Ch]
  unsigned int *v36; // [rsp+140h] [rbp+40h]
  int v37; // [rsp+148h] [rbp+48h]
  int v38; // [rsp+14Ch] [rbp+4Ch]
  int *v39; // [rsp+150h] [rbp+50h]
  int v40; // [rsp+158h] [rbp+58h]
  int v41; // [rsp+15Ch] [rbp+5Ch]
  int *v42; // [rsp+160h] [rbp+60h]
  int v43; // [rsp+168h] [rbp+68h]
  int v44; // [rsp+16Ch] [rbp+6Ch]
  int *v45; // [rsp+170h] [rbp+70h]
  int v46; // [rsp+178h] [rbp+78h]
  int v47; // [rsp+17Ch] [rbp+7Ch]
  bool *v48; // [rsp+180h] [rbp+80h]
  int v49; // [rsp+188h] [rbp+88h]
  int v50; // [rsp+18Ch] [rbp+8Ch]

  v24 = 0LL;
  memset_0(TlsValue, 0, 0x88uLL);
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, TlsValue);
  }
  RtlAcquireSRWLockExclusive(a4 + 592);
  v28 = a1;
  *((_DWORD *)a4 + 162) = GetCurrentThreadId();
  v27 = WNF_SHEL_FOCUS_CHANGE;
  if ( a1 == WNF_SHEL_FOCUS_CHANGE )
  {
    if ( a5 )
      v8 = *a5;
    else
      v8 = 0;
    if ( v8 != *((_DWORD *)a4 + 156) )
    {
      *((_DWORD *)a4 + 156) = v8;
LABEL_10:
      a4[644] |= 1u;
    }
  }
  else
  {
    v29 = WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE;
    v30 = a1;
    if ( a1 == WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE )
    {
      if ( a5 )
        v17 = *a5 == 1;
      else
        v17 = 0;
      if ( v17 != ((a4[644] & 4) != 0) )
        a4[644] = (4 * v17) | a4[644] & 0xFB | 1;
    }
    else
    {
      if ( a5 )
        v18 = a5[4];
      else
        v18 = 0;
      if ( v18 != *((_DWORD *)a4 + 157) )
      {
        *((_DWORD *)a4 + 157) = v18;
        goto LABEL_10;
      }
    }
  }
  if ( (a4[644] & 3) == 1 )
  {
    for ( i = a4[644] | 2; (i & 1) != 0; i = a4[644] )
    {
      v11 = *((_DWORD *)a4 + 160);
      v12 = i & 0xFE;
      a4[644] = v12;
      if ( (v12 & 4) != 0 )
        v13 = *((_DWORD *)a4 + 157);
      else
        v13 = *((_DWORD *)a4 + 156);
      if ( v13 != v11 )
      {
        if ( !v13 || (int)RmpSystemOpenProcess(&v24, 0x2000u, v13) >= 0 || (v13 = 0, v11) )
        {
          if ( (unsigned int)dword_1800DB1E0 > 5
            && (byte_1800DB1F0 & 1) != 0
            && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
          {
            v14 = a4[644];
            v50 = 0;
            v47 = 0;
            v44 = 0;
            v41 = 0;
            v38 = 0;
            v23 = v13;
            v19 = (v14 & 4) != 0;
            v20 = *((_DWORD *)a4 + 157);
            v21 = *((_DWORD *)a4 + 156);
            v22 = *((_DWORD *)a4 + 160);
            v48 = &v19;
            v45 = &v20;
            v42 = &v21;
            v39 = &v22;
            v36 = &v23;
            *(_DWORD *)&EventDescriptor.Level = 5;
            UserData.Ptr = (ULONGLONG)off_1800DB1E8;
            v49 = 1;
            v46 = 4;
            v43 = 4;
            v40 = 4;
            v37 = 4;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            EventDescriptor.Keyword = 1LL;
            UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
            v33 = &unk_1800C5147;
            UserData.Reserved = 2;
            v34 = 104;
            v35 = 1;
            v25 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
          }
          v15 = v24;
          v16 = (void *)*((_QWORD *)a4 + 79);
          v24 = 0LL;
          *((_QWORD *)a4 + 79) = v15;
          *((_DWORD *)a4 + 160) = v13;
          *((_DWORD *)a4 + 162) = 0;
          RtlReleaseSRWLockExclusive(a4 + 592);
          if ( v16 )
            NtClose(v16);
          RtlAcquireSRWLockExclusive(a4 + 2168);
          *((_DWORD *)a4 + 544) = GetCurrentThreadId();
          RmpGameModeQueuePolicyWorkerWithLock((struct _RM_GAME_MODE_CONTEXT *)(a4 + 2096));
          *((_DWORD *)a4 + 544) = 0;
          RtlReleaseSRWLockExclusive(a4 + 2168);
          RtlAcquireSRWLockExclusive(a4 + 592);
          *((_DWORD *)a4 + 162) = GetCurrentThreadId();
        }
      }
    }
    a4[644] = i & 0xFD;
  }
  *((_DWORD *)a4 + 162) = 0;
  RtlReleaseSRWLockExclusive(a4 + 592);
  CempLockTrackerClearForThread(HampLockTrackerId);
  return 0LL;
}
