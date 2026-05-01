/*
 * XREFs of _lambda_0965d95f79f373d2b304802bd170b353_::operator() @ 0x18030FCA8
 * Callers:
 *     wistd::__function::__func__lambda_0965d95f79f373d2b304802bd170b353__void___cdecl(void)_::operator() @ 0x18030FEE0 (wistd--__function--__func__lambda_0965d95f79f373d2b304802bd170b353__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_0965d95f79f373d2b304802bd170b353_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rbx
  char *v3; // rbp
  RTL_SRWLOCK *i; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+48h] [rbp+10h]

  v2 = *a1 + 83;
  v10 = v2;
  AcquireSRWLockShared(v2);
  v3 = 0LL;
  for ( i = *a1; v3 < (*a1)[85].Ptr; i = *a1 )
  {
    v9 = 0LL;
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)i[84].Ptr + (_QWORD)v3);
    v6 = **v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
    v7 = v6(v5, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v9);
    if ( v7 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2A,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
    ++v3;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
}
