/*
 * XREFs of sub_140908CD0 @ 0x140908CD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IoGetDeviceObjectPointer @ 0x140710E60 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall sub_140908CD0(char *NotificationStructure, PVOID Context)
{
  int v2; // ebx
  __int64 v3; // rax
  void *v4; // rcx
  __int64 v5; // rax
  PDEVICE_OBJECT v6; // rbx
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp+8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp+10h] BYREF

  DeviceObject = 0LL;
  v2 = (int)Context;
  FileObject = 0LL;
  v3 = *(_QWORD *)(NotificationStructure + 4) - 0x11D046F0CB3A4005LL;
  if ( *(_QWORD *)(NotificationStructure + 4) == 0x11D046F0CB3A4005LL )
    v3 = *(_QWORD *)(NotificationStructure + 12) - 0x3F05139760008FB0LL;
  if ( v3 )
  {
    if ( IoGetDeviceObjectPointer(
           *((PUNICODE_STRING *)NotificationStructure + 5),
           0x100003u,
           &FileObject,
           &DeviceObject) >= 0 )
    {
      KeWaitForSingleObject(&stru_140C4C160, WrExecutive, 0, 0, 0LL);
      v5 = v2;
      v6 = DeviceObject;
      *(&qword_140D01480 + v5) = DeviceObject;
      KeSetEvent(&stru_140C4C160, 0, 0);
      ObfReferenceObject(v6);
      ObfDereferenceObject(FileObject);
    }
  }
  else
  {
    KeWaitForSingleObject(&stru_140C4C160, WrExecutive, 0, 0, 0LL);
    v4 = *(&qword_140D01480 + v2);
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      *(&qword_140D01480 + v2) = 0LL;
    }
    KeSetEvent(&stru_140C4C160, 0, 0);
  }
  return 0LL;
}
