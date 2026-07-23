/*
 * XREFs of sub_14084565C @ 0x14084565C
 * Callers:
 *     sub_1408455C8 @ 0x1408455C8 (sub_1408455C8.c)
 * Callees:
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwSystemDebugControl @ 0x14041F080 (ZwSystemDebugControl.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     sub_14066D4BC @ 0x14066D4BC (sub_14066D4BC.c)
 *     sub_14070F2D8 @ 0x14070F2D8 (sub_14070F2D8.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140756AD4 @ 0x140756AD4 (sub_140756AD4.c)
 */

NTSTATUS __fastcall sub_14084565C(_QWORD *a1, char a2)
{
  UNICODE_STRING *v2; // rsi
  NTSTATUS result; // eax
  int v6; // eax
  NTSTATUS v7; // eax
  int SectionInformation; // eax
  PVOID v9; // rdx
  __int64 *v10; // rcx
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-29h] BYREF
  UNICODE_STRING InputBuffer; // [rsp+38h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  HANDLE FileHandle; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = (UNICODE_STRING *)(a1 + 2);
  v12 = 0LL;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  InputBuffer = 0LL;
  Handle = 0LL;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    InputBuffer = *v2;
    ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
  }
  ObjectAttributes.ObjectName = v2;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    ObjectAttributes.ObjectName = 0LL;
    v6 = sub_14066D4BC((__int64 *)&Handle, (int)&ObjectAttributes, 0LL, 12, (__int64)FileHandle, a2 | 2u);
    if ( v6 < 0 )
      KeBugCheckEx(0x6Bu, v6, 3uLL, 0LL, 0LL);
    ObCloseHandle(FileHandle, 0);
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    if ( v7 < 0 )
      KeBugCheckEx(0x6Bu, v7, 4uLL, 0LL, 0LL);
    ObCloseHandle(Handle, 0);
    SectionInformation = MmGetSectionInformation((__int64)Object, 2, (__int64)&v12);
    if ( SectionInformation < 0 )
      KeBugCheckEx(0x6Bu, SectionInformation, 8uLL, 0LL, 0LL);
    v9 = Object;
    v10 = (__int64 *)*a1;
    a1[7] = v12;
    sub_14070F2D8(v10, (__int64)v9);
    *(_QWORD *)(*a1 + 8LL) = 0LL;
    v11 = sub_140756AD4(*((struct _KPROCESS **)KeGetCurrentThread() + 23), (__int64)a1, 0, 1);
    if ( v11 < 0 )
      KeBugCheckEx(0x6Bu, v11, 5uLL, 0LL, 0LL);
    return 0;
  }
  return result;
}
