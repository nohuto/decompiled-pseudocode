/*
 * XREFs of ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18001D450
 * Callers:
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BE00 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029970 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18003C22C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x18003C2D8 (RmpWnfPublishMessageToClientStateName.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18003DA98 (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RmpActivityHostUpdateCommitUseState(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 v8; // r12
  int v9; // r13d
  _QWORD *i; // r14
  __int64 v11; // rdx
  const unsigned __int16 *v12; // rcx
  __int64 v13; // rax
  int v15; // edx
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r8
  int v20; // r8d
  unsigned int v21; // r9d
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-BCh] BYREF
  int v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h]
  __int128 v29; // [rsp+78h] [rbp-90h]
  int v30; // [rsp+88h] [rbp-80h]
  int v31; // [rsp+8Ch] [rbp-7Ch]
  __int64 v32; // [rsp+90h] [rbp-78h]
  unsigned __int64 v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v36; // [rsp+B0h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  void *v38; // [rsp+C8h] [rbp-40h]
  int v39; // [rsp+D0h] [rbp-38h]
  int v40; // [rsp+D4h] [rbp-34h]
  const unsigned __int16 *v41; // [rsp+D8h] [rbp-30h]
  int v42; // [rsp+E0h] [rbp-28h]
  int v43; // [rsp+E4h] [rbp-24h]
  int *v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  int *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  __int64 *v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]
  __int64 *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  __int64 *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]

  v4 = *(unsigned int *)(a1 + 1392);
  v5 = a2;
  if ( *(_QWORD *)(a1 + 1376) > a2 )
    v5 = *(_QWORD *)(a1 + 1376);
  *(_QWORD *)(a1 + 1376) = v5;
  if ( (_DWORD)v4 != a3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 48) + 3232LL) + 32LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 3232LL),
      a1,
      v4,
      (unsigned int)a3);
    switch ( a3 )
    {
      case 1:
        v8 = 0LL;
        v9 = 2;
        break;
      case 2:
        v8 = *(_QWORD *)(a1 + 1344);
        v9 = 3;
        break;
      case 3:
        v8 = *(_QWORD *)(a1 + 1352);
        v9 = 4;
        break;
      case 4:
        v8 = *(_QWORD *)(a1 + 1360);
        v9 = 5;
        break;
      default:
LABEL_11:
        v11 = *(_QWORD *)(a1 + 1200);
        if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
        {
          v12 = (const unsigned __int16 *)(a1 + 88);
          v35 = *(_QWORD *)(a1 + 1360);
          v25 = *(_DWORD *)(a1 + 624);
          v52 = &v34;
          v50 = &v35;
          v48 = (__int64 *)&v36;
          v46 = &v22;
          v44 = &v25;
          v34 = v11;
          v36 = a2;
          LOBYTE(v22) = a3;
          v53 = 8LL;
          v51 = 8LL;
          v49 = 8LL;
          v47 = 1LL;
          v45 = 4LL;
          if ( a1 == -88 )
          {
            v12 = &word_1800B7A9C;
            v15 = 2;
          }
          else
          {
            v13 = -1LL;
            while ( v12[++v13] != 0 )
              ;
            v15 = 2 * v13 + 2;
          }
          *(_DWORD *)&EventDescriptor.Level = 4;
          UserData.Ptr = (ULONGLONG)off_1800DC1E8;
          v41 = v12;
          v42 = v15;
          v43 = 0;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          EventDescriptor.Keyword = 1LL;
          UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
          v38 = &unk_1800C3622;
          UserData.Reserved = 2;
          v39 = 122;
          v40 = 1;
          v23 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
        }
        if ( a3 >= 4 && *(int *)(a1 + 1392) < 4 )
          ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 48) + 3232LL));
        *(_DWORD *)(a1 + 1392) = a3;
        return;
    }
    for ( i = *(_QWORD **)(a1 + 1424); i != (_QWORD *)(a1 + 1424); i = (_QWORD *)*i )
    {
      v16 = i[6];
      v17 = *(_QWORD *)(a1 + 32);
      v31 = 0;
      v27 = 1LL;
      v29 = (unsigned __int64)*(i - 1);
      v31 = 0;
      v28 = v17;
      v30 = v9;
      v32 = v8;
      v33 = a2;
      v18 = RmpWnfPublishMessageToClientStateName(v16 + 24, &v27, 56LL, *(_QWORD *)(v16 + 32));
      if ( v18 < 0
        && (unsigned int)dword_1800DC1E0 > 4
        && (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v19, (unsigned int)v18) )
      {
        *(_QWORD *)&EventDescriptor.Id = v28;
        v24 = v30;
        v23 = v21;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (unsigned int)&dword_1800DC1E0,
          (unsigned int)&unk_1800C3D70,
          v20,
          v21,
          (__int64)&v23,
          (__int64)&v24,
          (__int64)&EventDescriptor);
      }
    }
    goto LABEL_11;
  }
}
