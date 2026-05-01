/*
 * XREFs of ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x1800042FC
 * Callers:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180004164 (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 * Callees:
 *     ?RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800044C8 (-RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpSystemApplyPsmPriorityToHost(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64, _QWORD, _QWORD, unsigned int, EVENT_DESCRIPTOR *); // rbx
  unsigned int ManagerType; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v10; // [rsp+48h] [rbp-49h] BYREF
  _DWORD v11[3]; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 v12; // [rsp+58h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-31h] BYREF
  __int64 v14; // [rsp+70h] [rbp-21h]
  int v15; // [rsp+78h] [rbp-19h]
  int v16; // [rsp+7Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-9h] BYREF
  void *v18; // [rsp+98h] [rbp+7h]
  int v19; // [rsp+A0h] [rbp+Fh]
  int v20; // [rsp+A4h] [rbp+13h]
  _DWORD *v21; // [rsp+A8h] [rbp+17h]
  int v22; // [rsp+B0h] [rbp+1Fh]
  int v23; // [rsp+B4h] [rbp+23h]
  __int64 *v24; // [rsp+B8h] [rbp+27h]
  int v25; // [rsp+C0h] [rbp+2Fh]
  int v26; // [rsp+C4h] [rbp+33h]
  int *v27; // [rsp+C8h] [rbp+37h]
  int v28; // [rsp+D0h] [rbp+3Fh]
  int v29; // [rsp+D4h] [rbp+43h]

  v2 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&EventDescriptor.Id = 0LL;
  EventDescriptor.Keyword = 0LL;
  v14 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, unsigned int, EVENT_DESCRIPTOR *))(*(_QWORD *)(v2 + 40) + 8LL);
  v16 = 16;
  v15 = a2;
  ManagerType = RmpActivityHostGetManagerType((struct _RM_ACTIVITY_HOST *)a1);
  v7 = v5(
         a1 + 552,
         *(unsigned int *)(a1 + 620),
         a1 + 88,
         *(unsigned int *)(a1 + 624),
         *(_QWORD *)(a1 + 32),
         ManagerType,
         &EventDescriptor);
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v12 = v8;
    v27 = &v10;
    v24 = &v12;
    v21 = v11;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    v28 = 4;
    v22 = 4;
    EventDescriptor.Keyword = 1LL;
    v10 = a2;
    v11[0] = v7;
    v25 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v18 = &unk_1800C5EFB;
    v20 = 1;
    UserData.Reserved = 2;
    v19 = 80;
    v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return v7;
}
