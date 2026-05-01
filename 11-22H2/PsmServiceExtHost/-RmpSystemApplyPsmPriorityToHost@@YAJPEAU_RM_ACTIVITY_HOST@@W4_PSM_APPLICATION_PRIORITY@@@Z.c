/*
 * XREFs of ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000E8B8
 * Callers:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000E724 (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 * Callees:
 *     ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000EA18 (-SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATIO.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemApplyPsmPriorityToHost(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v9[2]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v10; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  void *v13; // [rsp+70h] [rbp-9h]
  int v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+7Ch] [rbp+3h]
  _DWORD *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  __int64 *v18; // [rsp+90h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+1Fh]
  int *v20; // [rsp+A0h] [rbp+27h]
  __int64 v21; // [rsp+A8h] [rbp+2Fh]

  v2 = *(_QWORD *)(a1 + 48);
  v8 = a2;
  v5 = ModernResourceEnforcer::SetApplicationPriority(
         *(ModernResourceEnforcer **)(v2 + 40),
         (struct _RM_ACTIVITY_HOST *)a1,
         (enum _PSM_APPLICATION_PRIORITY *)&v8);
  v6 = v5;
  if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 1) != 0 && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v21 = 4LL;
    v20 = &v8;
    v18 = &v10;
    v16 = v9;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DB1E8;
    v17 = 4LL;
    EventDescriptor.Keyword = 1LL;
    v8 = a2;
    v9[0] = v5;
    v19 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
    v13 = &unk_1800C66B1;
    v15 = 1;
    UserData.Reserved = 2;
    v14 = 80;
    v9[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return v6;
}
