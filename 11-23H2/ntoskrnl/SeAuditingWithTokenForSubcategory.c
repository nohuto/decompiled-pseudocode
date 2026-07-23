/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x1406BB280
 * Callers:
 *     ObInitProcess @ 0x1406B365C (ObInitProcess.c)
 *     PspInsertProcess @ 0x1406B9FD4 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x1406BB18C (SepAdtTokenRightAdjusted.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 *     PiPnpRtlSetObjectProperty @ 0x140796978 (PiPnpRtlSetObjectProperty.c)
 *     PipProcessStartPhase3 @ 0x14079BBB4 (PipProcessStartPhase3.c)
 *     ObCompleteObjectDuplication @ 0x1407BF804 (ObCompleteObjectDuplication.c)
 *     SeExchangePrimaryToken @ 0x1408405F8 (SeExchangePrimaryToken.c)
 *     SeAssignPrimaryToken @ 0x14084079C (SeAssignPrimaryToken.c)
 *     PipClearDevNodeProblem @ 0x1408693DC (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x14086952C (PipSetDevNodeProblem.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14087C944 (PiPnpRtlSetDeviceRegProperty.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA214 (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x140226EF4 (SepAuditingForSubCategory.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1409CD858 (SepAdtIncorporatePerUserPolicy.c)
 */

char __fastcall SeAuditingWithTokenForSubcategory(int a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int PrimaryToken; // r9d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v3 = (unsigned int)(a1 - 100);
  v8 = SepAuditingForSubCategory(a1, 1);
  if ( SepTokenPolicyCounter[v3] )
  {
    if ( a2 )
    {
      PrimaryToken = a2;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      PrimaryToken = (int)SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        PrimaryToken = (int)SubjectContext.ClientToken;
    }
    LOBYTE(v4) = 1;
    SepAdtIncorporatePerUserPolicy(v3, v4, 0, PrimaryToken, (__int64)&v8);
    if ( !a2 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  return v8;
}
