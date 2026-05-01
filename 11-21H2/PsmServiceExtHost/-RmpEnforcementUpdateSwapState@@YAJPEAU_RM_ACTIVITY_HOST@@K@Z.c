/*
 * XREFs of ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000A1D8
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800076D0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180094414 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall RmpEnforcementUpdateSwapState(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  __int64 v2; // rax
  char v4; // cl
  __int64 (__fastcall *v6)(char *, _QWORD, char *, _QWORD, _QWORD, int, bool); // r11
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  _DWORD v11[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v12; // [rsp+50h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  __int64 *v18; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+90h] [rbp+1Fh]
  _DWORD *v20; // [rsp+98h] [rbp+27h]
  __int64 v21; // [rsp+A0h] [rbp+2Fh]

  v2 = *((_QWORD *)a1 + 6);
  v4 = *((_BYTE *)a1 + 656);
  v6 = *(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, bool))(*(_QWORD *)(v2 + 40) + 56LL);
  if ( v4 )
  {
    v7 = 8;
    if ( v4 == 1 )
      v7 = 4;
  }
  else
  {
    v7 = 0;
  }
  v8 = v6(
         (char *)a1 + 552,
         *((unsigned int *)a1 + 155),
         (char *)a1 + 88,
         *((unsigned int *)a1 + 156),
         *((_QWORD *)a1 + 4),
         v7,
         a2 != 0);
  v9 = v8;
  if ( *((_DWORD *)a1 + 156) != 8 && v8 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    v12 = *((_QWORD *)a1 + 4);
    v11[0] = a2;
    v20 = v11;
    v21 = 4LL;
    v18 = &v12;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    v19 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v15 = &unk_1800C5FE8;
    UserData.Reserved = 2;
    v16 = 33;
    v17 = 1;
    v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  if ( v9 >= 0 )
    return 0;
  return (unsigned int)v9;
}
