/*
 * XREFs of std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___ @ 0x180041144
 * Callers:
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x180032374 (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 * Callees:
 *     ??0MPCConstantManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18003C358 (--0MPCConstantManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041260 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___(
        __int64 a1,
        struct MPCManagerConnection ***a2)
{
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  __int64 fPending; // [rsp+40h] [rbp+8h] BYREF
  MPCConstantManager *v6; // [rsp+50h] [rbp+18h]

  fPending = a1;
  if ( !__std_init_once_begin_initialize(&MPCConstantManager::s_singletonCreated, 0, (PBOOL)&fPending, 0LL) )
    abort();
  if ( (_DWORD)fPending )
  {
    v3 = &MPCConstantManager::s_singletonCreated;
    v4 = 4;
    v6 = (MPCConstantManager *)operator new(0x58uLL);
    MPCConstantManager::s_instance = MPCConstantManager::MPCConstantManager(v6, **a2);
    v4 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v3);
  }
}
