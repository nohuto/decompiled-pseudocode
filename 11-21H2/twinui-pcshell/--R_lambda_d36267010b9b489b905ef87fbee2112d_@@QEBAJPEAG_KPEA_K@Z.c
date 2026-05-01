/*
 * XREFs of ??R_lambda_d36267010b9b489b905ef87fbee2112d_@@QEBAJPEAG_KPEA_K@Z @ 0x18057A08C
 * Callers:
 *     ??R?$__func@V_lambda_d36267010b9b489b905ef87fbee2112d_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x18057A130 (--R-$__func@V_lambda_d36267010b9b489b905ef87fbee2112d_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UE.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_d36267010b9b489b905ef87fbee2112d_::operator()(
        __int64 a1,
        WCHAR *a2,
        unsigned __int64 a3,
        __int64 *a4)
{
  HANDLE *v4; // rax
  HMODULE *v6; // rcx
  DWORD ModuleFileName; // eax
  const char *v9; // r9
  DWORD v10; // r8d
  __int64 v11; // rbx
  DWORD ModuleFileNameW; // eax
  char v14; // cl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(HANDLE **)a1;
  v6 = *(HMODULE **)(a1 + 8);
  if ( *v4 )
  {
    ModuleFileName = K32GetModuleFileNameExW(*v4, *v6, a2, a3);
    v10 = ModuleFileName;
    if ( ModuleFileName )
    {
      if ( ModuleFileName < a3 - 1 )
      {
LABEL_4:
        v11 = v10 + 1;
LABEL_5:
        *a4 = v11;
        return 0LL;
      }
      goto LABEL_11;
    }
  }
  else
  {
    ModuleFileNameW = GetModuleFileNameW(*v6, a2, a3);
    v10 = ModuleFileNameW;
    if ( ModuleFileNameW )
    {
      v14 = 0;
      if ( ModuleFileNameW < a3 )
        goto LABEL_4;
    }
    else
    {
      v14 = 1;
    }
    if ( !v14 )
    {
LABEL_11:
      v11 = 2 * a3;
      goto LABEL_5;
    }
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x15C,
           (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
           v9);
}
