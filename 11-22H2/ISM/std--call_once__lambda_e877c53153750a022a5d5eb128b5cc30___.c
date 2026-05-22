/*
 * XREFs of std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30___ @ 0x1800BC188
 * Callers:
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800BC248 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041C68 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30___(__int64 a1, __int64 a2)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  _QWORD *v4; // [rsp+40h] [rbp+8h]
  __int64 fPending; // [rsp+48h] [rbp+10h] BYREF

  fPending = a2;
  if ( !__std_init_once_begin_initialize(&MPCGamepadInputHelper::s_singletonCreated, 0, (PBOOL)&fPending, 0LL) )
    abort();
  if ( (_DWORD)fPending )
  {
    v2 = &MPCGamepadInputHelper::s_singletonCreated;
    v4 = operator new(0x30uLL);
    *(_WORD *)v4 = 0;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    *((_WORD *)v4 + 20) = 0;
    *((_DWORD *)v4 + 7) = GetCurrentProcessId();
    MPCGamepadInputHelper::s_instance = (struct MPCGamepadInputHelper *)v4;
    v3 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v2);
  }
}
