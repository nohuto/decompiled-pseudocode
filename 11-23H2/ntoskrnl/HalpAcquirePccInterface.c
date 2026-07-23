/*
 * XREFs of HalpAcquirePccInterface @ 0x140935A54
 * Callers:
 *     HaliInitializePlatformDebugTriggers @ 0x140528330 (HaliInitializePlatformDebugTriggers.c)
 *     HalpStartPccCommand @ 0x140935E3C (HalpStartPccCommand.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14041B750 (ZwOpenFile.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     HalpQueryPccInterface @ 0x140935C90 (HalpQueryPccInterface.c)
 */

__int64 __fastcall HalpAcquirePccInterface(unsigned __int8 a1, UNICODE_STRING *a2, void *a3)
{
  int PccInterface; // edi
  int v5; // esi
  PVOID v6; // rbx
  void *v8; // [rsp+28h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+A8h] [rbp+28h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  Object = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  PccInterface = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = a1;
  IoStatusBlock = 0LL;
  if ( a2 && a2->Buffer )
  {
    ObjectAttributes.RootDirectory = 0LL;
    FileHandle = 0LL;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    PccInterface = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0, 0);
    if ( PccInterface >= 0 )
    {
      PccInterface = ObpReferenceObjectByHandleWithTag((ULONG_PTR)FileHandle, 0, 0LL, 0, 0x746C6644u, &Object, 0LL, 0LL);
      if ( PccInterface >= 0 )
      {
        v8 = a3;
        v6 = Object;
        PccInterface = HalpQueryPccInterface(*((PDEVICE_OBJECT *)Object + 1), v5, v8);
        ObfDereferenceObject(v6);
      }
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  return (unsigned int)PccInterface;
}
