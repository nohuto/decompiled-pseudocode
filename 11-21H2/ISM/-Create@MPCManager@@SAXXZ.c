/*
 * XREFs of ?Create@MPCManager@@SAXXZ @ 0x18002B900
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18002BE88 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x18002B984 (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18002C350 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCManager::Create(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // r9
  union _RTL_RUN_ONCE *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF

  if ( MPCManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
      a4);
  if ( !__std_init_once_begin_initialize(&MPCManager::s_singletonCreated, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v7 = &MPCManager::s_singletonCreated;
    lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator()(v5, v4);
    v8 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v7);
  }
  if ( !MPCManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
      v6);
}
