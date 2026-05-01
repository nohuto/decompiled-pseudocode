/*
 * XREFs of ??R?$__func@V_lambda_e1bdf235c2021226f8c53f8fb7bf9230_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x1801739D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_e1bdf235c2021226f8c53f8fb7bf9230_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(
        __int64 a1,
        WCHAR **a2,
        DWORD *a3,
        _QWORD **a4)
{
  DWORD v4; // eax
  _QWORD *v5; // rdi
  WCHAR *v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwSize; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a3;
  v5 = *a4;
  v6 = *a2;
  dwSize = v4;
  v7 = 0;
  if ( QueryFullProcessImageNameW(**(HANDLE **)(a1 + 8), **(_DWORD **)(a1 + 16), v6, &dwSize) )
  {
    v8 = dwSize + 1;
  }
  else
  {
    if ( GetLastError() != 122 )
      return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                             retaddr,
                             (void *)0xFE,
                             (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
                             v10);
    v8 = 2 * dwSize;
  }
  *v5 = v8;
  return v7;
}
