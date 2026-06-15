/*
 * XREFs of WPP_SF_qd @ 0x1400529C8
 * Callers:
 *     ?ValidateInheritedHandle@CAudioDGModule@@QEAA_NPEAX@Z @ 0x1400524A8 (-ValidateInheritedHandle@CAudioDGModule@@QEAA_NPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_131b8c4e0fcd3ed8c88f07f30abb8f12_Traceguids, 10LL, (__int64 *)va);
}
