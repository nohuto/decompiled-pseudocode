/*
 * XREFs of DllMain @ 0x180004AE0
 * Callers:
 *     __DllMainCRTStartup @ 0x180007074 (__DllMainCRTStartup.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001008 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180007300 (__security_check_cookie.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  REGHANDLE v4; // rcx
  int v6; // [rsp+30h] [rbp-50h] BYREF
  GUID ProviderId; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+48h] [rbp-38h] BYREF
  int *v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]

  if ( fdwReason == 1 )
  {
    ProviderId = (GUID)*((_OWORD *)off_18000D008 - 1);
    if ( RegHandle )
      __fastfail(5u);
    xmmword_18000D028 = 0LL;
    if ( !EventRegister(&ProviderId, (PENABLECALLBACK)tlgEnableCallback, &dword_18000D000, &RegHandle) )
      EventSetInformation(RegHandle, 2LL, off_18000D008, *(unsigned __int16 *)off_18000D008);
    if ( (unsigned int)dword_18000D000 > 4 )
    {
      v11 = 0;
      v9 = &v6;
      v6 = 1;
      v10 = 4;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_18000D000,
        (unsigned __int8 *)dword_18000A051,
        0LL,
        0LL,
        3u,
        &v8);
    }
    DisableThreadLibraryCalls(hinstDLL);
  }
  else if ( !fdwReason )
  {
    if ( (unsigned int)dword_18000D000 > 4 )
    {
      v6 = 0;
      v11 = 0;
      v9 = &v6;
      v10 = 4;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_18000D000,
        (unsigned __int8 *)dword_18000A051,
        0LL,
        0LL,
        3u,
        &v8);
    }
    v4 = RegHandle;
    RegHandle = 0LL;
    dword_18000D000 = 0;
    EventUnregister(v4);
  }
  return 1;
}
