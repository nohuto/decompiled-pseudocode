/*
 * XREFs of VfUtilIsLocalSystem @ 0x140AC2754
 * Callers:
 *     ViKeInjectStatusAlerted @ 0x140AC0618 (ViKeInjectStatusAlerted.c)
 *     VfCheckUserHandle @ 0x140AD3D14 (VfCheckUserHandle.c)
 * Callees:
 *     SeAccessCheck @ 0x140231650 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140737CA0 (SeCaptureSubjectContextEx.c)
 *     IoGetFileObjectGenericMapping @ 0x1407EC7E0 (IoGetFileObjectGenericMapping.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140AC2A58 (ViInitializeLocalSystemDescriptor.c)
 */

__int64 __fastcall VfUtilIsLocalSystem(PEPROCESS Process)
{
  unsigned int v2; // ebx
  GENERIC_MAPPING *GenericMapping; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( ViInitializeLocalSystemDescriptor() )
  {
    SeCaptureSubjectContextEx(0LL, Process, &SubjectContext);
    GenericMapping = IoGetFileObjectGenericMapping();
    v2 = SeAccessCheck(
           ViLocalSystemDescriptor,
           &SubjectContext,
           0,
           1u,
           0,
           0LL,
           GenericMapping,
           1,
           &GrantedAccess,
           &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    return 1;
  }
  return v2;
}
