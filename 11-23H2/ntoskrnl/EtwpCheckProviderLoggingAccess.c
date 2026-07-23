/*
 * XREFs of EtwpCheckProviderLoggingAccess @ 0x14078117C
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x140781098 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140737E90 (SeCaptureSubjectContextEx.c)
 *     EtwpCheckGuidAccess @ 0x140781D54 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckProviderLoggingAccess(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a3 || (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 0LL;
  SeCaptureSubjectContextEx(0LL, *(PEPROCESS *)(a1 + 80), &SubjectContext);
  v5 = EtwpCheckGuidAccess(a2, 512LL, &SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return v5;
}
