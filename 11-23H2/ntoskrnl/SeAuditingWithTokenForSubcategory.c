/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x1406BB250
 * Callers:
 *     ObInitProcess @ 0x1406B362C (ObInitProcess.c)
 *     PspInsertProcess @ 0x1406B9FA4 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x1406BB15C (SepAdtTokenRightAdjusted.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 *     PiPnpRtlSetObjectProperty @ 0x140796788 (PiPnpRtlSetObjectProperty.c)
 *     PipProcessStartPhase3 @ 0x14079B9C4 (PipProcessStartPhase3.c)
 *     ObCompleteObjectDuplication @ 0x1407BF534 (ObCompleteObjectDuplication.c)
 *     SeExchangePrimaryToken @ 0x1408402F8 (SeExchangePrimaryToken.c)
 *     SeAssignPrimaryToken @ 0x14084049C (SeAssignPrimaryToken.c)
 *     PipClearDevNodeProblem @ 0x14086919C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408692EC (PipSetDevNodeProblem.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14087C704 (PiPnpRtlSetDeviceRegProperty.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA014 (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x140226DE4 (SepAuditingForSubCategory.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737C70 (SeCaptureSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1409CD658 (SepAdtIncorporatePerUserPolicy.c)
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
