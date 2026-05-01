/*
 * XREFs of ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180038634
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003841C (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004FF60 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RmpSystemDereferenceHostWithPsm(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  struct _RM_ACTIVITY_HOST *v5; // [rsp+38h] [rbp-21h] BYREF
  __int64 v6; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+7h] BYREF
  void *v9; // [rsp+70h] [rbp+17h]
  int v10; // [rsp+78h] [rbp+1Fh]
  int v11; // [rsp+7Ch] [rbp+23h]
  __int64 *v12; // [rsp+80h] [rbp+27h]
  int v13; // [rsp+88h] [rbp+2Fh]
  int v14; // [rsp+8Ch] [rbp+33h]
  struct _RM_ACTIVITY_HOST **v15; // [rsp+90h] [rbp+37h]
  int v16; // [rsp+98h] [rbp+3Fh]
  int v17; // [rsp+9Ch] [rbp+43h]

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL);
  if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 1) != 0 && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
  {
    v4 = *((_QWORD *)a1 + 4);
    v17 = 0;
    v14 = 0;
    v6 = v4;
    v15 = &v5;
    v12 = &v6;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DB1E8;
    v5 = a1;
    v16 = 8;
    v13 = 8;
    EventDescriptor.Keyword = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
    v9 = &unk_1800C659E;
    v11 = 1;
    UserData.Reserved = 2;
    v10 = 39;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  (*(void (__fastcall **)(void *))(v3 + 128))(a2);
}
