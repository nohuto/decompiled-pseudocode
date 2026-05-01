/*
 * XREFs of ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x180085484
 * Callers:
 *     ?RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z @ 0x18006D160 (-RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18003C1EC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@334@Z @ 0x180085090 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x180088C14 (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180089C00 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x180089F60 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmSrvCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_MANAGER **a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // rdi
  PVOID v8; // r15
  unsigned __int64 v9; // rsi
  DWORD ProcessId; // ebx
  int v11; // ebx
  struct _RM_CPU_SET_ALLOCATION *Allocation; // rax
  char *v13; // rdi
  DWORD v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  DWORD v21; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+110h] [rbp+10h] BYREF

  v20 = a3;
  v7 = a3;
  RmpUtilCheckStartLockTracking(&v22, (struct _CEM_LOCK_TRACKER *)v25);
  v8 = 0LL;
  v9 = -1LL;
  P = 0LL;
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800C272F,
      0LL,
      0LL,
      2u,
      &v26);
  ProcessId = GetProcessId(a2);
  if ( ProcessId != GetCurrentProcessId() )
  {
    RmpAcquireGlobalLock();
    Allocation = RmpCpuSetManagerFindAllocation(*a1, v7);
    v13 = (char *)Allocation;
    if ( Allocation && *((struct _RM_CPU_SET_MANAGER ***)Allocation + 7) == a1 && *((_DWORD *)Allocation + 90) )
    {
      v11 = RmpCpuSetManagerRegisterProcessWithAllocation(
              (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1,
              a2,
              Allocation,
              (struct _RM_CPU_SET_PROCESS_REGISTRATION **)&P);
      if ( v11 >= 0 )
      {
        v11 = 0;
        v9 = *((_QWORD *)P + 4);
        *a4 = v9;
LABEL_16:
        RmpObjectRelease(v13);
LABEL_17:
        v7 = v20;
        goto LABEL_18;
      }
      v8 = P;
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
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 9LL) )
  {
    v23 = v7;
    v14 = GetProcessId(a2);
    v24 = v9;
    v21 = v14;
    LODWORD(v20) = *((_DWORD *)a1 + 14);
    LODWORD(P) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v15,
      byte_1800C2763,
      v16,
      v17,
      (__int64)&P,
      (__int64)&v24,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v23);
  }
  if ( v22 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v11;
}
