/*
 * XREFs of ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180018710
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800188E0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180019AE0 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18008FAA4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall RmpEnforcementUpdateSwapState(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  int v6; // eax
  int v7; // ebx
  bool v9; // [rsp+30h] [rbp-39h]
  _DWORD v10[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v11; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  void *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  __int64 *v17; // [rsp+80h] [rbp+17h]
  __int64 v18; // [rsp+88h] [rbp+1Fh]
  _DWORD *v19; // [rsp+90h] [rbp+27h]
  __int64 v20; // [rsp+98h] [rbp+2Fh]

  v2 = *((_QWORD *)a1 + 6);
  v3 = 0;
  if ( (*(_DWORD *)(v2 + 508) & 0x100) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v9 = a2 != 0;
    v6 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, bool))(*(_QWORD *)(v2 + 40) + 56LL))(
           (char *)a1 + 552,
           *((unsigned int *)a1 + 155),
           (char *)a1 + 88,
           *((unsigned int *)a1 + 156),
           *((_QWORD *)a1 + 4),
           *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
           v9);
    v7 = v6;
    if ( *((_DWORD *)a1 + 156) != 8 && v6 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    if ( (unsigned int)dword_1800DB218 > 4
      && (qword_1800DB228 & 0x40) != 0
      && (qword_1800DB230 & 0x40) == qword_1800DB230 )
    {
      v11 = *((_QWORD *)a1 + 4);
      v10[0] = a2;
      v19 = v10;
      v20 = 4LL;
      v17 = &v11;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800DB220;
      v18 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 64LL;
      UserData.Size = *(unsigned __int16 *)off_1800DB220;
      v14 = &unk_1800C6C25;
      UserData.Reserved = 2;
      v15 = 33;
      v16 = 1;
      v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v3;
}
