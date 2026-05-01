/*
 * XREFs of ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180048270
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180045040 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180055166 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall RmpCpuSetManagerAudioCpuWnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct _RM_CPU_SET_MANAGER *a4,
        int *a5,
        unsigned int a6)
{
  int v7; // esi
  int v8; // ebx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v13; // [rsp+30h] [rbp-B8h] BYREF
  int v14[3]; // [rsp+34h] [rbp-B4h] BYREF
  _BYTE v15[144]; // [rsp+40h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  v7 = -1;
  if ( a5 && a6 == 4 )
    v8 = *a5;
  else
    v8 = -1;
  RmpAcquireGlobalLock();
  if ( (*(_BYTE *)(*(_QWORD *)a4 + 3528LL) & 1) == 0 )
  {
    v7 = *((_DWORD *)a4 + 348);
    if ( v8 != v7 )
    {
      *((_DWORD *)a4 + 348) = v8;
      RmpCpuSetManagerResetValidMask(a4);
    }
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v13 = v7;
    v14[0] = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (unsigned int)&unk_1800C4A79,
      v10,
      v11,
      (__int64)v14,
      (__int64)&v13);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return 0LL;
}
