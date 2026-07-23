/*
 * XREFs of HalpTimerRestoreProcessorCounter @ 0x14050B770
 * Callers:
 *     HalpPostSleepMP @ 0x140A96E18 (HalpPostSleepMP.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall HalpTimerRestoreProcessorCounter(__int64 a1, __int64 a2))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  unsigned __int64 v3; // r8

  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpTimerSavedProcessorCounter;
  v3 = *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * a2);
  if ( qword_140C624A8 )
  {
    if ( !(_DWORD)a2 && HalpTimerIsReferenceTimeSaved )
    {
      result = qword_140C62680;
      if ( qword_140C62680 )
        return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C62680(
                                                                 (unsigned int)HalpTimerSavedSequenceNumber,
                                                                 HalpTimerSavedReferenceTime,
                                                                 v3);
    }
  }
  else
  {
    result = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(HalpTimerSavedProcessorCounter + 8 * a2);
    __writemsr(0x10u, v3);
  }
  return result;
}
