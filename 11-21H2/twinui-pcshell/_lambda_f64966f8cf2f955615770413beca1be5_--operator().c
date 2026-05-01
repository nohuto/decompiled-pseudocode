/*
 * XREFs of _lambda_f64966f8cf2f955615770413beca1be5_::operator() @ 0x18014E9D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f64966f8cf2f955615770413beca1be5___::Run @ 0x18014E9B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f64966f8cf2f955615770413beca1be5___--.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_f64966f8cf2f955615770413beca1be5_::operator()(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _DWORD *v4; // r8
  int v5; // edi
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 280LL) + 144LL))(
                   *(_QWORD *)(*a1 + 280LL),
                   &v9);
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v2 + 40LL))(*v2, &v8);
  v4 = (_DWORD *)a1[1];
  LOBYTE(v4) = *v4 == 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)*v3 + 216LL))(
         *v3,
         *(unsigned int *)(*a1 + 352LL),
         v4);
  v6 = 0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v5 < 0 )
    return (unsigned int)v5;
  return v6;
}
