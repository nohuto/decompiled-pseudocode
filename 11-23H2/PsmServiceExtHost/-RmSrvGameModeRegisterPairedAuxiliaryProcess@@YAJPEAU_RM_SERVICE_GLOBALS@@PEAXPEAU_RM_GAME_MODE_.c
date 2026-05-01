/*
 * XREFs of ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x180084044
 * Callers:
 *     RmGameModeRSrvRegisterPairedAuxiliaryProcess @ 0x180085760 (RmGameModeRSrvRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeSrvRegisterPairedAuxiliaryProcess @ 0x180085930 (RmGameModeSrvRegisterPairedAuxiliaryProcess.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18003E4F8 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180082EC4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U-$_tlgWrapSz@G@@U3@U-$_t.c)
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180088C6C (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x180089074 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 */

__int64 __fastcall RmSrvGameModeRegisterPairedAuxiliaryProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        void *a4,
        unsigned int a5)
{
  struct _RM_SERVICE_GLOBALS *v5; // rbx
  int v9; // ebx
  const unsigned __int16 *FileNameW; // r14
  const unsigned __int16 *v11; // rsi
  DWORD v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v17[4]; // [rsp+70h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+74h] [rbp-8Ch] BYREF
  int v19; // [rsp+78h] [rbp-88h] BYREF
  DWORD ProcessId; // [rsp+7Ch] [rbp-84h] BYREF
  DWORD v21; // [rsp+80h] [rbp-80h] BYREF
  int v22; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v23; // [rsp+88h] [rbp-78h] BYREF
  __int64 v24; // [rsp+90h] [rbp-70h] BYREF
  const unsigned __int16 *v25; // [rsp+98h] [rbp-68h] BYREF
  const unsigned __int16 *v26; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v27[144]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+140h] [rbp+40h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+160h] [rbp+60h] BYREF
  LPCWSTR pszPath; // [rsp+168h] [rbp+68h]
  _BYTE v31[8]; // [rsp+390h] [rbp+290h] BYREF
  LPCWSTR v32; // [rsp+398h] [rbp+298h]

  v5 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(&v23, (struct _CEM_LOCK_TRACKER *)v27);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C3AA5,
      0LL,
      0LL,
      2u,
      &v28);
  if ( a5 )
  {
    v9 = -1073741583;
  }
  else if ( RmpGameModeIsResourceRequestValid(v5, a3) && (*((_DWORD *)a3 + 8) & 5) == 1 )
  {
    v9 = RmpGameModeRegisterPairedProcess((struct _RM_SERVICE_GLOBALS *)((char *)v5 + 2096), a2, a3, a4);
    if ( v9 >= 0 )
      v9 = 0;
  }
  else
  {
    v9 = -1073741584;
  }
  if ( dword_1800DB1E0 )
  {
    FileNameW = 0LL;
    ReturnLength = 0;
    if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    v11 = 0LL;
    ReturnLength = 0;
    if ( NtQueryInformationProcess(a4, ProcessImageFileNameWin32, v31, 0x228u, &ReturnLength) >= 0 )
      v11 = PathFindFileNameW(v32);
    if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 0x400000000001LL) )
    {
      ReturnLength = *((_DWORD *)a3 + 7);
      v19 = *((_DWORD *)a3 + 8);
      v17[0] = *((_BYTE *)a3 + 36);
      v24 = 0x1000000LL;
      v25 = v11;
      v26 = FileNameW;
      ProcessId = GetProcessId(a4);
      v12 = GetProcessId(a2);
      v22 = v9;
      v21 = v12;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v13,
        byte_1800C3ADC,
        v14,
        v15,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&ProcessId,
        (__int64)v17,
        (__int64)&v19,
        (__int64)&ReturnLength,
        &v26,
        &v25,
        (__int64)&v24);
    }
  }
  if ( v23 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v9;
}
