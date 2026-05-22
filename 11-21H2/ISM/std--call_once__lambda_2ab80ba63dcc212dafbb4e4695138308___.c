/*
 * XREFs of std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___ @ 0x1801BDA2C
 * Callers:
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C1D6C (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18002C350 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _lambda_2ab80ba63dcc212dafbb4e4695138308_::operator() @ 0x1801BF058 (_lambda_2ab80ba63dcc212dafbb4e4695138308_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 fPending; // [rsp+48h] [rbp+10h] BYREF

  fPending = a2;
  if ( !__std_init_once_begin_initialize(&MPCSixDofProcessor::s_registryWatcherCreated, 0, (PBOOL)&fPending, 0LL) )
    abort();
  if ( (_DWORD)fPending )
  {
    v4 = &MPCSixDofProcessor::s_registryWatcherCreated;
    lambda_2ab80ba63dcc212dafbb4e4695138308_::operator()(v3, v2);
    v5 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v4);
  }
}
