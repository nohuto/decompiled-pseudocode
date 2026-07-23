/*
 * XREFs of IoRegisterFsRegistrationChangeMountAware @ 0x140859F30
 * Callers:
 *     IoRegisterFsRegistrationChange @ 0x140936460 (IoRegisterFsRegistrationChange.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IoGetActivityIdThread @ 0x1402E0960 (IoGetActivityIdThread.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140557FF8 @ 0x140557FF8 (sub_140557FF8.c)
 *     sub_140558320 @ 0x140558320 (sub_140558320.c)
 *     sub_140558450 @ 0x140558450 (sub_140558450.c)
 *     FsRtlSetDriverBacking @ 0x14080F640 (FsRtlSetDriverBacking.c)
 *     sub_14085A0CC @ 0x14085A0CC (sub_14085A0CC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChangeMountAware(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine,
        BOOLEAN SynchronizeWithMounts)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // ebx
  _QWORD *Pool2; // rax
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rbx
  const GUID *ActivityIdThread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx

  if ( dword_140D011B0 && !sub_140558320((const void **)&DriverObject->DriverName) )
  {
    if ( (byte_140C474F8 & 4) != 0 )
    {
      v14 = DriverObject->DriverName.Length >> 1;
      ActivityIdThread = (const GUID *)IoGetActivityIdThread();
      sub_140558450(v17, v16, ActivityIdThread, v14, (__int64)DriverObject->DriverName.Buffer);
    }
    return -1073741637;
  }
  result = FsRtlSetDriverBacking((__int64)DriverObject, 1);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( !SynchronizeWithMounts )
  {
LABEL_22:
    ExAcquireResourceExclusiveLite(&stru_140C46E20, 1u);
    goto LABEL_5;
  }
  if ( !ExAcquireResourceExclusiveLite(&stru_140C46E20, 0) )
  {
    if ( sub_140557FF8() )
    {
      v8 = -1073741267;
      goto LABEL_9;
    }
    goto LABEL_22;
  }
LABEL_5:
  if ( (__int64 *)qword_140C46FA0 != &qword_140C46FA0
    && *(PDRIVER_OBJECT *)(qword_140C46FA8 + 16) == DriverObject
    && *(PDRIVER_FS_NOTIFICATION *)(qword_140C46FA8 + 24) == DriverNotificationRoutine )
  {
    ExReleaseResourceLite(&stru_140C46E20);
    v8 = -1073741768;
LABEL_9:
    sub_1402F9540((__int64)KeGetCurrentThread());
    return v8;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1933995849LL);
  if ( !Pool2 )
  {
    ExReleaseResourceLite(&stru_140C46E20);
    v8 = -1073741670;
    goto LABEL_9;
  }
  Pool2[2] = DriverObject;
  Pool2[3] = DriverNotificationRoutine;
  v10 = (_QWORD *)qword_140C46FA8;
  if ( *(__int64 **)qword_140C46FA8 != &qword_140C46FA0 )
    __fastfail(3u);
  *Pool2 = &qword_140C46FA0;
  Pool2[1] = v10;
  *v10 = Pool2;
  qword_140C46FA8 = (__int64)Pool2;
  if ( SynchronizeWithMounts == 1 )
  {
    while ( dword_140CE2000 )
    {
      ++dword_140D0111C;
      ExReleaseResourceLite(&stru_140C46E20);
      KeWaitForSingleObject(&stru_140C472E0, Executive, 0, 0, 0LL);
      ExAcquireResourceExclusiveLite(&stru_140C46E20, 1u);
      if ( --dword_140D0111C )
      {
        if ( !dword_140CE2000 )
          break;
      }
      KeResetEvent(&stru_140C472E0);
    }
  }
  sub_14085A0CC(&qword_140C46F20, DriverNotificationRoutine, 0LL);
  LOBYTE(v11) = 1;
  sub_14085A0CC(&qword_140C46F40, DriverNotificationRoutine, v11);
  LOBYTE(v12) = 1;
  sub_14085A0CC(&qword_140C46F30, DriverNotificationRoutine, v12);
  LOBYTE(v13) = 1;
  sub_14085A0CC(&qword_140C46F10, DriverNotificationRoutine, v13);
  ExReleaseResourceLite(&stru_140C46E20);
  sub_1402F9540((__int64)KeGetCurrentThread());
  ObfReferenceObject(DriverObject);
  return 0;
}
