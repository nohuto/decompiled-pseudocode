/*
 * XREFs of FsRtlLookupPerFileContext @ 0x140258F50
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x14029EDB0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1402AFA70 (ExReleaseAutoExpandPushLockShared.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlLookupPerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  char *v3; // rcx
  struct _FSRTL_PER_FILE_CONTEXT *v4; // rdi
  struct _FSRTL_PER_FILE_CONTEXT **v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // r8
  struct _FSRTL_PER_FILE_CONTEXT *j; // rax
  struct _FSRTL_PER_FILE_CONTEXT *i; // rcx

  v3 = (char *)*PerFileContextPointer;
  v4 = 0LL;
  if ( !v3 )
    return 0LL;
  v8 = (struct _FSRTL_PER_FILE_CONTEXT **)(v3 + 16);
  if ( *v8 == (struct _FSRTL_PER_FILE_CONTEXT *)v8 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v10 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)v3, 0LL);
  if ( InstanceId )
  {
    for ( i = *v8; i != (struct _FSRTL_PER_FILE_CONTEXT *)v8; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
      {
        v4 = i;
        break;
      }
    }
  }
  else if ( OwnerId )
  {
    for ( j = *v8; j != (struct _FSRTL_PER_FILE_CONTEXT *)v8; j = (struct _FSRTL_PER_FILE_CONTEXT *)j->Links.Flink )
    {
      if ( j->OwnerId == OwnerId )
      {
        v4 = j;
        break;
      }
    }
  }
  else if ( *v8 != (struct _FSRTL_PER_FILE_CONTEXT *)v8 )
  {
    v4 = *v8;
  }
  ExReleaseAutoExpandPushLockShared(v10, 0LL);
  sub_1402F9540(KeGetCurrentThread());
  return v4;
}
