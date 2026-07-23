/*
 * XREFs of LdrpGetNtPathFromDosPath @ 0x18002B2F4
 * Callers:
 *     LdrpResolveDllName @ 0x18002AA44 (LdrpResolveDllName.c)
 *     LdrpMapDllRetry @ 0x180072C9C (LdrpMapDllRetry.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BDC0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009F590 (ZwQueryAttributesFile.c)
 */

NTSTATUS __fastcall LdrpGetNtPathFromDosPath(_UNICODE_STRING *a1, _UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  ULONG v4; // eax
  _UNICODE_STRING *Buffer; // rcx
  _UNICODE_STRING v6; // xmm0
  _UNICODE_STRING *v7; // [rsp+40h] [rbp-39h] BYREF
  _UNICODE_STRING v8; // [rsp+48h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-21h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+88h] [rbp+Fh] BYREF

  result = RtlpDosPathNameToRelativeNtPathName(1, a1, a2, &v8, &v7, 0LL, 0LL);
  if ( result >= 0 )
  {
    if ( v7 == &v8 )
    {
      Buffer = (_UNICODE_STRING *)a2->Buffer;
      if ( &a2[1] != Buffer )
        NtdllpFreeStringRoutine(Buffer);
      v6 = v8;
      a2[1].Length = 0;
      *a2 = v6;
    }
    v4 = 64;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    if ( !LdrpUseImpersonatedDeviceMap )
      v4 = 2112;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Attributes = v4;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  }
  return result;
}
