/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18005DA70
 * Callers:
 *     ?Invoke@ARM_EVENT@@UEAAXXZ @ 0x18005DA60 (-Invoke@ARM_EVENT@@UEAAXXZ.c)
 *     ?RecurringWaitCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800D3E90 (-RecurringWaitCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180127D78 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_class<void,>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    JUMPOUT(0x1800BD6BFLL);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
