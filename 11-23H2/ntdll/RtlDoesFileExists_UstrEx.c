/*
 * XREFs of RtlDoesFileExists_UstrEx @ 0x18001E0B8
 * Callers:
 *     RtlDoesFileExists_UEx @ 0x18000951C (RtlDoesFileExists_UEx.c)
 *     RtlDosSearchPath_Ustr @ 0x18001A3D0 (RtlDosSearchPath_Ustr.c)
 *     sxsisol_RespectDotLocal @ 0x1800EB0B0 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BBE0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwQueryAttributesFile @ 0x1800A1650 (ZwQueryAttributesFile.c)
 */

bool __fastcall RtlDoesFileExists_UstrEx(_UNICODE_STRING *a1, char a2)
{
  char v2; // bl
  PVOID v4; // rsi
  void *v5; // rax
  NTSTATUS v6; // edi
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-49h] BYREF
  __int128 v9; // [rsp+50h] [rbp-39h] BYREF
  void *v10; // [rsp+60h] [rbp-29h]
  PVOID v11; // [rsp+68h] [rbp-21h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 0;
  if ( (int)RtlpDosPathNameToRelativeNtPathName(2, a1, 0LL, (_UNICODE_STRING *)BaseAddress, 0LL, 0LL, (__int64)&v9) < 0 )
    return 0;
  v4 = BaseAddress[1];
  if ( (_WORD)v9 )
  {
    v5 = v10;
    *(_OWORD *)BaseAddress = v9;
  }
  else
  {
    v5 = 0LL;
    v10 = 0LL;
  }
  ObjectAttributes.RootDirectory = v5;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
  {
    NtClose(*((HANDLE *)v11 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( v6 >= 0 )
    return 1;
  if ( v6 == -1073741790 || v6 == -1073741757 )
    return a2 != 0;
  return v2;
}
