/*
 * XREFs of PbmReportAppInteractivityChange @ 0x180028DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020FAC (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002CA4C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall PbmReportAppInteractivityChange(void *a1, void *a2, __int64 a3, int a4)
{
  __int64 result; // rax
  UINT32 v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v9[5]; // [rsp+34h] [rbp-14h] BYREF

  result = 2147549183LL;
  if ( g_ApplicationManager )
  {
    result = RpcClientProcessSessionId(a1, v9, &v8);
    if ( (_DWORD)result )
    {
      if ( (int)result > 0 )
        return (unsigned __int16)result | 0x80070000;
    }
    else
    {
      return CApplicationManager::ProcessInteractivityNotification((__int64)g_ApplicationManager, a2, a3, a4, v8);
    }
  }
  return result;
}
