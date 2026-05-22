/*
 * XREFs of std::call_once__lambda_a860493e5708769190ef41fba30dc41a___ @ 0x1800B8DEC
 * Callers:
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800B92E8 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18002C350 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088EA0 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPCHeadUpdateListener@@QEAA@XZ @ 0x1800B8F50 (--0MPCHeadUpdateListener@@QEAA@XZ.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800B9320 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::call_once__lambda_a860493e5708769190ef41fba30dc41a___(__int64 a1, __int64 a2)
{
  const char *v2; // r9
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v6; // [rsp+40h] [rbp+8h]
  __int64 fPending; // [rsp+48h] [rbp+10h] BYREF

  fPending = a2;
  if ( !__std_init_once_begin_initialize(&MPCHeadUpdateListener::s_singletonCreated, 0, (PBOOL)&fPending, 0LL) )
    abort();
  if ( (_DWORD)fPending )
  {
    v3 = &MPCHeadUpdateListener::s_singletonCreated;
    v4 = 4;
    v6 = operator new(0xD0uLL);
    memset_0(v6, 0, 0xD0uLL);
    MPCHeadUpdateListener::s_instance = MPCHeadUpdateListener::MPCHeadUpdateListener((MPCHeadUpdateListener *)v6);
    if ( !MPCHeadUpdateListener::s_instance )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        33LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        v2);
    MPCHeadUpdateListener::Initialize(retaddr);
    v4 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v3);
  }
}
