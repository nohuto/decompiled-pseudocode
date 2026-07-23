/*
 * XREFs of LdrpResValidateFilePath @ 0x1800EFF60
 * Callers:
 *     LdrResSearchResource @ 0x180064700 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlDetermineDosPathNameType_U @ 0x180060670 (RtlDetermineDosPathNameType_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x18007E1E0 (RtlDosPathNameToNtPathName_U.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A4810 (ZwQueryAttributesFile.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC820 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResValidateFilePath(PCWSTR DosFileName)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  NTSTATUS v6; // edi
  RTL_PATH_TYPE v7; // ecx
  wchar_t *Buffer; // rbx
  int v10; // [rsp+28h] [rbp-A0h] BYREF
  const wchar_t *v11; // [rsp+30h] [rbp-98h]
  int v12; // [rsp+38h] [rbp-90h] BYREF
  const wchar_t *v13; // [rsp+40h] [rbp-88h]
  _UNICODE_STRING NtFileName; // [rsp+48h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-70h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+88h] [rbp-40h] BYREF

  v10 = 3932218;
  v11 = L"LdrpResValidateFilePath Enter";
  v12 = 3801144;
  v13 = L"LdrpResValidateFilePath Exit";
  v2 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v3 = 2147353477LL;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    v4 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v5 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v10, *(unsigned __int8 *)v5);
  }
  else
  {
    v4 = 2147353476LL;
  }
  if ( !DosFileName
    || (v7 = RtlDetermineDosPathNameType_U(DosFileName), ((v7 - 1) & 0xFFFFFFFA) != 0)
    || v7 == RtlPathTypeRelative )
  {
    v6 = -1073741811;
  }
  else if ( RtlDosPathNameToNtPathName_U(DosFileName, &NtFileName, 0LL, 0LL) )
  {
    Buffer = NtFileName.Buffer;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &NtFileName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    if ( v6 >= 0 )
      v6 = (FileInformation.FileAttributes & 0x10) != 0 ? 0xC000000D : 0;
  }
  else
  {
    v6 = -1073741766;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v2 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v12, *(unsigned __int8 *)v4);
  }
  return (unsigned int)v6;
}
