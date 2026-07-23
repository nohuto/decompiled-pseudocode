/*
 * XREFs of RtlOpenCurrentUser @ 0x18000EAA0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18000C904 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AD30 (RtlFormatCurrentUserKeyPath.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 */

NTSTATUS __cdecl RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE CurrentUserKey)
{
  int v4; // ebx
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  v4 = RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &CurrentUserKeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = NtOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
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
    return NtOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
  }
  return v4;
}
