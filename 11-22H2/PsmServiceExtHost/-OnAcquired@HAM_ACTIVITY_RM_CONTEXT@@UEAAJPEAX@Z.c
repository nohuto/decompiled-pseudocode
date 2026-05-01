/*
 * XREFs of ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x180027130
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180024B30 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::OnAcquired(HAM_ACTIVITY_RM_CONTEXT *this, void *a2)
{
  DWORD v4; // esi
  __int64 v5; // r14
  _QWORD *Value; // rbx
  __int64 v7; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rcx
  int v9; // eax
  char v10; // si
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v15; // rcx
  char v17; // [rsp+30h] [rbp-99h] BYREF
  char v18; // [rsp+31h] [rbp-98h] BYREF
  char v19; // [rsp+32h] [rbp-97h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-95h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-91h] BYREF
  __int64 v22; // [rsp+48h] [rbp-81h] BYREF
  EVENT_DESCRIPTOR v23; // [rsp+50h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-69h] BYREF
  void *v25; // [rsp+70h] [rbp-59h]
  int v26; // [rsp+78h] [rbp-51h]
  int v27; // [rsp+7Ch] [rbp-4Dh]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+80h] [rbp-49h] BYREF
  void *v29; // [rsp+90h] [rbp-39h]
  int v30; // [rsp+98h] [rbp-31h]
  int v31; // [rsp+9Ch] [rbp-2Dh]
  __int64 *v32; // [rsp+A0h] [rbp-29h]
  __int64 v33; // [rsp+A8h] [rbp-21h]
  char *v34; // [rsp+B0h] [rbp-19h]
  __int64 v35; // [rsp+B8h] [rbp-11h]
  char *v36; // [rsp+C0h] [rbp-9h]
  __int64 v37; // [rsp+C8h] [rbp-1h]
  char *v38; // [rsp+D0h] [rbp+7h]
  __int64 v39; // [rsp+D8h] [rbp+Fh]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+E0h] [rbp+17h]
  __int64 v41; // [rsp+E8h] [rbp+1Fh]

  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v25 = &unk_1800C2CDF;
    UserData.Reserved = 2;
    v26 = 30;
    v27 = 1;
    v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = HampLockTrackerId;
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 80LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( a2 == *((void **)this + 2) )
  {
    v7 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v7 + 562) == 2 )
    {
      RtlQueryPerformanceCounter(*(_QWORD *)(v7 + 528) + 8LL);
      v8 = *(struct _RM_HAM_ACTIVITY_HOST **)(v7 + 80);
      *(_BYTE *)(v7 + 563) = 1;
      HampHostUpdateActivityState(v8);
      v9 = HampActTryStart(v7);
      v10 = v9;
      if ( v9 )
      {
        if ( (unsigned int)(v9 - 9) <= 6 )
          HampHostCheckQueueStateWorker(*(struct _RM_HAM_ACTIVITY_HOST **)(v7 + 80), 0);
      }
      else
      {
        v10 = 0;
      }
    }
    else
    {
      v10 = 4;
    }
  }
  else
  {
    v10 = 1;
  }
  v11 = *(_QWORD *)(*((_QWORD *)this + 1) + 80LL);
  if ( HampLockTrackerId != -1 )
  {
    v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v13 = *v12;
    if ( (*v12 & 2) == 0 )
      __int2c();
    if ( v12[2]-- == 1 )
      *v12 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v11 + 8) = 0;
  RtlReleaseSRWLockExclusive(v11);
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v15 = *((_QWORD *)this + 1);
    *(_QWORD *)&EventDescriptor.Id = a2;
    v41 = 8LL;
    v39 = 1LL;
    v17 = *(_BYTE *)(v15 + 563);
    v18 = *(_BYTE *)(v15 + 562);
    v19 = v10;
    v22 = *(_QWORD *)(v15 + 40);
    p_EventDescriptor = &EventDescriptor;
    v38 = &v17;
    v36 = &v18;
    v34 = &v19;
    v32 = &v22;
    *(_DWORD *)&v23.Level = 516;
    v28.Ptr = (ULONGLONG)off_1800DB220;
    v37 = 1LL;
    v35 = 1LL;
    v33 = 8LL;
    *(_DWORD *)&v23.Id = 184549376;
    v23.Keyword = 8LL;
    v28.Size = *(unsigned __int16 *)off_1800DB220;
    v29 = &unk_1800C2D2F;
    v28.Reserved = 2;
    v30 = 92;
    v31 = 1;
    v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &v23, 0LL, 0LL, 7u, &v28);
  }
  return 0LL;
}
