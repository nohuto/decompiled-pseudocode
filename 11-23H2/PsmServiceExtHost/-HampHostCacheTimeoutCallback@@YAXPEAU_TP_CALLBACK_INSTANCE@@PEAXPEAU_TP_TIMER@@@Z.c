/*
 * XREFs of ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000FA00
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002CEAC (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5E4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall HampHostCacheTimeoutCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  DWORD v4; // edi
  int v5; // r14d
  DWORD v6; // esi
  _QWORD *Value; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-B8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v16; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE TlsValue[144]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+108h] [rbp+0h] BYREF
  void *v19; // [rsp+118h] [rbp+10h]
  int v20; // [rsp+120h] [rbp+18h]
  int v21; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+128h] [rbp+20h] BYREF
  void *v23; // [rsp+138h] [rbp+30h]
  int v24; // [rsp+140h] [rbp+38h]
  int v25; // [rsp+144h] [rbp+3Ch]
  __int64 *v26; // [rsp+148h] [rbp+40h]
  int v27; // [rsp+150h] [rbp+48h]
  int v28; // [rsp+154h] [rbp+4Ch]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  v5 = 0;
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v19 = &unk_1800BF371;
    UserData.Reserved = 2;
    v20 = 19;
    v21 = 1;
    v14 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(a2);
  *((_DWORD *)a2 + 2) = GetCurrentThreadId();
  if ( HampHostIsCached((struct _RM_HAM_ACTIVITY_HOST *)a2) )
  {
    HampHostQueueTerminateEx(v8, 1LL, 2560LL);
    v5 = v13;
  }
  if ( HampLockTrackerId != -1 )
  {
    v9 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v10 = *v9;
    if ( (*v9 & 2) == 0 )
      __int2c();
    if ( v9[2]-- == 1 )
      *v9 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a2 + 2) = 0;
  RtlReleaseSRWLockExclusive(a2);
  if ( v5 )
    HampDepGroupRunStateChangeWorker(*((struct _HAM_DEPENDENCY_GROUP **)a2 + 88));
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v27 = 8;
    v12 = 32LL;
    v16.Keyword = 8LL;
    *(_DWORD *)&v16.Id = 184549376;
    if ( a2 )
      v12 = (__int64)(a2 - 32);
    v28 = 0;
    v13 = *(_QWORD *)v12;
    v26 = &v13;
    *(_DWORD *)&v16.Level = 516;
    v22.Ptr = (ULONGLONG)off_1800DB220;
    v22.Size = *(unsigned __int16 *)off_1800DB220;
    v23 = &unk_1800BFCEF;
    v22.Reserved = 2;
    v24 = 27;
    v25 = 1;
    v14 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &v16, 0LL, 0LL, 3u, &v22);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
