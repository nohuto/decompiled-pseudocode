/*
 * XREFs of ?RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x180083928
 * Callers:
 *     ?RmGameModeCpuSetManagerReleaseAllocation@@YAJPEAX0_K@Z @ 0x18006C740 (-RmGameModeCpuSetManagerReleaseAllocation@@YAJPEAX0_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180002C34 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18003E4F8 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x180086540 (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180087744 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerReleaseAllocation(struct _RM_CPU_SET_MANAGER **a1, unsigned __int64 a2)
{
  struct _RM_CPU_SET_ALLOCATION *Allocation; // rax
  struct _RM_OBJECT_HEADER *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v10; // [rsp+40h] [rbp-F8h] BYREF
  int v11; // [rsp+44h] [rbp-F4h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-F0h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v14[144]; // [rsp+60h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+F0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C3A7D,
      0LL,
      0LL,
      2u,
      &v15);
  RmpUtilCheckStartLockTracking(&v12, (struct _CEM_LOCK_TRACKER *)v14);
  RmpAcquireGlobalLock();
  Allocation = RmpCpuSetManagerFindAllocation(*a1, a2);
  v5 = Allocation;
  if ( Allocation && *((struct _RM_CPU_SET_MANAGER ***)Allocation + 7) == a1 )
  {
    RmpCpuSetManagerReleaseAllocation(Allocation);
    v6 = 0;
LABEL_8:
    RmpObjectRelease(v5);
    goto LABEL_9;
  }
  v6 = -1073741584;
  if ( Allocation )
    goto LABEL_8;
LABEL_9:
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    v11 = *((_DWORD *)a1 + 14);
    v13 = a2;
    v10 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (int)&dword_1800DB1E0,
      (int)&unk_1800C3A32,
      v7,
      v8,
      (__int64)&v10,
      (__int64)&v11,
      (__int64)&v13);
  }
  if ( v12 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return v6;
}
