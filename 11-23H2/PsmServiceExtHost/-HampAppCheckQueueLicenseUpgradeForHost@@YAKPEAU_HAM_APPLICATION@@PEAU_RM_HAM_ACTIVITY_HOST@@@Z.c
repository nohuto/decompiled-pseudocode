/*
 * XREFs of ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001FAE0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18000E280 (-HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180011354 (-HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_LICENSE_TYPE@@_K@Z @ 0x180011F20 (-HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x1800422E0 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18007F0E8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlg_ea_18007F0E8.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007F4F4 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007F630 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18007F6A0 (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

__int64 __fastcall HampAppCheckQueueLicenseUpgradeForHost(
        struct _HAM_APPLICATION *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  unsigned int v2; // ebx
  DWORD v3; // edi
  __int64 v6; // r14
  _QWORD *Value; // rbx
  char *v8; // r13
  __int64 *v9; // rax
  __int64 v10; // rcx
  bool v11; // zf
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rcx
  DWORD v16; // edi
  _QWORD *v17; // rbx
  unsigned int v18; // ecx
  __int64 *v19; // rax
  __int64 v20; // rcx
  struct _HAM_USER *v21; // r15
  NTSTATUS ContextToken; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  const unsigned __int16 *v25; // rcx
  __int64 v26; // rax
  int v27; // edx
  DWORD v28; // r15d
  _QWORD *v29; // rbx
  int v30; // edi
  __int64 *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // esi
  DWORD v34; // edi
  _QWORD *v35; // rbx
  __int64 *v37; // rax
  __int64 v38; // rcx
  char v39; // [rsp+51h] [rbp-88h] BYREF
  int v40; // [rsp+54h] [rbp-85h]
  int v41; // [rsp+58h] [rbp-81h]
  unsigned int v42; // [rsp+5Ch] [rbp-7Dh]
  NTSTATUS v43; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-69h] BYREF
  __int64 v46; // [rsp+80h] [rbp-59h]
  __int64 v47; // [rsp+88h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-49h] BYREF
  void *v49; // [rsp+A0h] [rbp-39h]
  int v50; // [rsp+A8h] [rbp-31h]
  int v51; // [rsp+ACh] [rbp-2Dh]
  NTSTATUS *v52; // [rsp+B0h] [rbp-29h]
  __int64 v53; // [rsp+B8h] [rbp-21h]
  const unsigned __int16 *v54; // [rsp+C0h] [rbp-19h]
  int v55; // [rsp+C8h] [rbp-11h]
  int v56; // [rsp+CCh] [rbp-Dh]
  __int64 *v57; // [rsp+D0h] [rbp-9h]
  __int64 v58; // [rsp+D8h] [rbp-1h]
  char *v59; // [rsp+E0h] [rbp+7h]
  __int64 v60; // [rsp+E8h] [rbp+Fh]

  v2 = 0;
  v3 = HampLockTrackerId;
  v6 = (*((_QWORD *)a2 + 83) >> 61) & 3LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *Value |= 0x20uLL;
    ++Value[6];
    v2 = 0;
  }
  v8 = (char *)a1 + 584;
  RtlAcquireSRWLockShared((char *)a1 + 584);
  if ( ((*((_DWORD *)a1 + 154) >> 21) & 3u) >= (unsigned int)v6 )
    goto LABEL_76;
  if ( HampLockTrackerId != -1 )
  {
    v9 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v10 = *v9;
    if ( (*v9 & 0x20) == 0 )
      __int2c();
    v11 = v9[6]-- == 1;
    if ( v11 )
      *v9 = v10 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 584);
  v41 = 0;
  if ( HampLockTrackerId != -1 )
  {
    v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v13 = *v12;
    if ( (*v12 & 2) == 0 )
      __int2c();
    v11 = v12[2]-- == 1;
    if ( v11 )
      *v12 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v14 = 64LL;
  v15 = 64LL;
  if ( a2 )
    v15 = (__int64)a2;
  *(_DWORD *)(v15 + 8) = 0;
  RtlReleaseSRWLockExclusive(v15);
  RmpReleaseGlobalLock();
  v16 = HampLockTrackerId;
  v40 = 1;
  if ( HampLockTrackerId != -1 )
  {
    v17 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v16) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v17 |= 0x20uLL;
    ++v17[6];
    v2 = 0;
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 584);
  *((_DWORD *)a1 + 148) = GetCurrentThreadId();
  v18 = *((_DWORD *)a1 + 154);
  if ( ((v18 >> 21) & 3) < (unsigned int)v6 )
  {
    while ( (v18 & 0x100000) != 0 )
    {
      HampAppTraceWaitForLicenseWorkerForHost(a2);
      HampAppWaitForFlagChange(a1);
      v18 = *((_DWORD *)a1 + 154);
      if ( ((v18 >> 21) & 3) >= (unsigned int)v6 )
        goto LABEL_63;
    }
    *((_DWORD *)a1 + 154) = v18 | 0x100000;
    if ( HampLockTrackerId != -1 )
    {
      v19 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v20 = *v19;
      if ( (*v19 & 0x20) == 0 )
        __int2c();
      v11 = v19[6]-- == 1;
      if ( v11 )
        *v19 = v20 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    *((_DWORD *)a1 + 148) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 584);
    v21 = *(struct _HAM_USER **)(*((_QWORD *)a1 + 11) + 88LL);
    ContextToken = HampUserTryGetContextToken(v21, &v44);
    v23 = 32LL;
    if ( ContextToken >= 0 )
    {
      while ( 1 )
      {
        ContextToken = HampSystemBeginStoreLicenseAcquisition((__int64)a1, v23, v6, v44);
        if ( ContextToken >= 0 )
          break;
        if ( v2 )
          goto LABEL_42;
        ContextToken = HampUserTryRefreshContextToken(v21, &v44);
        if ( ContextToken < 0 )
          goto LABEL_42;
        v2 = 1;
      }
      if ( v2 && (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
      {
        v40 = v2;
        v24 = 32LL;
        v42 = ContextToken;
        if ( a2 )
          v24 = (__int64)a2 - 32;
        v46 = *(_QWORD *)v24;
        *(_QWORD *)&EventDescriptor.Id = (char *)a2 + 24;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
          v24,
          &unk_1800C2935);
      }
LABEL_42:
      v23 = 32LL;
    }
    if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
    {
      v39 = v6;
      v43 = ContextToken;
      if ( a2 )
        v23 = (__int64)a2 - 32;
      v58 = 8LL;
      v25 = (const unsigned __int16 *)((char *)a2 + 24);
      v60 = 1LL;
      v47 = *(_QWORD *)v23;
      v59 = &v39;
      v57 = &v47;
      if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
      {
        v25 = &word_1800B66B4;
        v27 = 2;
      }
      else
      {
        v26 = -1LL;
        do
          v11 = v25[++v26] == 0;
        while ( !v11 );
        v27 = 2 * v26 + 2;
      }
      v54 = v25;
      v52 = &v43;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800DB220;
      v55 = v27;
      v56 = 0;
      v53 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 8LL;
      UserData.Size = *(unsigned __int16 *)off_1800DB220;
      v49 = &unk_1800C29A1;
      UserData.Reserved = 2;
      v50 = 62;
      v51 = 1;
      v42 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
    if ( ContextToken < 0 )
      HampAppRequestLicensingActivityStops(a1, ContextToken);
    v40 = 1;
    v28 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v29 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v28) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *v29 |= 0x20uLL;
      ++v29[6];
    }
    RtlAcquireSRWLockExclusive((char *)a1 + 584);
    *((_DWORD *)a1 + 148) = GetCurrentThreadId();
    if ( ContextToken >= 0 )
    {
      *((_DWORD *)a1 + 154) &= 0xFF9FFFFF;
      *((_DWORD *)a1 + 154) |= (_DWORD)v6 << 21;
    }
    HampAppExitLicenseWorker(a1);
    v14 = 64LL;
  }
LABEL_63:
  v30 = v41;
  if ( HampLockTrackerId != -1 )
  {
    v31 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v32 = *v31;
    if ( (*v31 & 0x20) == 0 )
      __int2c();
    v11 = v31[6]-- == 1;
    if ( v11 )
      *v31 = v32 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *((_DWORD *)a1 + 148) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 584);
  v33 = v40;
  v2 = v40;
  if ( v30 )
  {
LABEL_76:
    if ( HampLockTrackerId != -1 )
    {
      v37 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v38 = *v37;
      if ( (*v37 & 0x20) == 0 )
        __int2c();
      v11 = v37[6]-- == 1;
      if ( v11 )
        *v37 = v38 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    RtlReleaseSRWLockShared(v8);
    return v2;
  }
  else
  {
    RmpAcquireGlobalLock();
    v34 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v35 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v34) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v35 |= 2uLL;
      ++v35[2];
    }
    if ( a2 )
      v14 = (__int64)a2;
    RtlAcquireSRWLockExclusive(v14);
    *(_DWORD *)(v14 + 8) = GetCurrentThreadId();
    return v33;
  }
}
