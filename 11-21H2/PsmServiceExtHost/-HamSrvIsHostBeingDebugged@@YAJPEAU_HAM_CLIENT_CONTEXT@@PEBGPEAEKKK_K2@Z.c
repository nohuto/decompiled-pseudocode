/*
 * XREFs of ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180070178
 * Callers:
 *     HamRpcSrvIsHostBeingDebugged @ 0x180073620 (HamRpcSrvIsHostBeingDebugged.c)
 * Callees:
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002AA8 (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x1800297F8 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18006EB14 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180073300 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 */

__int64 __fastcall HamSrvIsHostBeingDebugged(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct _RM_HAM_ACTIVITY_HOST *a7,
        bool *a8)
{
  unsigned __int8 *v11; // r8
  unsigned __int16 *v12; // rdi
  char v13; // si
  int v14; // ebx
  __int64 v15; // r8
  int HostWithFullInfo; // eax
  struct _RM_HAM_ACTIVITY_HOST *v17; // rdi
  int IsDebugEnabled; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE v24[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int16 *v26; // [rsp+58h] [rbp-A8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v27; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v28; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v29[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[560]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+330h] [rbp+230h] BYREF

  v26 = a2;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v29);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BE32F,
      0LL,
      0LL,
      2u,
      &v31);
  v11 = a3;
  v12 = v26;
  v13 = 0;
  v27 = 0LL;
  v25 = 0;
  v14 = HampUtilValidateAndCapturePsmInformation(
          (struct _RM_PSM_HOST_INFO *)v30,
          v26,
          v11,
          a4,
          a5,
          a6,
          (unsigned __int64)a7);
  if ( v14 >= 0 )
  {
    LOBYTE(v15) = 3;
    HostWithFullInfo = RmHamFindHostWithFullInfo(*(_QWORD *)a1, (__int64)v30, v15, &v27);
    v17 = v27;
    v14 = HostWithFullInfo;
    if ( HostWithFullInfo >= 0 )
    {
      IsDebugEnabled = HampHostQueryIsDebugEnabled(v27, &v25);
      v13 = v25;
      v14 = IsDebugEnabled;
      if ( IsDebugEnabled >= 0 )
      {
        v14 = 0;
        *a8 = v25 != 0;
      }
    }
    if ( v17 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v17 + 75))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v17 - 64));
      RmpReleaseGlobalLock();
    }
    v12 = v26;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v24[0] = v13;
    v27 = a7;
    v25 = a6;
    v28 = v12;
    LODWORD(v26) = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v20,
      byte_1800BF0F8,
      v21,
      v22,
      (__int64)&v26,
      (const unsigned __int16 **)&v28,
      (__int64)&v25,
      (__int64)&v27,
      (__int64)v24);
  }
  return (unsigned int)v14;
}
