/*
 * XREFs of RtlpTestHookInitialize @ 0x180083B50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 */

__int64 __fastcall RtlpTestHookInitialize(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  int v4; // r8d
  int v5; // ecx
  HANDLE KeyHandle; // [rsp+30h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+70h] [rbp+37h] BYREF

  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18012C860;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 9u, &ObjectAttributes) >= 0
    && NtQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&stru_18012C850,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x18u,
         &ResultLength) >= 0 )
  {
    RtlpUserPolicies = *(_QWORD *)&KeyValueInformation[12];
    v4 = 1049601;
    if ( KeyValueInformation[12] > 0x14u || !_bittest(&v4, KeyValueInformation[12]) )
      LOBYTE(RtlpUserPolicies) = 0;
    if ( BYTE1(RtlpUserPolicies) > 0x14u || !_bittest(&v4, BYTE1(RtlpUserPolicies)) )
      BYTE1(RtlpUserPolicies) = 0;
    if ( BYTE2(RtlpUserPolicies) > 0x14u || (v5 = 1082401, !_bittest(&v5, BYTE2(RtlpUserPolicies))) )
      BYTE2(RtlpUserPolicies) = 0;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return 0LL;
}
