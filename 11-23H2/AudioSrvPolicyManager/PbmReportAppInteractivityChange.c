/*
 * XREFs of PbmReportAppInteractivityChange @ 0x180014A90
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x1800057D0 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18002DDB0 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 */

__int64 __fastcall PbmReportAppInteractivityChange(void *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v9[5]; // [rsp+34h] [rbp-14h] BYREF

  if ( !g_ApplicationManager )
    return 2147549183LL;
  result = RpcClientProcessSessionId(a1, v9, &v8);
  if ( !(_DWORD)result )
    return CApplicationManager::ProcessInteractivityNotification(g_ApplicationManager, a2, a3, a4, v8);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
