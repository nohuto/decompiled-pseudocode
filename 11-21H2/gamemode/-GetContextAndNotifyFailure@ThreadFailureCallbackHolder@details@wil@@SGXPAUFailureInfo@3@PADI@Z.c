/*
 * XREFs of ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SGXPAUFailureInfo@3@PADI@Z @ 0x10003B4D
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YGXPAUFailureInfo@2@PADI@Z @ 0x10003C30 (-GetContextAndNotifyFailure@details@wil@@YGXPAUFailureInfo@2@PADI@Z.c)
 * Callees:
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SG_NPAUFailureInfo@3@PAV123@PADI@Z @ 0x10003A8F (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SG_NPAUFailureInfo@3@PAV123@PADI@Z.c)
 *     ?GetLocal@?$ThreadLocalStorage@PAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QAEPAPAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x10003EA0 (-GetLocal@-$ThreadLocalStorage@PAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QAE.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

void __userpurge wil::details::ThreadFailureCallbackHolder::GetContextAndNotifyFailure(
        struct wil::FailureInfo *a1@<edx>,
        int a2@<ecx>,
        struct wil::FailureInfo *a3,
        char *a4,
        unsigned int a5)
{
  int v6; // eax
  char v7; // bl
  int *Local; // eax
  int *v9; // esi
  bool ThreadContext; // al
  int v11; // ecx
  int v12; // eax
  char v13; // al
  char *v14; // [esp+0h] [ebp-28h]
  unsigned int v15; // [esp+4h] [ebp-24h]
  char v16; // [esp+10h] [ebp-18h]
  int v17; // [esp+14h] [ebp-14h]

  v6 = a2;
  v7 = 0;
  *(_BYTE *)a1 = 0;
  v16 = 0;
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    Local = (int *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(a2);
    v9 = Local;
    if ( Local && *Local )
    {
      *(_BYTE *)a1 = 0;
      ThreadContext = wil::details::ThreadFailureCallbackHolder::GetThreadContext(*Local, a2, a1, a3, v14, v15);
      v11 = a2;
      if ( ThreadContext )
        *(_DWORD *)(a2 + 48) = a1;
      v12 = *v9;
      v17 = *v9;
      do
      {
        v13 = (***(int (__thiscall ****)(_DWORD, int))(v12 + 4))(*(_DWORD *)(v12 + 4), v11);
        v11 = a2;
        v7 |= v13;
        v16 = v7;
        v12 = *(_DWORD *)(v17 + 8);
        v17 = v12;
      }
      while ( v12 );
      v6 = a2;
    }
    else
    {
      v6 = a2;
    }
  }
  if ( wil::details::g_pfnTelemetryCallback )
    wil::details::g_pfnTelemetryCallback(wil::details::g_pfnTelemetryCallback, v16, v6);
}
