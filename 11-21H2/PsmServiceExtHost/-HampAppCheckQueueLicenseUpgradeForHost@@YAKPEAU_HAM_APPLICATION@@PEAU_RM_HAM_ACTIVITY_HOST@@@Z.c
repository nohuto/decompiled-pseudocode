/*
 * XREFs of ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013510
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800121C0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180039DA0 (-HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x18003C404 (-HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_LICENSE_TYPE@@_K@Z @ 0x18003CF28 (-HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_.c)
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180045F38 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18007AED4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlg_ea_18007AED4.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007B184 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007B2C0 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18007B324 (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

__int64 __fastcall HampAppCheckQueueLicenseUpgradeForHost(
        struct _HAM_APPLICATION *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // rbx
  DWORD v5; // esi
  _QWORD *Value; // rdi
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  bool v10; // zf
  __int64 *v12; // rax
  __int64 v13; // rcx
  DWORD v14; // r12d
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  unsigned int v17; // ecx
  struct _HAM_USER *v18; // r12
  __int64 v19; // rdx
  NTSTATUS ContextToken; // r13d
  int i; // esi
  __int64 v22; // r8
  __int64 v23; // r9
  const unsigned __int16 *v24; // rcx
  __int64 v25; // rax
  int v26; // edx
  DWORD v27; // r12d
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+5Ch] [rbp-ACh]
  int v33; // [rsp+60h] [rbp-A8h]
  NTSTATUS v34; // [rsp+64h] [rbp-A4h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-98h] BYREF
  __int64 v37; // [rsp+80h] [rbp-88h]
  __int64 v38; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  void *v40; // [rsp+A8h] [rbp-60h]
  int v41; // [rsp+B0h] [rbp-58h]
  int v42; // [rsp+B4h] [rbp-54h]
  NTSTATUS *v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  const unsigned __int16 *v45; // [rsp+C8h] [rbp-40h]
  int v46; // [rsp+D0h] [rbp-38h]
  int v47; // [rsp+D4h] [rbp-34h]
  __int64 *v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  char *v50; // [rsp+E8h] [rbp-20h]
  __int64 v51; // [rsp+F0h] [rbp-18h]

  if ( (*((_BYTE *)a2 + 788) & 1) == 0 )
    return 0LL;
  v4 = (*((_QWORD *)a2 + 83) >> 61) & 3LL;
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockShared((char *)a1 + 584);
  if ( ((*((_DWORD *)a1 + 154) >> 21) & 3u) < (unsigned int)v4 )
  {
    CempLockTrackerMarkReleased(HampLockTrackerId, v7, 5u);
    RtlReleaseSRWLockShared((char *)a1 + 584);
    if ( HampLockTrackerId != -1 )
    {
      v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v13 = *v12;
      if ( (*v12 & 2) == 0 )
        __int2c();
      v10 = v12[2]-- == 1;
      if ( v10 )
        *v12 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)a2 + 2) = 0;
    RtlReleaseSRWLockExclusive(a2);
    RmpReleaseGlobalLock();
    v14 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v15 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *v15 |= 0x20uLL;
      ++v15[6];
    }
    RtlAcquireSRWLockExclusive((char *)a1 + 584);
    *((_DWORD *)a1 + 148) = GetCurrentThreadId();
    v17 = *((_DWORD *)a1 + 154);
    if ( ((v17 >> 21) & 3) >= (unsigned int)v4 )
      goto LABEL_45;
    while ( (v17 & 0x100000) != 0 )
    {
      HampAppTraceWaitForLicenseWorkerForHost(a2);
      HampAppWaitForFlagChange(a1);
      v17 = *((_DWORD *)a1 + 154);
      if ( ((v17 >> 21) & 3) >= (unsigned int)v4 )
        goto LABEL_45;
    }
    *((_DWORD *)a1 + 154) = v17 | 0x100000;
    CempLockTrackerMarkReleased(HampLockTrackerId, v16, 5u);
    *((_DWORD *)a1 + 148) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 584);
    v18 = *(struct _HAM_USER **)(*((_QWORD *)a1 + 11) + 88LL);
    ContextToken = HampUserTryGetContextToken(v18, &v35);
    if ( ContextToken >= 0 )
    {
      for ( i = 0; ; i = 1 )
      {
        ContextToken = HampSystemBeginStoreLicenseAcquisition(a1, v19, (unsigned int)v4, v35);
        if ( ContextToken >= 0 )
          break;
        if ( i )
          goto LABEL_28;
        ContextToken = HampUserTryRefreshContextToken(v18, &v35);
        if ( ContextToken < 0 )
          goto LABEL_28;
      }
      if ( i )
      {
        if ( (unsigned int)dword_1800DC218 <= 4 )
        {
LABEL_38:
          v27 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v28 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v27) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
              __int2c();
            *v28 |= 0x20uLL;
            ++v28[6];
          }
          RtlAcquireSRWLockExclusive((char *)a1 + 584);
          *((_DWORD *)a1 + 148) = GetCurrentThreadId();
          if ( ContextToken >= 0 )
          {
            *((_DWORD *)a1 + 154) &= 0xFF9FFFFF;
            *((_DWORD *)a1 + 154) |= (_DWORD)v4 << 21;
          }
          HampAppExitLicenseWorker(a1);
LABEL_45:
          CempLockTrackerMarkReleased(HampLockTrackerId, v16, 5u);
          *((_DWORD *)a1 + 148) = 0;
          RtlReleaseSRWLockExclusive((char *)a1 + 584);
          RmpAcquireGlobalLock();
          CempLockTrackerMarkAcquired(HampLockTrackerId, v29, 1u, 0);
          RtlAcquireSRWLockExclusive(a2);
          *((_DWORD *)a2 + 2) = GetCurrentThreadId();
          return 1LL;
        }
        if ( (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 8LL, v22, v23) )
        {
          v37 = *((_QWORD *)a2 - 4);
          *(_QWORD *)&EventDescriptor.Id = (char *)a2 + 24;
          v33 = i;
          v32 = ContextToken;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
            v30,
            &unk_1800C1382);
        }
      }
    }
LABEL_28:
    if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
    {
      v24 = (const unsigned __int16 *)((char *)a2 + 24);
      v38 = *((_QWORD *)a2 - 4);
      v50 = (char *)&v31 + 1;
      v48 = &v38;
      BYTE1(v31) = v4;
      v34 = ContextToken;
      v51 = 1LL;
      v49 = 8LL;
      if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
      {
        v24 = &word_1800B7A9C;
        v26 = 2;
      }
      else
      {
        v25 = -1LL;
        do
          v10 = v24[++v25] == 0;
        while ( !v10 );
        v26 = 2 * v25 + 2;
      }
      v45 = v24;
      v43 = &v34;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800DC220;
      v46 = v26;
      v47 = 0;
      v44 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 8LL;
      UserData.Size = *(unsigned __int16 *)off_1800DC220;
      v40 = &unk_1800C147E;
      UserData.Reserved = 2;
      v41 = 62;
      v42 = 1;
      v32 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
    if ( ContextToken < 0 )
      HampAppRequestLicensingActivityStops(a1, ContextToken);
    goto LABEL_38;
  }
  if ( HampLockTrackerId != -1 )
  {
    v8 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v9 = *v8;
    if ( (*v8 & 0x20) == 0 )
      __int2c();
    v10 = v8[6]-- == 1;
    if ( v10 )
      *v8 = v9 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 584);
  return 0LL;
}
