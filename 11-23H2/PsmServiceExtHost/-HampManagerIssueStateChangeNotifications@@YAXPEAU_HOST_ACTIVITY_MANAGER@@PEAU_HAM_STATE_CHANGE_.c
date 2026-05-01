/*
 * XREFs of ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@K@Z @ 0x180019670
 * Callers:
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180019944 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1800017D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x180019818 (RmpWnfPublishMessageToClientStateName.c)
 *     ?HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DAB0 (-HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientGetFirst@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU_CEM_RC_TABLE@@@Z @ 0x18004E0A8 (-HampClientGetFirst@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU_CEM_RC_TABLE@@@Z.c)
 *     ?HampClientGetNext@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU1@@Z @ 0x18004E0D0 (-HampClientGetNext@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU1@@Z.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E100 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E350 (-HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampManagerIssueStateChangeNotifications(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *a2,
        char a3)
{
  struct _HAM_CLIENT_CONTEXT *i; // rbx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int Pid; // [rsp+50h] [rbp-28h] BYREF
  const unsigned __int16 *v15; // [rsp+58h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF
  char v17; // [rsp+80h] [rbp+8h] BYREF
  int v18; // [rsp+98h] [rbp+20h] BYREF

  for ( i = HampClientGetFirst((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 304)); i; i = HampClientGetNext(i) )
  {
    v6 = *((_DWORD *)a2 + 135);
    if ( v6 )
    {
      v7 = *((_DWORD *)i + 42);
      if ( v7 )
      {
        if ( v6 != v7 )
          continue;
      }
    }
    v8 = *(_DWORD *)a2;
    if ( !*(_DWORD *)a2 )
    {
      v9 = *((_DWORD *)i + 43);
      v10 = (v9 & 1) == 0;
      goto LABEL_9;
    }
    if ( v8 == 1 )
    {
      v9 = *((_DWORD *)i + 43);
      v10 = (v9 & 2) == 0;
LABEL_9:
      if ( !v10
        && ((a3 & 1) != 0 && (v9 & 4) != 0 || (a3 & 2) != 0 && (v9 & 8) != 0 || (a3 & 4) != 0 && (v9 & 0x10) != 0) )
      {
        if ( (unsigned int)dword_1800DB218 > 5 )
        {
          v18 = *((_DWORD *)a2 + 1);
          v15 = (const unsigned __int16 *)((char *)a2 + 8);
          v17 = v8;
          Pid = HampClientGetPid(i);
          v16 = *((_QWORD *)i + 19);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
            v11,
            (int)&unk_1800C1C0A,
            v12,
            v13,
            (__int64)&v16,
            (__int64)&Pid,
            &v15,
            (__int64)&v17,
            (__int64)&v18);
        }
        if ( (*((_BYTE *)i + 144) & 1) != 0 )
        {
          (*((void (__fastcall **)(struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *, _QWORD))i + 16))(
            a2,
            *((_QWORD *)i + 17));
        }
        else
        {
          HampClientAcquireLockShared(i);
          if ( *((_DWORD *)i + 30) || *((_DWORD *)i + 31) )
            RmpWnfPublishMessageToClientStateName((char *)i + 120, a2, 544LL, *((_QWORD *)i + 16));
          HampClientReleaseLockShared(i);
        }
      }
    }
  }
}
