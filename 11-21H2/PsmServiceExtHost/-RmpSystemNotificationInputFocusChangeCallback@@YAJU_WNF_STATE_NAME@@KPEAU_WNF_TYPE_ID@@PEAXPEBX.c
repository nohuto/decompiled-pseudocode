/*
 * XREFs of ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800064B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800061B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180006780 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x1800067C0 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall RmpSystemNotificationInputFocusChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        int *a5)
{
  DWORD v7; // esi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  char i; // cl
  int v14; // edi
  unsigned int v15; // ebx
  bool v16; // al
  void *v17; // rax
  void *v18; // rdi
  bool v19; // dl
  int v20; // eax
  bool v21[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+54h] [rbp-ACh] BYREF
  int v23; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-A0h] BYREF
  void *v26; // [rsp+68h] [rbp-98h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF

  v26 = 0LL;
  memset_0(TlsValue, 0, 0x88uLL);
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, TlsValue);
  }
  RtlAcquireSRWLockExclusive(a4 + 592);
  *((_DWORD *)a4 + 162) = GetCurrentThreadId();
  if ( a1 == WNF_SHEL_FOCUS_CHANGE )
  {
    if ( a5 )
      v11 = *a5;
    else
      v11 = 0;
    if ( v11 != *((_DWORD *)a4 + 156) )
    {
      *((_DWORD *)a4 + 156) = v11;
LABEL_10:
      a4[644] |= 1u;
    }
  }
  else if ( a1 == WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE )
  {
    if ( a5 )
      v19 = *a5 == 1;
    else
      v19 = 0;
    if ( v19 != ((a4[644] & 4) != 0) )
      a4[644] = (4 * v19) | a4[644] & 0xFB | 1;
  }
  else
  {
    if ( a5 )
      v20 = a5[4];
    else
      v20 = 0;
    if ( v20 != *((_DWORD *)a4 + 157) )
    {
      *((_DWORD *)a4 + 157) = v20;
      goto LABEL_10;
    }
  }
  if ( (a4[644] & 3) == 1 )
  {
    for ( i = a4[644] | 2; (i & 1) != 0; i = a4[644] )
    {
      v14 = *((_DWORD *)a4 + 160);
      LOBYTE(v8) = i & 0xFE;
      a4[644] = v8;
      if ( (v8 & 4) != 0 )
        v15 = *((_DWORD *)a4 + 157);
      else
        v15 = *((_DWORD *)a4 + 156);
      if ( v15 != v14 )
      {
        if ( !v15 || (int)RmpSystemOpenProcess(&v26, 0x2000u, v15) >= 0 || (v15 = 0, v14) )
        {
          if ( (unsigned int)dword_1800DC1E0 > 5
            && (byte_1800DC1F0 & 1) != 0
            && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
          {
            v16 = (a4[644] & 4) != 0;
            v25 = v15;
            v21[0] = v16;
            v22 = *((_DWORD *)a4 + 157);
            v23 = *((_DWORD *)a4 + 156);
            v24 = *((_DWORD *)a4 + 160);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
              v8,
              (int)&unk_1800C4675,
              v9,
              v10,
              (__int64)&v25,
              (__int64)&v24,
              (__int64)&v23,
              (__int64)&v22,
              (__int64)v21);
          }
          v17 = v26;
          v18 = (void *)*((_QWORD *)a4 + 79);
          v26 = 0LL;
          *((_QWORD *)a4 + 79) = v17;
          *((_DWORD *)a4 + 160) = v15;
          *((_DWORD *)a4 + 162) = 0;
          RtlReleaseSRWLockExclusive(a4 + 592);
          if ( v18 )
            NtClose(v18);
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
