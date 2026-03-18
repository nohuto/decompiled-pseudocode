/*
 * XREFs of DrvSetGraphicsDevices @ 0x1C00C53C0
 * Callers:
 *     <none>
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0075F50 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall DrvSetGraphicsDevices(char *a1)
{
  __int64 result; // rax

  StringCchCopyW((char *)qword_1C0297068, (unsigned int)dword_1C0297070, a1);
  if ( gProtocolType )
  {
    gcRemoteNextGlobalDeviceNumber = 0;
    gcRemoteNextMirrorDriverDeviceNumber = 0;
  }
  else
  {
    gcLocalNextGlobalDeviceNumber = 0;
  }
  result = DrvUpdateGraphicsDeviceList(1);
  if ( gpGdiSharedMemory )
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393256);
  return result;
}
