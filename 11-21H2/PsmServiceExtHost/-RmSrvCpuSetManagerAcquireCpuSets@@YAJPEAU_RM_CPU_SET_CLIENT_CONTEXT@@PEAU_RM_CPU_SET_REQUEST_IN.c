/*
 * XREFs of ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x18008513C
 * Callers:
 *     ?RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z @ 0x18006D0B0 (-RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18003C1EC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x180084FD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180088400 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180089E04 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        ULONG *a2,
        unsigned __int64 *a3,
        struct _WNF_STATE_NAME *a4)
{
  unsigned __int64 v7; // rsi
  int v8; // edi
  PVOID v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v15; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v16; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v17; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v19; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v20[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+100h] [rbp+0h] BYREF

  RmpUtilCheckStartLockTracking(&v19, (struct _CEM_LOCK_TRACKER *)v20);
  P = 0LL;
  v7 = -1LL;
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800C2F0B,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)&BitMapHeader);
  RtlInitializeBitMap(&BitMapHeader, a2 + 2, 0x800u);
  if ( *a2 && a2[66] < 2 && a2[67] < 8 && RtlNumberOfSetBits(&BitMapHeader) <= *a2 )
  {
    RmpAcquireGlobalLock();
    v8 = RmpCpuSetManagerAcquireCpuSets(
           a1,
           (struct _RM_CPU_SET_REQUEST_INFORMATION *)a2,
           0,
           (struct _RM_CPU_SET_ALLOCATION **)&P);
    if ( v8 < 0 )
    {
      v9 = P;
    }
    else
    {
      v9 = 0LL;
      v8 = 0;
      v7 = *((_QWORD *)P + 4);
      *a3 = v7;
    }
    if ( v9 )
      RmpCpuSetManagerReleaseAllocation(v9);
    RmpReleaseGlobalLock();
  }
  else
  {
    v8 = -1073741584;
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 9LL) )
  {
    v15 = *a2;
    v16 = a2[67];
    v17 = a2[66];
    v18 = *((_DWORD *)a1 + 14);
    *(_QWORD *)&BitMapHeader.SizeOfBitMap = v7;
    LODWORD(P) = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      byte_1800C285F,
      v11,
      v12,
      (__int64)&P,
      (__int64)&BitMapHeader,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  if ( v19 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v8;
}
