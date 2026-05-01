/*
 * XREFs of ?HamSrvPlmNotifyNewSession@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAEK@Z @ 0x180041040
 * Callers:
 *     HamRpcSrvPlmNotifyNewSession @ 0x180040FE0 (HamRpcSrvPlmNotifyNewSession.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180041244 (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HamSrvPlmNotifyNewSession(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  int v8; // esi
  HRESULT v9; // eax
  HGLOBAL v10; // rax
  void *v11; // rdi
  HRESULT v12; // eax
  unsigned int v13; // ebx
  unsigned int v15; // eax
  unsigned int v16; // eax
  LPSTREAM ppstm; // [rsp+30h] [rbp-99h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-89h] BYREF
  struct _HAM_SESSION *v20; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v21[144]; // [rsp+50h] [rbp-79h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  ppstm = 0LL;
  v8 = 0;
  if ( (int)HampSessionFindOrCreate(a1, a2, &v20) < 0 )
  {
    v13 = -1073741275;
  }
  else
  {
    v9 = CoInitializeEx(0LL, 0);
    if ( v9 < 0 )
    {
      v13 = (unsigned __int16)v9;
      v15 = (unsigned __int16)v9 | 0xC0070000;
      if ( v13 )
        v13 = v15;
    }
    else
    {
      v8 = 1;
      v10 = GlobalAlloc(2u, a4);
      v11 = v10;
      if ( v10 )
      {
        v12 = CreateStreamOnHGlobal(v10, 1, &ppstm);
        if ( v12 < 0
          || (v12 = (*(__int64 (__fastcall **)(LPSTREAM, unsigned __int8 *, _QWORD, _BYTE *))(*(_QWORD *)ppstm + 32LL))(
                      ppstm,
                      a3,
                      a4,
                      v19),
              v12 < 0)
          || (v12 = (*(__int64 (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(
                      ppstm,
                      0LL,
                      0LL,
                      0LL),
              v12 < 0)
          || (v12 = CoUnmarshalInterface(ppstm, &GUID_cf354276_51cb_46d8_9470_b192975390a1, &ppv), v12 < 0) )
        {
          v13 = (unsigned __int16)v12;
          v16 = (unsigned __int16)v12 | 0xC0070000;
          if ( v13 )
            v13 = v16;
        }
        else
        {
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
          v13 = 0;
          *((_QWORD *)v20 + 17) = ppv;
        }
        GlobalFree(v11);
      }
      else
      {
        v13 = -1073741801;
      }
    }
  }
  if ( ppstm )
  {
    (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
    CoReleaseMarshalData(ppstm);
    (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)ppstm + 16LL))(ppstm);
  }
  if ( v8 )
    CoUninitialize();
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v13;
}
