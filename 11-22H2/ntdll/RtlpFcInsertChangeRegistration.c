/*
 * XREFs of RtlpFcInsertChangeRegistration @ 0x18005B93C
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18005B550 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpFcInsertChangeRegistration(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  RtlAcquireSRWLockExclusive(&stru_180182EB0);
  v3 = (_QWORD *)qword_180182EC0;
  if ( *(__int64 **)qword_180182EC0 != &qword_180182EB8 )
    __fastfail(3u);
  *a2 = &qword_180182EB8;
  a2[1] = v3;
  *v3 = a2;
  qword_180182EC0 = (__int64)a2;
  RtlReleaseSRWLockExclusive(&stru_180182EB0);
}
