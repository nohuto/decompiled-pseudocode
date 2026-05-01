/*
 * XREFs of ?HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015500
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180015710 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18001576C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

void __fastcall HampAppInterruptiveUIChangeWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v4; // esi
  _QWORD *Value; // rdi
  unsigned int v6; // ecx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  char **v11; // [rsp+20h] [rbp-E8h]
  char *v12; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  while ( 1 )
  {
    v4 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *Value |= 0x20uLL;
      ++Value[6];
    }
    RtlAcquireSRWLockExclusive(a2 + 146);
    a2[148] = GetCurrentThreadId();
    v6 = a2[154];
    v7 = (v6 >> 18) & 1;
    if ( ((v6 >> 17) & 1) == v7 )
      break;
    a2[154] = v6 & 0xFFFDFFFF | (v7 << 17);
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a2);
    if ( (unsigned int)dword_1800DB218 > 4
      && (qword_1800DB228 & 0x40) != 0
      && (qword_1800DB230 & 0x40) == qword_1800DB230 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 88LL) + 160LL);
      v12 = (char *)(a2 + 24);
      v11 = &v12;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v8,
        &unk_1800C2A9C);
    }
    v9 = *((_QWORD *)a2 + 11);
    v10 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(v10 - 1968) & 1) != 0 )
    {
      LODWORD(v11) = v7;
      RmRpsNotifyApplicationInterruptiveUIChange(
        *(_QWORD *)(v10 - 1976),
        a2 + 24,
        v9 + 228,
        *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v9 + 88) + 160LL) + 88LL),
        v11);
    }
  }
  a2[154] = v6 & 0xFFF7FFFF;
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a2);
  CemRcObjectDereference(a2);
  CempLockTrackerClearForThread(HampLockTrackerId);
}
