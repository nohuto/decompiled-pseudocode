/*
 * XREFs of MiInjectThreadForHotPatch @ 0x140A379C4
 * Callers:
 *     MiHotPatchProcess @ 0x140A37534 (MiHotPatchProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x14041BF80 (ZwCreateThreadEx.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     PsGetThreadExitStatus @ 0x1407A0660 (PsGetThreadExitStatus.c)
 *     MiLogHotPatchOperationStatus @ 0x140A38FC8 (MiLogHotPatchOperationStatus.c)
 */

__int64 __fastcall MiInjectThreadForHotPatch(PVOID Argument, int a2, int a3)
{
  struct _KTHREAD *v6; // rdi
  struct _EX_RUNDOWN_REF *p_Blink; // rsi
  BOOLEAN v8; // al
  int v9; // r14d
  unsigned int v10; // ebx
  NTSTATUS ThreadExitStatus; // eax
  PVOID Object; // [rsp+68h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+7h] BYREF
  HANDLE ThreadHandle; // [rsp+F0h] [rbp+7Fh] BYREF

  memset(&ObjectAttributes, 0, 44);
  Timeout.QuadPart = 0LL;
  ThreadHandle = 0LL;
  v6 = 0LL;
  p_Blink = (struct _EX_RUNDOWN_REF *)&KeGetCurrentThread()->ApcState.Process[1].ProfileListHead.Blink;
  v8 = ExAcquireRundownProtection_0(p_Blink);
  v9 = v8;
  if ( !v8 )
  {
    v10 = -1073741558;
    goto LABEL_16;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ThreadExitStatus = ZwCreateThreadEx(
                       &ThreadHandle,
                       0x1FFFFFu,
                       &ObjectAttributes,
                       (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                       qword_140D1F3C0,
                       Argument,
                       0,
                       0LL,
                       0LL,
                       0LL,
                       0LL);
  if ( ThreadExitStatus >= 0 )
  {
    Object = 0LL;
    ThreadExitStatus = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v6 = (struct _KTHREAD *)Object;
    v10 = ThreadExitStatus;
    if ( ThreadExitStatus >= 0 )
    {
      ExReleaseRundownProtection_0(p_Blink);
      v9 = 0;
      if ( v6->SuspendCount || (*((_DWORD *)&v6->0 + 1) & 0x4000) != 0 )
      {
        ThreadExitStatus = 1073741825;
      }
      else
      {
        Timeout.QuadPart = -100000000LL;
        if ( KeWaitForSingleObject(v6, WrKernel, 0, 0, &Timeout) != 258 )
        {
          ThreadExitStatus = PsGetThreadExitStatus(v6);
          v10 = 0;
          if ( ThreadExitStatus >= 0 )
            goto LABEL_16;
          goto LABEL_14;
        }
        ThreadExitStatus = -1073740675;
      }
      v10 = 0;
    }
  }
  else
  {
    v10 = ThreadExitStatus;
  }
LABEL_14:
  MiLogHotPatchOperationStatus(a2, a3, (_DWORD)Argument, ThreadExitStatus, 4);
  if ( v9 )
    ExReleaseRundownProtection_0(p_Blink);
LABEL_16:
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
  if ( v6 )
    ObfDereferenceObject(v6);
  return v10;
}
