/*
 * XREFs of ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x18008DC80
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z @ 0x180028920 (-HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@K@Z @ 0x18007ED58 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@43@Z @ 0x18008D910 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     CempPackageFamilyNameFromFullName @ 0x1800974FC (CempPackageFamilyNameFromFullName.c)
 */

__int64 __fastcall CBackgroundAccessStateChangedListener::BackgroundAccessStateChanged(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        int a4)
{
  int v8; // ebx
  unsigned int v9; // ebx
  signed int LastError; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v17; // [rsp+58h] [rbp-A8h] BYREF
  PSID Sid; // [rsp+60h] [rbp-A0h] BYREF
  const unsigned __int16 *v19; // [rsp+68h] [rbp-98h] BYREF
  const unsigned __int16 *v20; // [rsp+70h] [rbp-90h] BYREF
  wchar_t v21[104]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v22[144]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int16 v24[72]; // [rsp+200h] [rbp+100h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  Sid = 0LL;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C6942,
      0LL,
      0LL,
      2u,
      &v23);
  v8 = CempPackageFamilyNameFromFullName(a3);
  if ( v8 >= 0 )
  {
    if ( ConvertStringSidToSidW(a2, &Sid) )
    {
      HampPkgInfoInitialize((char *)v24, Sid, *(_DWORD *)(a1 + 40), (struct _HAM_PACKAGE_INFO *)v21);
      HampPkgHandleBackgroundAccessStateChange(*(struct _HOST_ACTIVITY_MANAGER **)(a1 + 32), v21, (a4 & 1) == 0);
      v9 = 0;
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  else
  {
    v9 = v8 | 0x10000000;
  }
  if ( Sid )
    LocalFree(Sid);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v16 = *(_DWORD *)(a1 + 40);
    v15 = a4;
    v19 = a3;
    v20 = a2;
    v17 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v11,
      byte_1800C69B8,
      v12,
      v13,
      (__int64)&v17,
      (__int64)&v16,
      &v20,
      &v19,
      (__int64)&v15);
  }
  return v9;
}
