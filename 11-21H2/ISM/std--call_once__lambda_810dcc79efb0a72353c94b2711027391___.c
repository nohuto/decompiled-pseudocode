/*
 * XREFs of std::call_once__lambda_810dcc79efb0a72353c94b2711027391___ @ 0x180091BEC
 * Callers:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180092314 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18002C350 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??0MPCGestureHandlerManager@@QEAA@XZ @ 0x180091CE4 (--0MPCGestureHandlerManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::call_once__lambda_810dcc79efb0a72353c94b2711027391___(__int64 a1, __int64 a2)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  MPCGestureHandlerManager *v4; // [rsp+40h] [rbp+8h]
  __int64 fPending; // [rsp+48h] [rbp+10h] BYREF

  fPending = a2;
  if ( !__std_init_once_begin_initialize(&MPCGestureHandlerManager::s_singletonCreated, 0, (PBOOL)&fPending, 0LL) )
    abort();
  if ( (_DWORD)fPending )
  {
    v2 = &MPCGestureHandlerManager::s_singletonCreated;
    v4 = (MPCGestureHandlerManager *)operator new(0x40uLL);
    MPCGestureHandlerManager::s_instance = MPCGestureHandlerManager::MPCGestureHandlerManager(v4);
    v3 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v2);
  }
}
