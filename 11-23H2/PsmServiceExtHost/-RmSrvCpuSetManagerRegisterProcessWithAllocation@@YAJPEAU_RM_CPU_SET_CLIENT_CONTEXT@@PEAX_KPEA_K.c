/*
 * XREFs of ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x180083710
 * Callers:
 *     ?RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z @ 0x18006C710 (-RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18003E4F8 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@334@Z @ 0x180071278 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x180086540 (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180087540 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x1800878A0 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmSrvCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_MANAGER **a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // rdi
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v8; // r14
  unsigned __int64 v9; // r15
  DWORD ProcessId; // ebx
  int v11; // ebx
  struct _RM_CPU_SET_ALLOCATION *Allocation; // rax
  struct _RM_OBJECT_HEADER *v13; // rdi
  DWORD v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v18; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  DWORD v20; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v21; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v24[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+110h] [rbp+10h] BYREF

  v19 = a3;
  v7 = a3;
  RmpUtilCheckStartLockTracking(&v21, (struct _CEM_LOCK_TRACKER *)v24);
  v8 = 0LL;
  v9 = -1LL;
  v18 = 0LL;
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C3790,
      0LL,
      0LL,
      2u,
      &v25);
  ProcessId = GetProcessId(a2);
  if ( ProcessId != GetCurrentProcessId() )
  {
    RmpAcquireGlobalLock();
    Allocation = RmpCpuSetManagerFindAllocation(*a1, v7);
    v13 = Allocation;
    if ( Allocation && *((struct _RM_CPU_SET_MANAGER ***)Allocation + 7) == a1 && *((_DWORD *)Allocation + 90) )
    {
      v11 = RmpCpuSetManagerRegisterProcessWithAllocation((struct _RM_CPU_SET_CLIENT_CONTEXT *)a1, a2, Allocation, &v18);
      if ( v11 >= 0 )
      {
        v11 = 0;
        v9 = *((_QWORD *)v18 + 4);
        *a4 = v9;
LABEL_16:
        RmpObjectRelease(v13);
LABEL_17:
        v7 = v19;
        goto LABEL_18;
      }
      v8 = v18;
    }
    else
    {
      v11 = -1073741583;
    }
    if ( v8 )
      RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, v8, 1u);
    if ( !v13 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v11 = -1073741584;
LABEL_18:
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    v22 = v7;
    v14 = GetProcessId(a2);
    v23 = v9;
    v20 = v14;
    LODWORD(v19) = *((_DWORD *)a1 + 14);
    LODWORD(v18) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800DB1E0,
      byte_1800C37C4,
      v15,
      v16,
      (__int64)&v18,
      (__int64)&v23,
      (__int64)&v19,
      (__int64)&v20,
      (__int64)&v22);
  }
  if ( v21 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v11;
}
