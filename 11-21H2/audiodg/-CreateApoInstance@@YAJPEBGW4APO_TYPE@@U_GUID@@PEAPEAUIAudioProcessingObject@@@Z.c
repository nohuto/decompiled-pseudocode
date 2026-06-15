/*
 * XREFs of ?CreateApoInstance@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14002C7D4
 * Callers:
 *     ?IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z @ 0x14002C6C0 (-IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14006CF68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CreateApoInstance(__int64 a1, __int64 a2, IID *a3, LPVOID *ppv)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  IID rclsid; // [rsp+70h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  rclsid = *a3;
  v4 = CoCreateInstance(&rclsid, 0LL, 1u, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, ppv);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6C,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
