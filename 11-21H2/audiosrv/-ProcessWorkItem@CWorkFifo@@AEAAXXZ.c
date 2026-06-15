/*
 * XREFs of ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180127D78
 * Callers:
 *     ?WorkCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180129590 (-WorkCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18005DA70 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??4?$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C6C2C (--4-$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800D4958 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x180126EE0 (-GetWorkItem@CWorkFifo@@AEAA-AV-$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWorkFifo::ProcessWorkItem(CWorkFifo *this)
{
  void *v2; // rdx
  __int64 *WorkItem; // rax
  __int64 *v4; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+38h] [rbp-10h]

  CWorkFifo::GetWorkItem((__int64)this, &v4);
  while ( !*((_BYTE *)this + 136) && v4 )
  {
    std::_Func_class<void,>::operator()(*v4);
    WorkItem = CWorkFifo::GetWorkItem((__int64)this, &v6);
    std::shared_ptr<CXvmPowerReference>::operator=(&v4, WorkItem);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  if ( !*((_BYTE *)this + 136) && !*((_BYTE *)this + 137) )
    wil::details::SetEvent(*((wil::details **)this + 28), v2);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
