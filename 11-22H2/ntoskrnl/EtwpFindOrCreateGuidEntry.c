/*
 * XREFs of EtwpFindOrCreateGuidEntry @ 0x1406BF740
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1406BE860 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMProvider @ 0x1406BF260 (EtwpRegisterUMProvider.c)
 *     EtwpRegisterKMProvider @ 0x14078DDD4 (EtwpRegisterKMProvider.c)
 * Callees:
 *     SeAccessCheck @ 0x140231630 (SeAccessCheck.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406BF870 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406BF9A4 (EtwpUnreferenceGuidEntry.c)
 *     SeCaptureSubjectContext @ 0x1407380C0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     EtwpAddGuidEntry @ 0x140781D88 (EtwpAddGuidEntry.c)
 */

__int64 __fastcall EtwpFindOrCreateGuidEntry(__int64 a1, __int64 a2, __int64 a3, char a4, ULONG_PTR *a5)
{
  unsigned int v6; // esi
  unsigned int v9; // ebx
  ULONG_PTR GuidEntryByGuid; // rdi
  void *v11; // rbx
  ACCESS_MASK v12; // r9d
  __int64 result; // rax
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-48h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-44h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-40h] BYREF

  v6 = a3;
  v9 = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, a3);
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, a2, v6)) != 0 )
  {
    if ( a4 )
    {
      v11 = *(void **)(GuidEntryByGuid + 72);
      AccessStatus = 0;
      GrantedAccess = 0;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContext(&SubjectContext);
      v12 = 2048;
      if ( v6 == 2 )
        v12 = 4096;
      SeAccessCheck(
        v11,
        &SubjectContext,
        0,
        v12,
        0,
        0LL,
        (PGENERIC_MAPPING)&EtwpGenericMapping,
        1,
        &GrantedAccess,
        &AccessStatus);
      SeReleaseSubjectContext(&SubjectContext);
      v9 = AccessStatus;
      if ( AccessStatus < 0 )
      {
        EtwpUnreferenceGuidEntry(GuidEntryByGuid);
        GuidEntryByGuid = 0LL;
      }
    }
  }
  else
  {
    v9 = -1073741801;
  }
  result = v9;
  *a5 = GuidEntryByGuid;
  return result;
}
