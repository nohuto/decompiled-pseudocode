/*
 * XREFs of ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18008D9E0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180029950 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032530 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180084DB8 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180085038 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18008D940 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall RmpOfferLazyDecommitWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, _QWORD *a2, struct _TP_WORK *a3)
{
  unsigned __int64 v4; // r14
  int v5; // r15d
  _QWORD **v6; // r12
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  bool v16; // cc
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[64]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-38h]
  __int64 v26; // [rsp+D0h] [rbp-30h]
  _BYTE v27[144]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+170h] [rbp+70h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v27);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 17LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C64A0,
      0LL,
      0LL,
      2u,
      &v28);
  RtlQueryUnbiasedInterruptTime(&v19);
  v4 = 0LL;
  v5 = 0;
  RmpAcquireGlobalLock();
  v6 = (_QWORD **)(a2 + 1);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    v8 = *v7;
    v9 = v7 - 162;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7) )
      __fastfail(3u);
    *v10 = v8;
    *(_QWORD *)(v8 + 8) = v10;
    *(_OWORD *)v7 = 0LL;
    if ( *((int *)v9 + 6) >= 0 && (*(_BYTE *)(v9[6] + 3528LL) & 1) == 0 )
    {
      if ( (*((_BYTE *)v9 + 1268) & 0x10) != 0 )
        *((_DWORD *)v7 - 8) |= 2u;
      v26 = 0LL;
      v25 = 0LL;
      v24 = -1LL;
      LODWORD(v26) = (*((_DWORD *)v9 + 317) & 0x10 | 0x20u) >> 4;
      RmpReleaseGlobalLock();
      if ( (int)RmpActivityHostDecommitOfferedMemory(
                  (struct _RM_ACTIVITY_HOST *)(v7 - 162),
                  (struct _RM_OFFERED_DECOMMIT_INFO *)&v24) >= 0 )
      {
        v4 += v25;
        ++v5;
        RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v9[7], (struct _RM_SYSTEM_MEMORY_METRICS *)v22);
        *(v7 - 6) = v23;
      }
      RmpAcquireGlobalLock();
      v11 = *((_DWORD *)v7 - 8);
      if ( (v11 & 2) != 0 )
      {
        *((_DWORD *)v7 - 8) = v11 & 0xFFFFFFFD;
        RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)(v7 - 162));
      }
    }
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)(v7 - 162));
  }
  RtlQueryUnbiasedInterruptTime(&v18);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 25LL) )
  {
    v20 = v18 - v19;
    v17 = v5;
    v21 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800DB1E0,
      byte_1800C64F5,
      v12,
      v13,
      (__int64)&v21,
      (__int64)&v17,
      (__int64)&v20);
  }
  a2[7] += v4;
  v14 = v4;
  v15 = v18;
  if ( v4 >= a2[8] )
    v14 = a2[8];
  v16 = v4 <= a2[9];
  a2[8] = v14;
  if ( v16 )
    v4 = a2[9];
  a2[10] += v15 - v19;
  *((_DWORD *)a2 + 22) += v5;
  ++*((_DWORD *)a2 + 23);
  *((_DWORD *)a2 + 6) &= ~1u;
  a2[9] = v4;
  a2[4] = v15;
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
}
