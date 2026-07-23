/*
 * XREFs of sub_140964CB8 @ 0x140964CB8
 * Callers:
 *     sub_14075C68C @ 0x14075C68C (sub_14075C68C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     ZwDeleteFile @ 0x14041D260 (ZwDeleteFile.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 */

NTSTATUS sub_140964CB8()
{
  NTSTATUS result; // eax
  __int64 v1; // rcx
  char v2; // al
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\AppPatch\\drvpatch.sdb");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwDeleteFile(&ObjectAttributes);
  if ( result < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v1 + 1] = result;
    v2 = dword_140D04880;
    dword_140C2A220[2 * v1] = 590372;
    if ( (v2 & 2) != 0 )
      sub_14057D738(0LL, "KSE: Failed to delete patch shim database!\n");
    return sub_140368C88(0LL, (__int64)"KSE: Failed to delete patch shim database!\n");
  }
  return result;
}
