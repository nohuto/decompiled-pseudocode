/*
 * XREFs of PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180029260
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x180020EBC (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002CA4C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall PbmSwitchSoftNonInteractiveAppsToHardNonInteractive(void *a1)
{
  __int64 result; // rax
  CApplicationManager *v2; // rcx
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  result = 2147549183LL;
  if ( g_ApplicationManager )
  {
    result = RpcClientProcessSessionId(a1, &v4, &v3);
    if ( (_DWORD)result )
    {
      if ( (int)result > 0 )
        return (unsigned __int16)result | 0x80070000;
    }
    else
    {
      return CApplicationManager::OnSoftNonInteractiveAppsSwitchToHardNonInteractive(v2, v3);
    }
  }
  return result;
}
