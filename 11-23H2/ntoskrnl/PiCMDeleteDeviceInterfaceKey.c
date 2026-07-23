/*
 * XREFs of PiCMDeleteDeviceInterfaceKey @ 0x1409693A0
 * Callers:
 *     PiCMHandleIoctl @ 0x1406D0790 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMReleaseObjectInputData @ 0x14079A2C8 (PiCMReleaseObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14079A2F8 (PiCMReturnBasicResultData.c)
 *     PiCMCaptureObjectInputData @ 0x14079A374 (PiCMCaptureObjectInputData.c)
 *     PiAuDoesClientHaveAccess @ 0x14079AA78 (PiAuDoesClientHaveAccess.c)
 *     _CmDeleteDeviceInterfaceRegKey @ 0x140A619A8 (_CmDeleteDeviceInterfaceRegKey.c)
 */

__int64 __fastcall PiCMDeleteDeviceInterfaceKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // ebx
  int v9; // r9d
  int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-18h]

  *a6 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v12);
  if ( v8 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( (_QWORD)v13 && *(_QWORD *)((char *)&v12 + 4) == 0x400000000LL && !HIDWORD(v13) && a3 && a4 >= 8 )
        v10 = CmDeleteDeviceInterfaceRegKey(PiPnpRtlCtx, v13, 50, v9, 1);
      else
        v10 = -1073741811;
    }
    else
    {
      v10 = -1073741790;
    }
    v8 = PiCMReturnBasicResultData(v10, v14, a3, a4, a6);
  }
  PiCMReleaseObjectInputData((__int64)&v12);
  return (unsigned int)v8;
}
