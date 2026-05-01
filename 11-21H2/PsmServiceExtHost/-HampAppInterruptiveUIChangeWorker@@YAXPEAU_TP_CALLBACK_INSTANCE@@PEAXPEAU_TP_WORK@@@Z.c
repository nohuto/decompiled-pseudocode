/*
 * XREFs of ?HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180007470
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180005A48 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180007674 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall HampAppInterruptiveUIChangeWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v4; // esi
  _QWORD *Value; // rdi
  unsigned int v6; // ecx
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r10
  _BYTE v16[4]; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  const unsigned __int16 *v19; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v20[144]; // [rsp+60h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
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
    RtlAcquireSRWLockExclusive(a2 + 584);
    *((_DWORD *)a2 + 148) = GetCurrentThreadId();
    v6 = *((_DWORD *)a2 + 154);
    v7 = (v6 >> 18) & 1;
    if ( ((v6 >> 17) & 1) == v7 )
      break;
    *((_DWORD *)a2 + 154) = v6 & 0xFFFDFFFF | (v7 << 17);
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a2);
    if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, v8, v9) )
    {
      v12 = *((_QWORD *)a2 + 11);
      v16[0] = v7;
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 88) + 160LL);
      v17 = *(_DWORD *)(v13 + 88);
      v18 = v12 + 228;
      v19 = (const unsigned __int16 *)(a2 + 96);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v13,
        (int)&unk_1800C15A9,
        v10,
        v11,
        &v19,
        &v18,
        (__int64)&v17,
        (__int64)v16);
    }
    v14 = *((_QWORD *)a2 + 11);
    v15 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(v15 - 1744) & 1) != 0 )
      RmRpsNotifyApplicationInterruptiveUIChange(
        *(_QWORD *)(v15 - 1752),
        a2 + 96,
        v14 + 228,
        *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v14 + 88) + 160LL) + 88LL),
        v7);
  }
  *((_DWORD *)a2 + 154) = v6 & 0xFFF7FFFF;
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a2);
  CemRcObjectDereference(a2);
  CempLockTrackerClearForThread(HampLockTrackerId);
}
