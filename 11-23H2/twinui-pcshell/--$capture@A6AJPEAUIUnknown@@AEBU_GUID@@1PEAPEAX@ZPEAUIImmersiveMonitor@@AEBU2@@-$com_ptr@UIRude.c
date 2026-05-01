/*
 * XREFs of ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIImmersiveMonitor@@AEBU2@@?$com_ptr@UIRudeWindowManager@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIImmersiveMonitor@@1@Z @ 0x18064C8A8
 * Callers:
 *     _lambda_d64370f1a346941d8f06e7674ed62dff_::operator() @ 0x18064CF8C (_lambda_d64370f1a346941d8f06e7674ed62dff_--operator().c)
 *     _lambda_fc0981708ed8a1dd999985f4c9497d81_::operator() @ 0x18064D0A8 (_lambda_fc0981708ed8a1dd999985f4c9497d81_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::com_ptr<IRudeWindowManager>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IImmersiveMonitor *,_GUID const &>(
        __int64 *a1,
        __int64 (__fastcall *a2)(_QWORD, GUID *, GUID *, __int64 *),
        _QWORD *a3)
{
  __int64 result; // rax

  if ( *a1 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
  result = a2(*a3, &IID_IRudeWindowManager, &IID_IRudeWindowManager, a1);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
