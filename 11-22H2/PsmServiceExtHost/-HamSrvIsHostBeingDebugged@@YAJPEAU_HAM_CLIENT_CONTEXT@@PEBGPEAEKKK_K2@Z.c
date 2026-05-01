/*
 * XREFs of ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180072898
 * Callers:
 *     ?HampInProcIsHostBeingDebugged@@YAJPEAXPEBGPEAEKKK_K2@Z @ 0x18004AF40 (-HampInProcIsHostBeingDebugged@@YAJPEAXPEBGPEAEKKK_K2@Z.c)
 *     HamRpcSrvIsHostBeingDebugged @ 0x18007B140 (HamRpcSrvIsHostBeingDebugged.c)
 * Callees:
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002770 (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180035300 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180070B34 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180070FF8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 */

__int64 __fastcall HamSrvIsHostBeingDebugged(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct _HAM_CLIENT_CONTEXT *a7,
        bool *a8)
{
  char v11; // si
  int v12; // edi
  __int64 v13; // r8
  int HostWithFullInfo; // eax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rbx
  int IsDebugEnabled; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _BYTE v22[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-ACh] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v24; // [rsp+58h] [rbp-A8h] BYREF
  struct _HAM_CLIENT_CONTEXT *v25; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v26; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v27[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[560]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+330h] [rbp+230h] BYREF

  v25 = a1;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v27);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C0129,
      0LL,
      0LL,
      2u,
      &v29);
  v11 = 0;
  v24 = 0LL;
  v23 = 0;
  v12 = HampUtilValidateAndCapturePsmInformation(
          (struct _RM_PSM_HOST_INFO *)v28,
          a2,
          a3,
          a4,
          a5,
          a6,
          (unsigned __int64)a7);
  if ( v12 >= 0 )
  {
    LOBYTE(v13) = 2;
    HostWithFullInfo = RmHamFindHostWithFullInfo(
                         (*((_QWORD *)v25 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)v25 + 164) - 16,
                         (__int64)v28,
                         v13,
                         &v24);
    v15 = v24;
    v12 = HostWithFullInfo;
    if ( HostWithFullInfo >= 0 )
    {
      IsDebugEnabled = HampHostQueryIsDebugEnabled(v24, &v23);
      v11 = v23;
      v12 = IsDebugEnabled;
      if ( IsDebugEnabled >= 0 )
      {
        v12 = 0;
        *a8 = v23 != 0;
      }
    }
    if ( v15 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v15 + 75))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v15 - 64) & -(__int64)(v15 != 0LL)));
      RmpReleaseGlobalLock();
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v22[0] = v11;
    v25 = a7;
    v23 = a6;
    v26 = a2;
    LODWORD(v24) = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v18,
      byte_1800C0F40,
      v19,
      v20,
      (__int64)&v24,
      (const unsigned __int16 **)&v26,
      (__int64)&v23,
      (__int64)&v25,
      (__int64)v22);
  }
  return (unsigned int)v12;
}
