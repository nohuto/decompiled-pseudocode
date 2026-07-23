/*
 * XREFs of CmpIsSystemEntity @ 0x1407BA7DC
 * Callers:
 *     CmDoVirtualTest @ 0x140347BDC (CmDoVirtualTest.c)
 *     KCBNeedsVirtualImage @ 0x140347C1C (KCBNeedsVirtualImage.c)
 *     KCBNeedsVirtualImage_0 @ 0x140616990 (KCBNeedsVirtualImage_0.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD500 (CmpVEExecuteOpenLogic.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1407BA678 (CmpVEPerformOpenAccessCheck.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14020BB00 (PsGetCurrentThreadProcess.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140737E90 (SeCaptureSubjectContextEx.c)
 *     CmpIsVirtEnabledForSubject @ 0x1407BA86C (CmpIsVirtEnabledForSubject.c)
 */

bool __fastcall CmpIsSystemEntity(char a1, struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext, int *a3)
{
  char v3; // si
  bool v5; // bl
  int v7; // eax
  int v8; // eax
  struct _KPROCESS *CurrentThreadProcess; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v5 = 1;
  if ( CmpVEEnabled )
  {
    if ( a3 && (*a3 & 1) != 0 )
    {
      return (*a3 & 2) != 0;
    }
    else if ( a1 )
    {
      if ( !p_SubjectContext )
      {
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        SeCaptureSubjectContextEx(KeGetCurrentThread(), CurrentThreadProcess, &SubjectContext);
        p_SubjectContext = &SubjectContext;
        v3 = 1;
      }
      v5 = (unsigned __int8)CmpIsVirtEnabledForSubject(p_SubjectContext) == 0;
      if ( a3 )
      {
        v7 = *a3;
        if ( v5 )
          v8 = v7 | 3;
        else
          v8 = v7 | 5;
        *a3 = v8;
      }
      if ( v3 )
        SeReleaseSubjectContext(&SubjectContext);
    }
  }
  return v5;
}
