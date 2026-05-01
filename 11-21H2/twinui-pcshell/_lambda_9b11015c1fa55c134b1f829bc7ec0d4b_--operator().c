/*
 * XREFs of _lambda_9b11015c1fa55c134b1f829bc7ec0d4b_::operator() @ 0x1800238D0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9b11015c1fa55c134b1f829bc7ec0d4b___::Run @ 0x1800238C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9b11015c1fa55c134b1f829bc7ec0d4b___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_9b11015c1fa55c134b1f829bc7ec0d4b_::operator()(_QWORD *a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a1 + 144LL))(*a1, &v8);
  v2 = v1;
  if ( v1 < 0 )
  {
    v5 = 8387LL;
  }
  else
  {
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
    v2 = v1;
    if ( v1 >= 0 )
    {
      v2 = 0;
      goto LABEL_4;
    }
    v5 = 8388LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v1,
    v6);
LABEL_4:
  v3 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v2;
}
