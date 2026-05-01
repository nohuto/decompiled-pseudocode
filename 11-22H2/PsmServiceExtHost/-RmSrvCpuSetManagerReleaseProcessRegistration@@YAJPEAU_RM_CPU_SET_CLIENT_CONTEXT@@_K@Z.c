/*
 * XREFs of ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x180083DE8
 * Callers:
 *     ?RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z @ 0x18006C980 (-RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180002C34 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18002EEE8 (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032530 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18003E578 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x180087C00 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmSrvCpuSetManagerReleaseProcessRegistration(struct _RM_CPU_SET_MANAGER **a1, unsigned __int64 a2)
{
  struct _RM_OBJECT_TABLE *v4; // rcx
  struct _RM_OBJECT_HEADER *v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  struct _RM_OBJECT_HEADER *v10; // rbx
  unsigned __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_OBJECT_HEADER *v12; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v13; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+F0h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C3BF3,
      0LL,
      0LL,
      2u,
      &v16);
  RmpUtilCheckStartLockTracking(&v13, (struct _CEM_LOCK_TRACKER *)v15);
  RmpAcquireGlobalLock();
  v4 = (struct _RM_CPU_SET_MANAGER *)((char *)*a1 + 48);
  v11 = a2;
  if ( (int)RmpObjectTableFindObjectByHandle(v4, &v11, &v12) >= 0 )
  {
    v10 = v12;
    v5 = v12;
    if ( v12 && *((struct _RM_CPU_SET_MANAGER ***)v12 + 6) == a1 )
    {
      RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, v12, 1u);
      v6 = 0;
      v5 = v10;
      goto LABEL_7;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v6 = -1073741584;
  if ( v5 )
LABEL_7:
    RmpObjectRelease(v5);
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    LODWORD(v12) = *((_DWORD *)a1 + 14);
    v14 = a2;
    LODWORD(v11) = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (int)&dword_1800DB1E0,
      (int)&unk_1800C3D79,
      v7,
      v8,
      (__int64)&v11,
      (__int64)&v12,
      (__int64)&v14);
  }
  if ( v13 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return v6;
}
