/*
 * XREFs of ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x180086038
 * Callers:
 *     RmGameModeRSrvRegisterProcess @ 0x180087F10 (RmGameModeRSrvRegisterProcess.c)
 *     RmGameModeSrvRegisterProcess @ 0x180088030 (RmGameModeSrvRegisterProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18003C1EC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapSz@G@@4@Z @ 0x180084CD8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$0.c)
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18008B35C (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18008B9D4 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 */

__int64 __fastcall RmSrvGameModeRegisterProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        int a4)
{
  struct _RM_SERVICE_GLOBALS *v4; // rbx
  int v8; // ebx
  const unsigned __int16 *FileNameW; // r14
  DWORD ProcessId; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[4]; // [rsp+80h] [rbp-80h] BYREF
  ULONG ReturnLength; // [rsp+84h] [rbp-7Ch] BYREF
  int v17; // [rsp+88h] [rbp-78h] BYREF
  int v18; // [rsp+8Ch] [rbp-74h] BYREF
  int v19; // [rsp+90h] [rbp-70h] BYREF
  int v20; // [rsp+94h] [rbp-6Ch] BYREF
  int v21; // [rsp+98h] [rbp-68h] BYREF
  DWORD v22; // [rsp+9Ch] [rbp-64h] BYREF
  int v23; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v24; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v25; // [rsp+A8h] [rbp-58h] BYREF
  const unsigned __int16 *v26; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v28[144]; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+150h] [rbp+50h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+170h] [rbp+70h] BYREF
  LPCWSTR pszPath; // [rsp+178h] [rbp+78h]

  v4 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(&v24, (struct _CEM_LOCK_TRACKER *)v28);
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800C2F3A,
      0LL,
      0LL,
      2u,
      &v29);
  if ( a4 )
  {
    v8 = -1073741583;
  }
  else if ( RmpGameModeIsResourceRequestValid(v4, a3) )
  {
    v8 = RmpGameModeRegisterProcess((struct _RM_SERVICE_GLOBALS *)((char *)v4 + 2096), a2, a3);
    if ( v8 >= 0 )
      v8 = 0;
  }
  else
  {
    v8 = -1073741584;
  }
  if ( dword_1800DC1E0 )
  {
    ReturnLength = 0;
    FileNameW = 0LL;
    if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 0x400000000001LL) )
    {
      ReturnLength = *((_DWORD *)a3 + 7);
      v17 = *((_DWORD *)a3 + 8);
      v15[0] = *((_BYTE *)a3 + 36);
      v18 = *((_DWORD *)a3 + 6);
      v19 = *((_DWORD *)a3 + 5);
      v20 = *((_DWORD *)a3 + 4);
      v27 = *((_QWORD *)a3 + 1);
      v21 = *((_DWORD *)a3 + 1);
      v25 = 0x1000000LL;
      v26 = FileNameW;
      ProcessId = GetProcessId(a2);
      v23 = v8;
      v22 = ProcessId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v11,
        byte_1800C2914,
        v12,
        v13,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v27,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)v15,
        (__int64)&v17,
        (__int64)&ReturnLength,
        &v26,
        (__int64)&v25);
    }
  }
  if ( v24 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v8;
}
