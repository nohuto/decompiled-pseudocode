/*
 * XREFs of ??R?$__func@V_lambda_4be300a8f8e798a898b21a69b224939c_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x1804EF6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_4be300a8f8e798a898b21a69b224939c_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(
        __int64 a1,
        LPWSTR *a2,
        unsigned __int64 *a3,
        _QWORD **a4)
{
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rdi
  DWORD FullPathNameW; // eax
  const char *v7; // r9
  unsigned int v8; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a3;
  v5 = *a4;
  FullPathNameW = GetFullPathNameW(**(LPCWSTR **)(a1 + 8), *a3, *a2, 0LL);
  v8 = 0;
  *v5 = FullPathNameW;
  if ( FullPathNameW )
  {
    if ( FullPathNameW < v4 )
      *v5 = FullPathNameW + 1LL;
  }
  else
  {
    return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x9D,
                           (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
                           v7);
  }
  return v8;
}
