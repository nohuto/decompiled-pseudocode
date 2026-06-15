/*
 * XREFs of wil::details::lambda_call__lambda_9ea07bbdce8e3736806061d631deda5d___::_lambda_call__lambda_9ea07bbdce8e3736806061d631deda5d___ @ 0x14005EB34
 * Callers:
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$3 @ 0x140035F25 (_CAudioDeviceGraph--Initialize_--_1_--dtor$3.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_9ea07bbdce8e3736806061d631deda5d___::_lambda_call__lambda_9ea07bbdce8e3736806061d631deda5d___(
        _BYTE *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = *(_QWORD *)a1;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
    if ( v2 )
    {
      *(_QWORD *)(v1 + 144) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
}
