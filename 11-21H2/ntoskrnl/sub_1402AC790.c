/*
 * XREFs of sub_1402AC790 @ 0x1402AC790
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     sub_14066119C @ 0x14066119C (sub_14066119C.c)
 *     sub_1406A4A70 @ 0x1406A4A70 (sub_1406A4A70.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     sub_1406BF5F0 @ 0x1406BF5F0 (sub_1406BF5F0.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     sub_1406CF5D0 @ 0x1406CF5D0 (sub_1406CF5D0.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_1407563A0 @ 0x1407563A0 (sub_1407563A0.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     sub_140935320 @ 0x140935320 (sub_140935320.c)
 *     sub_140938A3C @ 0x140938A3C (sub_140938A3C.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     sub_1402AC840 @ 0x1402AC840 (sub_1402AC840.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_1402AC790(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &Object, HandleInformation);
  v7 = result;
  *a4 = Object;
  if ( result >= 0 )
  {
    if ( (unsigned __int8)sub_1402AC840() )
    {
      ObfDereferenceObject(*a4);
      return -1073739504;
    }
    else
    {
      return v7;
    }
  }
  return result;
}
