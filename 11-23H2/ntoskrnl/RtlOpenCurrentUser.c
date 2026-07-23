/*
 * XREFs of RtlOpenCurrentUser @ 0x1407FC480
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140371B9C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1407FADA0 (RtlFormatCurrentUserKeyPath.c)
 */

NTSTATUS __cdecl RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE CurrentUserKey)
{
  int v4; // ebx
  UNICODE_STRING CurrentUserKeyPath; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  CurrentUserKeyPath = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v4 = RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &CurrentUserKeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
    RtlFreeUnicodeString(&CurrentUserKeyPath);
  }
  if ( v4 == -1073741772 )
  {
    RtlInitUnicodeString(&CurrentUserKeyPath, L"\\Registry\\User\\.Default");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &CurrentUserKeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
  }
  return v4;
}
