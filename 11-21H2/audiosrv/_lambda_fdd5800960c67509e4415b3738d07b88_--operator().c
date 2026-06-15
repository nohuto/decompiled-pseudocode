/*
 * XREFs of _lambda_fdd5800960c67509e4415b3738d07b88_::operator() @ 0x180050B28
 * Callers:
 *     ?s_adPublishApoTelemetry@@YAJPEBG@Z @ 0x180050A44 (-s_adPublishApoTelemetry@@YAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DA73C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall lambda_fdd5800960c67509e4415b3738d07b88_::operator()(_QWORD **a1)
{
  int Pointer; // eax
  unsigned int v2; // ebx
  int v4[2]; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v4 = *a1[1];
  Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 7u, 0LL, **a1).Pointer;
  v2 = Pointer;
  if ( Pointer >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x366,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
    (const char *)(unsigned int)Pointer,
    v4[0]);
  return v2;
}
