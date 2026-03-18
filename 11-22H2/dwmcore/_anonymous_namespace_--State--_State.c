/*
 * XREFs of _anonymous_namespace_::State::_State @ 0x1801CDB58
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800D667C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x18010B7C4 (_anonymous_namespace_--FramesReport--_FramesReport.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ??R?$default_delete@VCProcessAttributionObserver@@@std@@QEBAXPEAVCProcessAttributionObserver@@@Z @ 0x1801CDBFC (--R-$default_delete@VCProcessAttributionObserver@@@std@@QEBAXPEAVCProcessAttributionObserver@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

void __fastcall anonymous_namespace_::State::_State(__int64 a1)
{
  int v2; // eax
  void *v3; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    if ( *(_QWORD *)(a1 + 32) )
    {
      v2 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
      if ( v2 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v2, retaddr);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
  }
  WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)(a1 + 8), 0);
  CloseThreadpoolWork(*(PTP_WORK *)(a1 + 8));
  v3 = *(void **)(a1 + 40);
  if ( v3 )
  {
    anonymous_namespace_::FramesReport::_FramesReport(*(_QWORD *)(a1 + 40));
    operator delete(v3);
  }
  if ( *(_QWORD *)a1 )
    std::default_delete<CProcessAttributionObserver>::operator()();
}
