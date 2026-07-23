/*
 * XREFs of RtlpLookupCurDirSetting @ 0x18006AB88
 * Callers:
 *     RtlpComputeSearchPath @ 0x18006A100 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18006A390 (RtlpComputeDllPath.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 */

__int64 __fastcall RtlpLookupCurDirSetting(PUNICODE_STRING ValueName, unsigned __int32 a2, volatile signed __int32 *a3)
{
  HANDLE v6; // rbx
  unsigned __int32 v7; // ecx
  __int64 result; // rax
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+4Ch] [rbp-2Ch]

  if ( !LdrpIsSecureProcess )
  {
    Handle = KeyHandle;
    v6 = KeyHandle;
    if ( !KeyHandle )
    {
      if ( NtOpenKey(&Handle, 1u, (POBJECT_ATTRIBUTES)&stru_180133580) < 0 )
      {
LABEL_7:
        v7 = a2;
        goto LABEL_8;
      }
      v6 = (HANDLE)_InterlockedCompareExchange64((volatile signed __int64 *)&KeyHandle, (signed __int64)Handle, 0LL);
      if ( v6 )
      {
        NtClose(Handle);
        Handle = v6;
      }
      else
      {
        v6 = Handle;
      }
    }
    if ( NtQueryValueKey(v6, ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0
      && ResultLength == 16 )
    {
      v7 = v12;
      if ( v12 <= 1 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
  v7 = 1;
LABEL_8:
  result = (unsigned int)_InterlockedCompareExchange(a3, v7, 0);
  if ( !(_DWORD)result )
    return v7;
  return result;
}
