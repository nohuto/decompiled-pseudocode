/*
 * XREFs of wil::details::lambda_call__lambda_0efa840e8179dde10a4fd154e3e5d6e3___::_lambda_call__lambda_0efa840e8179dde10a4fd154e3e5d6e3___ @ 0x14005EAE4
 * Callers:
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$5 @ 0x140035F77 (_CAudioDeviceGraph--Initialize_--_1_--dtor$5.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_0efa840e8179dde10a4fd154e3e5d6e3___::_lambda_call__lambda_0efa840e8179dde10a4fd154e3e5d6e3___(
        _BYTE *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = *(_QWORD *)a1;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 152LL);
    if ( v2 )
    {
      *(_QWORD *)(v1 + 152) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
}
