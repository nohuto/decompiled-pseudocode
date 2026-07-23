/*
 * XREFs of RtlpFcRemoveChangeRegistration @ 0x1800505B0
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x180050580 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpFcRemoveChangeRegistration(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax

  RtlAcquireSRWLockExclusive(&stru_180182EB0);
  v3 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v4 = (_QWORD *)a2[1], (_QWORD *)*v4 != a2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  RtlReleaseSRWLockExclusive(&stru_180182EB0);
}
