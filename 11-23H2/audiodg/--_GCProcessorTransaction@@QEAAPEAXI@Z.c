/*
 * XREFs of ??_GCProcessorTransaction@@QEAAPEAXI@Z @ 0x14008EE34
 * Callers:
 *     wil::details::lambda_call__lambda_fd363d759ea9383e34f29f9fac21f9f1___::_lambda_call__lambda_fd363d759ea9383e34f29f9fac21f9f1___ @ 0x14008EC3C (wil--details--lambda_call__lambda_fd363d759ea9383e34f29f9fac21f9f1___--_lambda_call__lambda_fd36.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14008EE60 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 */

// Hidden C++ exception states: #wind=1
CProcessorTransaction *__fastcall CProcessorTransaction::`scalar deleting destructor'(CProcessorTransaction *this)
{
  void *v2; // rax
  int v3; // r8d

  v2 = (void *)AERTGetDLLRTHeap();
  AERTFree(this, v2, v3);
  return this;
}
