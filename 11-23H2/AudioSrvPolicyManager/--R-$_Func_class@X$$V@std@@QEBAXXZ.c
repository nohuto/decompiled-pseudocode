/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18000F070
 * Callers:
 *     ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180022C80 (-WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180026530 (-DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE.c)
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
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
