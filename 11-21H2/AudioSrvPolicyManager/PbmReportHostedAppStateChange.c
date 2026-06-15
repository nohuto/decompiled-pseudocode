/*
 * XREFs of PbmReportHostedAppStateChange @ 0x180028F70
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180026620 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002CA4C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall PbmReportHostedAppStateChange(
        void *a1,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        int a4,
        CPickerHostContext **a5)
{
  CPickerHostContext **v5; // rbx
  __int64 result; // rax
  unsigned int v10[6]; // [rsp+30h] [rbp-18h] BYREF

  v5 = a5;
  if ( !a5 )
    return 2147942487LL;
  result = RpcClientProcessSessionId(a1, v10, (unsigned int *)&a5);
  if ( !(_DWORD)result )
    return PickerHostContextManager::OnHostedAppStateChanged(a2, a3, (unsigned int)a5, a4, v5);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
