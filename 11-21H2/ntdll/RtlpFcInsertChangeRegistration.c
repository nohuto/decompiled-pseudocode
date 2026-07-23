/*
 * XREFs of RtlpFcInsertChangeRegistration @ 0x180059928
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1800598A0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpFcInsertChangeRegistration(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  RtlAcquireSRWLockExclusive(&stru_180178C30);
  v3 = (_QWORD *)qword_180178C40;
  if ( *(__int64 **)qword_180178C40 != &qword_180178C38 )
    __fastfail(3u);
  *a2 = &qword_180178C38;
  a2[1] = v3;
  *v3 = a2;
  qword_180178C40 = (__int64)a2;
  RtlReleaseSRWLockExclusive(&stru_180178C30);
}
