/*
 * XREFs of sub_1406B67A0 @ 0x1406B67A0
 * Callers:
 *     sub_14023BD3C @ 0x14023BD3C (sub_14023BD3C.c)
 *     sub_14023BD7C @ 0x14023BD7C (sub_14023BD7C.c)
 *     sub_14053F084 @ 0x14053F084 (sub_14053F084.c)
 *     sub_1406B6444 @ 0x1406B6444 (sub_1406B6444.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_1407C64A0 @ 0x1407C64A0 (sub_1407C64A0.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     sub_1406B6830 @ 0x1406B6830 (sub_1406B6830.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

bool __fastcall sub_1406B67A0(char a1, struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext, int *a3)
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
  if ( byte_140C097BD )
  {
    if ( a3 && (*a3 & 1) != 0 )
    {
      return (*a3 & 2) != 0;
    }
    else if ( a1 )
    {
      if ( !p_SubjectContext )
      {
        CurrentThreadProcess = (struct _KPROCESS *)PsGetCurrentThreadProcess();
        SeCaptureSubjectContextEx(KeGetCurrentThread(), CurrentThreadProcess, &SubjectContext);
        p_SubjectContext = &SubjectContext;
        v3 = 1;
      }
      v5 = (unsigned __int8)sub_1406B6830(p_SubjectContext) == 0;
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
