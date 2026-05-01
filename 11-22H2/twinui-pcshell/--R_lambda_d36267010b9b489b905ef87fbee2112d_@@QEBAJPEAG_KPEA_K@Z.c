/*
 * XREFs of ??R_lambda_d36267010b9b489b905ef87fbee2112d_@@QEBAJPEAG_KPEA_K@Z @ 0x18063956C
 * Callers:
 *     ??R?$__func@V_lambda_d36267010b9b489b905ef87fbee2112d_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x180639620 (--R-$__func@V_lambda_d36267010b9b489b905ef87fbee2112d_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UE.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_d36267010b9b489b905ef87fbee2112d_::operator()(
        __int64 a1,
        WCHAR *a2,
        unsigned __int64 a3,
        __int64 *a4)
{
  void *v6; // r10
  HMODULE *v7; // rax
  DWORD ModuleFileName; // eax
  const char *v9; // r9
  DWORD v10; // r8d
  char v11; // dl
  char v12; // cl
  DWORD ModuleFileNameW; // eax
  __int64 v15; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = **(void ***)a1;
  v7 = *(HMODULE **)(a1 + 8);
  if ( v6 )
  {
    ModuleFileName = K32GetModuleFileNameExW(v6, *v7, a2, a3);
    v10 = ModuleFileName;
    if ( ModuleFileName )
    {
      v11 = 0;
      if ( ModuleFileName < a3 - 1 )
        goto LABEL_12;
      goto LABEL_4;
    }
    goto LABEL_8;
  }
  ModuleFileNameW = GetModuleFileNameW(*v7, a2, a3);
  v10 = ModuleFileNameW;
  if ( !ModuleFileNameW )
  {
LABEL_8:
    v11 = 1;
LABEL_4:
    v12 = 0;
    goto LABEL_5;
  }
  v11 = 0;
  if ( ModuleFileNameW >= a3 )
    goto LABEL_4;
  v12 = 1;
LABEL_5:
  if ( v11 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x15C,
             (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
             v9);
  if ( !v12 )
  {
    v15 = 2 * a3;
    goto LABEL_14;
  }
LABEL_12:
  v15 = v10 + 1;
LABEL_14:
  *a4 = v15;
  return 0LL;
}
