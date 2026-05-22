/*
 * XREFs of std::call_once__lambda_a6dafc035b20d634b29ec3c0443d964a___ @ 0x1800411D8
 * Callers:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041260 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180041B00 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::call_once__lambda_a6dafc035b20d634b29ec3c0443d964a___(__int64 a1, __int64 a2)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  MPCHolographicInputManager *v4; // [rsp+40h] [rbp+8h]
  __int64 fPending; // [rsp+48h] [rbp+10h] BYREF

  fPending = a2;
  if ( !__std_init_once_begin_initialize(&MPCHolographicInputManager::s_singletonCreated, 0, (PBOOL)&fPending, 0LL) )
    abort();
  if ( (_DWORD)fPending )
  {
    v2 = &MPCHolographicInputManager::s_singletonCreated;
    v4 = (MPCHolographicInputManager *)operator new(0xEA0uLL);
    MPCHolographicInputManager::s_instance = MPCHolographicInputManager::MPCHolographicInputManager(v4);
    v3 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v2);
  }
}
