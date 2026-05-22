/*
 * XREFs of std::call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___ @ 0x1801F66FC
 * Callers:
 *     ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801F6A3C (-RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041C68 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800BD6FC (-AddInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 */

void __fastcall std::call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___(__int64 a1, _QWORD *a2)
{
  const char *v3; // r9
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 fPending; // [rsp+40h] [rbp+8h] BYREF

  fPending = a1;
  if ( !__std_init_once_begin_initialize(&MPCHeadProcessor::s_constantsInitialized, 0, (PBOOL)&fPending, 0LL) )
    abort();
  if ( (_DWORD)fPending )
  {
    v4 = &MPCHeadProcessor::s_constantsInitialized;
    v5 = 4;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v3);
    MPCConstantManager::AddInputType(
      MPCConstantManager::s_instance,
      (struct IMPCInputProviderBase *)((*a2 + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64)));
    v5 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v4);
  }
}
