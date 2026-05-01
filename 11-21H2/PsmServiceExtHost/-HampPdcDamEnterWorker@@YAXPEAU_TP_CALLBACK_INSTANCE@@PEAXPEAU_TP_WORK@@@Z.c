/*
 * XREFs of ?HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007EC30
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007AA0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007B28 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002AAC0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002D444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180046464 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800515BE (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072B08 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072E24 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180077D24 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18007CFD0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTempl.c)
 *     ?HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007FC98 (-HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x180092FB0 (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 */

void __fastcall HampPdcDamEnterWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  __int64 v4; // r13
  int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // r15d
  int v9; // edx
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rsi
  struct _HAM_ACTIVITY *i; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _HAM_ACTIVITY *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  struct _HOST_ACTIVITY_MANAGER *v18; // rcx
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v25[144]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+108h] [rbp+0h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800C1AE1,
      0LL,
      0LL,
      2u,
      &v26);
  v4 = *(_QWORD *)a2;
  v5 = 0;
  HampPdcSetCurrentThreadWorker((struct _HAM_PDC_CONTEXT *)a2);
  while ( 1 )
  {
    HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v6);
    if ( !*((_DWORD *)a2 + 28) )
      break;
    v24 = *((_QWORD *)a2 + 15);
    RtlQueryUnbiasedInterruptTime(&v22);
    v5 = v22 / 0x2710 - *((_DWORD *)a2 + 28);
    HampManagerReleaseLockShared(
      *(struct _HOST_ACTIVITY_MANAGER **)a2,
      (v22 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64);
    v8 = 0;
    NextHost = HampHostEnumerateHostsInNode((struct _HAM_RC_TREE_NODE *)(v4 + 128), 0, 0LL);
    if ( !NextHost )
      goto LABEL_20;
    do
    {
      HampHostAcquireLockExclusiveEx(NextHost, 0);
      for ( i = HampHostGetFirstActivity(NextHost); ; i = HampHostGetNextActivity(v15) )
      {
        v15 = i;
        if ( !i )
          break;
        if ( (*((_BYTE *)i + 552) & 0x48) == 0
          && (unsigned __int8)(*((_BYTE *)i + 562) - 2) <= 1u
          && (*((_DWORD *)i + 30) & 0x200) != 0 )
        {
          v8 = 1;
          HampActRequestStopEx((__int64)i, 3u, 4, 0, 6912, 2u, 0LL);
          if ( (unsigned int)dword_1800DC218 > 4 )
          {
            if ( tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
            {
              v23 = *((_QWORD *)NextHost - 4);
              v19 = *((_DWORD *)NextHost + 140);
              v21 = (__int64)NextHost + 24;
              v20 = 1;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                v12,
                byte_1800C1B03,
                v13,
                v14,
                (const unsigned __int16 **)&v21,
                (__int64)&v19,
                (__int64)&v23,
                (__int64)&v20);
            }
          }
        }
      }
      HampHostReleaseLockExclusiveEx(NextHost);
      NextHost = HampManagerGetNextHost(NextHost);
    }
    while ( NextHost );
    if ( !v8 )
      goto LABEL_20;
    RtlWaitOnAddress(a2 + 120, &v24, 8LL);
  }
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v7);
LABEL_20:
  HampSystemNotificationClientAcknowledge(*((void **)a2 + 2), v9);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 0x400000000008LL) )
  {
    v21 = 0x1000000LL;
    v19 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (int)&dword_1800DC218,
      (int)&unk_1800C1B72,
      v16,
      v17,
      (__int64)&v19,
      (__int64)&v21);
  }
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  v18 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 24) = 0;
  HampManagerReleaseLockExclusive(v18);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DC218,
        (unsigned __int8 *)dword_1800C195B,
        0LL,
        0LL,
        2u,
        &v26);
  }
}
