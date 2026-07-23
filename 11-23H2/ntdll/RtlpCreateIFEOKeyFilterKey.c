/*
 * XREFs of RtlpCreateIFEOKeyFilterKey @ 0x1800EF460
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x18006ECA0 (RtlStringFromGUIDEx.c)
 *     RtlRandomEx @ 0x18007D6D0 (RtlRandomEx.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwCreateKey @ 0x1800A1250 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpCreateIFEOKeyFilterKey(HANDLE *a1, void *a2, ACCESS_MASK a3)
{
  HANDLE v4; // rcx
  GUID *p_Guid; // rbx
  __int64 v8; // rdi
  NTSTATUS v9; // ebx
  ULONG Disposition; // [rsp+40h] [rbp-49h] BYREF
  ULONG Seed; // [rsp+44h] [rbp-45h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-41h] BYREF
  _UNICODE_STRING GuidString; // [rsp+50h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  GUID Guid; // [rsp+90h] [rbp+7h] BYREF

  Disposition = 1;
  v4 = 0LL;
  for ( KeyHandle = 0LL; ; v4 = KeyHandle )
  {
    if ( v4 )
      NtClose(v4);
    p_Guid = &Guid;
    Seed = MEMORY[0x7FFE0014];
    v8 = 8LL;
    do
    {
      LOWORD(p_Guid->Data1) = RtlRandomEx(&Seed);
      p_Guid = (GUID *)((char *)p_Guid + 2);
      --v8;
    }
    while ( v8 );
    v9 = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
    if ( v9 < 0 )
      break;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &GuidString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateKey(&KeyHandle, a3, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    RtlFreeUnicodeString(&GuidString);
    if ( v9 < 0 )
      break;
    if ( Disposition != 2 )
    {
      *a1 = KeyHandle;
      return (unsigned int)v9;
    }
  }
  return (unsigned int)v9;
}
