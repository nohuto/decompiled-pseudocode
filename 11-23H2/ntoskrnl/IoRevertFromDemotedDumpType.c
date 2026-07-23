/*
 * XREFs of IoRevertFromDemotedDumpType @ 0x140551074
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x14057A91C (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x14057B038 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *IoRevertFromDemotedDumpType())(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_140C6AC70;
  if ( qword_140C6AC70 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C6AC70(8LL, 0LL);
  return result;
}
