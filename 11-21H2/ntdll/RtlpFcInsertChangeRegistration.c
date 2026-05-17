/*
 * XREFs of RtlpFcInsertChangeRegistration @ 0x180059928
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1800598A0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpFcInsertChangeRegistration(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *v5; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_180178C30, (unsigned __int64)a2, a3, a4);
  v5 = (_QWORD *)qword_180178C40;
  if ( *(__int64 **)qword_180178C40 != &qword_180178C38 )
    __fastfail(3u);
  *a2 = &qword_180178C38;
  a2[1] = v5;
  *v5 = a2;
  qword_180178C40 = (__int64)a2;
  return RtlReleaseSRWLockExclusive(&qword_180178C30);
}
