/*
 * XREFs of ?HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007DE90
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180007078 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017AE0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017B68 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C548 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C580 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ACD4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002D540 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041F00 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18005558E (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007BAC4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18007DA00 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTempl.c)
 *     ?HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007EF18 (-HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x18008EA4C (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 */

void __fastcall HampPdcDamEnterWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  __int64 v4; // r13
  int v5; // r14d
  __int64 v6; // rdx
  int v7; // r15d
  int v8; // edx
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rsi
  struct _HAM_ACTIVITY *i; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  struct _HAM_ACTIVITY *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  struct _HOST_ACTIVITY_MANAGER *v16; // rcx
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v23[144]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+108h] [rbp+0h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C25C3,
      0LL,
      0LL,
      2u,
      &v24);
  v4 = *(_QWORD *)a2;
  v5 = 0;
  HampPdcSetCurrentThreadWorker((struct _HAM_PDC_CONTEXT *)a2);
  while ( 1 )
  {
    HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
    if ( !*((_DWORD *)a2 + 28) )
      break;
    v22 = *((_QWORD *)a2 + 15);
    RtlQueryUnbiasedInterruptTime(&v20);
    v5 = v20 / 0x2710 - *((_DWORD *)a2 + 28);
    HampManagerReleaseLockShared(
      *(struct _HOST_ACTIVITY_MANAGER **)a2,
      (v20 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64);
    v7 = 0;
    NextHost = HampHostEnumerateHostsInNode((struct _HAM_RC_TREE_NODE *)(v4 + 352), 0, 0LL);
    if ( !NextHost )
      goto LABEL_20;
    do
    {
      HampHostAcquireLockExclusiveEx(NextHost, 0);
      for ( i = HampHostGetFirstActivity(NextHost); ; i = HampHostGetNextActivity(v13) )
      {
        v13 = i;
        if ( !i )
          break;
        if ( (*((_BYTE *)i + 552) & 0x48) == 0
          && (unsigned __int8)(*((_BYTE *)i + 562) - 2) <= 1u
          && (*((_DWORD *)i + 30) & 0x200) != 0 )
        {
          v7 = 1;
          HampActRequestStopEx((__int64)i, 3LL, 4, 0, 6912, 2u, 0LL);
          if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
          {
            v18 = 1;
            v21 = *((_QWORD *)NextHost - 4);
            v17 = *((_DWORD *)NextHost + 140);
            v19 = (__int64)NextHost + 24;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              (__int64)NextHost + 560,
              byte_1800C25E5,
              v11,
              v12,
              (const unsigned __int16 **)&v19,
              (__int64)&v17,
              (__int64)&v21,
              (__int64)&v18);
          }
        }
      }
      HampHostReleaseLockExclusiveEx(NextHost);
      NextHost = HampManagerGetNextHost(NextHost);
    }
    while ( NextHost );
    if ( !v7 )
      goto LABEL_20;
    RtlWaitOnAddress(a2 + 120, &v22, 8LL);
  }
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v6);
LABEL_20:
  HampSystemNotificationClientAcknowledge(*((void **)a2 + 2), v8);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 0x400000000008LL) )
  {
    v19 = 0x1000000LL;
    v17 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800DB218,
      byte_1800C2654,
      v14,
      v15,
      (__int64)&v17,
      (__int64)&v19);
  }
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  v16 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 24) = 0;
  HampManagerReleaseLockExclusive(v16);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C243D,
      0LL,
      0LL,
      2u,
      &v24);
}
