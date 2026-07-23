/*
 * XREFs of RtlpFcInsertChangeRegistration @ 0x18006110C
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180060D20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpFcInsertChangeRegistration(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  RtlAcquireSRWLockExclusive(&stru_180185EF0);
  v3 = (_QWORD *)qword_180185F00;
  if ( *(__int64 **)qword_180185F00 != &qword_180185EF8 )
    __fastfail(3u);
  *a2 = &qword_180185EF8;
  a2[1] = v3;
  *v3 = a2;
  qword_180185F00 = (__int64)a2;
  RtlReleaseSRWLockExclusive(&stru_180185EF0);
}
