/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x180009B8C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18000B3D0 (RtlAppendUnicodeToString.c)
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800192F0 (RtlAppendUnicodeStringToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AB50 (RtlFormatCurrentUserKeyPath.c)
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrLoadDll @ 0x18002A6D0 (LdrLoadDll.c)
 *     LdrUnloadDll @ 0x18002D3E0 (LdrUnloadDll.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     ZwQueryKey @ 0x1800A1170 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // edi
  int v1; // esi
  NTSTATUS Key; // ebx
  NTSTATUS v4; // ebx
  NTSTATUS ValueKey; // ebx
  PVOID v6; // rbx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v9; // [rsp+48h] [rbp-C0h] BYREF
  PVOID ProcedureAddress; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  PVOID DllHandle; // [rsp+70h] [rbp-98h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+78h] [rbp-90h] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+80h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-78h] BYREF
  _BYTE KeyInformation[20]; // [rsp+C0h] [rbp-48h] BYREF
  int v18; // [rsp+D4h] [rbp-34h]
  _BYTE KeyValueInformation[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v20; // [rsp+FCh] [rbp-Ch]
  int v21; // [rsp+100h] [rbp-8h]
  unsigned int v22; // [rsp+104h] [rbp-4h]
  _BYTE v23[4]; // [rsp+148h] [rbp+40h] BYREF
  int v24; // [rsp+14Ch] [rbp+44h]
  int v25; // [rsp+150h] [rbp+48h]
  int v26; // [rsp+154h] [rbp+4Ch]
  PVOID *retaddr; // [rsp+1C0h] [rbp+B8h]

  v0 = 0;
  v1 = 0;
  DllHandle = 0LL;
  ProcedureAddress = 0LL;
  if ( LdrpIsSecureProcess )
    return 0LL;
  RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
  if ( (unsigned __int16)(OutHeaders->OptionalHeader.Subsystem - 2) > 1u )
    return 0LL;
  if ( NtOpenKey(&KeyHandle, 3u, (POBJECT_ATTRIBUTES)&::ObjectAttributes) < 0
    || (v4 = NtQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_1801346D8,
               KeyValuePartialInformation,
               v23,
               0x50u,
               (PULONG)&v9),
        NtClose(KeyHandle),
        v4 < 0)
    || v24 != 4
    || v25 != 4
    || !v26 )
  {
    v9 = 0LL;
    if ( NtOpenKey(&v9, 0x20019u, &stru_180181398) >= 0 )
    {
      Key = ZwQueryKey(v9, KeyFullInformation, KeyInformation, 0x30u, ResultLength);
      NtClose(v9);
      if ( Key == -2147483643 || Key >= 0 )
      {
        if ( v18 )
          v1 = 2;
      }
    }
    if ( NtOpenKey(&Handle, 1u, (POBJECT_ATTRIBUTES)&stru_180133120) >= 0 )
    {
      if ( NtQueryValueKey(
             Handle,
             (PUNICODE_STRING)&ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x50u,
             ResultLength) >= 0
        && v20 == 4
        && v21 == 4
        && v22 > 1 )
      {
        v1 = 1;
      }
      NtClose(Handle);
    }
    if ( v1 != 1 && RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
    {
      Destination.Length = 0;
      if ( (unsigned int)CurrentUserKeyPath.Length + 120 <= 0xFFFE )
      {
        Destination.MaximumLength = CurrentUserKeyPath.Length + 120;
        Destination.Buffer = (wchar_t *)RtlAllocateHeap(
                                          NtCurrentPeb()->ProcessHeap,
                                          NtdllBaseTag + 1572864,
                                          (unsigned __int16)(CurrentUserKeyPath.Length + 120));
        if ( Destination.Buffer )
        {
          if ( RtlAppendUnicodeStringToString(&Destination, &CurrentUserKeyPath) >= 0
            && RtlAppendUnicodeToString(
                 &Destination,
                 L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( NtOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
            {
              ValueKey = NtQueryValueKey(
                           Handle,
                           (PUNICODE_STRING)&ValueName,
                           KeyValuePartialInformation,
                           KeyValueInformation,
                           0x50u,
                           ResultLength);
              NtClose(Handle);
              if ( ValueKey >= 0 && v20 == 4 && v21 == 4 && v22 > 1 )
                v1 = 1;
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
        }
      }
      RtlFreeUnicodeString(&CurrentUserKeyPath);
    }
    if ( v1 )
    {
      if ( v1 == 2 )
      {
        LdrpSaferIsDllAllowedRoutine = __ROR8__(
                                         (unsigned __int64)LdrpCodeAuthzCheckDllAllowedSrpV2 ^ MEMORY[0x7FFE0330],
                                         MEMORY[0x7FFE0330] & 0x3F);
        LdrpAdvapi32DllHandle = 0x180000000uLL;
      }
      else if ( LdrLoadDll(0LL, 0LL, (PUNICODE_STRING)&stru_1801346C8, &DllHandle) >= 0 )
      {
        v6 = DllHandle;
        if ( LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_1801346E8, 0, &ProcedureAddress, 0, retaddr) >= 0
          && ProcedureAddress )
        {
          LdrpSaferIsDllAllowedRoutine = __ROR8__(
                                           (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                           MEMORY[0x7FFE0330] & 0x3F);
          LdrpAdvapi32DllHandle = (__int64)v6;
        }
        else
        {
          LdrUnloadDll(v6);
          return (unsigned int)-1073741511;
        }
      }
      else
      {
        return (unsigned int)-1073741515;
      }
    }
  }
  return v0;
}
