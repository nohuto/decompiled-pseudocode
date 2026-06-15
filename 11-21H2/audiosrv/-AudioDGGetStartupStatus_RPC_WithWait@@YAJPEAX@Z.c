/*
 * XREFs of ?AudioDGGetStartupStatus_RPC_WithWait@@YAJPEAX@Z @ 0x18004003C
 * Callers:
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18003FFC0 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DA73C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall AudioDGGetStartupStatus_RPC_WithWait(void *a1)
{
  int Pointer; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0, 0LL, a1).Pointer;
  v2 = Pointer;
  if ( Pointer >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD0,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
    (const char *)(unsigned int)Pointer,
    v4);
  return v2;
}
