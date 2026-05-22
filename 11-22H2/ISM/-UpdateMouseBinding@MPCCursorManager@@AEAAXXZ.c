/*
 * XREFs of ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800CDD5C
 * Callers:
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800CDE80 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A8B5C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x1800CD8B8 (-MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z.c)
 */

void __fastcall MPCCursorManager::UpdateMouseBinding(MPCCursorManager *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v3; // rcx
  _BYTE *v4; // rdi
  char v5; // bl
  bool v6; // dl
  bool v7; // zf
  char v8; // al
  const char *v9; // r9
  __int64 v10; // rcx
  ISMTracing *v11; // rcx
  unsigned __int8 v12; // dl
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = MPCHolographicInputManager::GetInstance();
  v4 = (char *)this + 66;
  v5 = *((_BYTE *)this + 66);
  v6 = (*((_BYTE *)Instance + 3664) & 1) == 0;
  v7 = *((_BYTE *)this + 56) == 0;
  *((_BYTE *)this + 65) = v6;
  if ( !v7 && v6 )
  {
    v8 = v5;
    if ( !v5 )
    {
      if ( !(unsigned int)NtMITEnableMouseIntercept(1LL) )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x13A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v9);
      *v4 = 1;
      v8 = 1;
    }
LABEL_7:
    if ( v5 == v8 )
      goto LABEL_10;
    goto LABEL_8;
  }
  v8 = v5;
  if ( !v5 )
    goto LABEL_7;
  if ( !(unsigned int)NtMITDisableMouseIntercept() )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x140,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
      v13);
  *v4 = 0;
LABEL_8:
  if ( ISMTracing::IsEnabled(v3) )
  {
    wil::details::static_lazy<ISMTracing>::get(v10, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCCursorManager_MouseInterceptUpdate_(
      v11,
      (const bool *)this + 66,
      (const bool *)this + 56,
      (const bool *)this + 65);
  }
LABEL_10:
  *((_DWORD *)this + 8) = 0;
  v12 = *v4 == 0;
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  MPCCursorManager::UpdateCursorVisibility(this, v12, 1u, 1);
}
