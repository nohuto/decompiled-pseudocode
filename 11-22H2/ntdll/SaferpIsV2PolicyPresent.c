/*
 * XREFs of SaferpIsV2PolicyPresent @ 0x180073418
 * Callers:
 *     LdrpCodeAuthzCheckDllAllowedSrpV2 @ 0x1800733D0 (LdrpCodeAuthzCheckDllAllowedSrpV2.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     NtOpenFile @ 0x18009F450 (NtOpenFile.c)
 */

__int64 __fastcall SaferpIsV2PolicyPresent(_DWORD *a1)
{
  int v2; // eax
  int ValueKey; // ebx
  HANDLE v5; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v7[8]; // [rsp+38h] [rbp-31h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v10[4]; // [rsp+60h] [rbp-9h] BYREF
  int v11; // [rsp+64h] [rbp-5h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]

  *a1 = 0;
  Handle = 0LL;
  v2 = NtOpenKey(&Handle, 131353LL, &unk_180131620);
  ValueKey = v2;
  if ( v2 < 0 )
  {
    if ( v2 != -1073741772 )
      goto LABEL_7;
    goto LABEL_15;
  }
  ValueKey = NtQueryValueKey(Handle, &unk_180131610, 2LL, v10, 80, v7);
  if ( ValueKey >= 0 && v11 == 4 && v12 == 4 )
    *a1 = v13 != 0;
  else
    ValueKey = 0;
  if ( !*a1 )
  {
    if ( NtOpenFile(&FileHandle, 0x100000u, (POBJECT_ATTRIBUTES)&ObjectAttributes, &IoStatusBlock, 7u, 0x4021u) >= 0 )
    {
      v5 = FileHandle;
      *a1 = 1;
      NtClose(v5);
    }
LABEL_15:
    ValueKey = 0;
  }
LABEL_7:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)ValueKey;
}
