/*
 * XREFs of _lambda_7d2adfcb316475bfe2a248d90f5ee63b_::operator() @ 0x1801ACAE4
 * Callers:
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x180027594 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7d2adfcb316475bfe2a248d90f5ee63b_::operator()(_QWORD **a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, SID *, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  int v10; // [rsp+60h] [rbp+28h] BYREF
  int v11; // [rsp+68h] [rbp+30h] BYREF
  __int64 v12; // [rsp+70h] [rbp+38h] BYREF
  __int64 v13; // [rsp+78h] [rbp+40h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)**a1 + 48LL))(**a1, &v10);
  if ( v2 < 0 )
  {
    v3 = 309LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( v10 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)**a1 + 40LL))(**a1, &v13);
    if ( v2 < 0 )
    {
      v3 = 313LL;
      goto LABEL_3;
    }
    v12 = 0LL;
    v5 = a1[1][9];
    v6 = *(__int64 (__fastcall **)(__int64, __int64, SID *, GUID *, __int64 *))(*(_QWORD *)v5 + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    v7 = v6(v5, v13, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, &v12);
    v2 = v7;
    if ( v7 < 0 )
    {
      v8 = 315LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
      return (unsigned int)v2;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 80LL))(v12, &v11);
    v2 = v7;
    if ( v7 < 0 )
    {
      v8 = 317LL;
      goto LABEL_12;
    }
    *(_BYTE *)a1[2] = v11 != -1;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  }
  return 0LL;
}
