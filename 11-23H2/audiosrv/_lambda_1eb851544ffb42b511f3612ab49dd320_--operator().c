/*
 * XREFs of _lambda_1eb851544ffb42b511f3612ab49dd320_::operator() @ 0x1800CE4F8
 * Callers:
 *     s_adGetDeviceGraphWnfStateName @ 0x1800CF1F0 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CF09C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall lambda_1eb851544ffb42b511f3612ab49dd320_::operator()(_QWORD **a1)
{
  int Pointer; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 5u, 0LL, **a1, *a1[1]).Pointer;
  v2 = Pointer;
  if ( Pointer >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x340,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
    (const char *)(unsigned int)Pointer);
  return v2;
}
