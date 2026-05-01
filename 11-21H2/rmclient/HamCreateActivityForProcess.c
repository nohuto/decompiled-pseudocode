/*
 * XREFs of HamCreateActivityForProcess @ 0x180001B20
 * Callers:
 *     ?StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_START_TYPE@@@Z @ 0x18001C624 (-StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY.c)
 * Callees:
 *     HampConnectionObjectCreate @ 0x180001C08 (HampConnectionObjectCreate.c)
 *     HamIpcChannelAddCallback @ 0x180002750 (HamIpcChannelAddCallback.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateActivityForProcess(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  CLIENT_CALL_RETURN result; // rax
  unsigned int Pointer; // [rsp+40h] [rbp-28h]
  _QWORD v10[3]; // [rsp+48h] [rbp-20h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  v10[0] = -1LL;
  P = 0LL;
  result.Simple = HampConnectionObjectCreate(a2, a1, &P);
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 3u, 0LL, *a1, a3, a4, v10).Pointer;
    v10[1] = result.Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      *((_QWORD *)P + 6) = v10[0];
      HamIpcChannelAddCallback();
      P = 0LL;
      *a5 = v10[0];
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
