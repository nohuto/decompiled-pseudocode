/*
 * XREFs of ?QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@3@@Z @ 0x1800D38EC
 * Callers:
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D429C (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ @ 0x1800E5954 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ.c)
 * Callees:
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180051A98 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18005BAA8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x1800D396C (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSerialWorkQueue::QueueRecurringWaitItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v12; // [rsp+38h] [rbp-50h] BYREF

  v8 = std::function<void (void)>::function<void (void)>((__int64)&v12, a3);
  LODWORD(a2) = CSerialWorkQueue::QueueWaitItemInternal(a1, a2, v9, v8, a4);
  std::_Func_class<void,>::_Tidy(a3, v10);
  return (unsigned int)a2;
}
