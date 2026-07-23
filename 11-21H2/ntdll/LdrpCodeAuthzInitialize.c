/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x180082D6C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrUnloadDll @ 0x180038270 (LdrUnloadDll.c)
 *     LdrLoadDll @ 0x18003AE00 (LdrLoadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180047DC0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     ZwQueryKey @ 0x1800A4330 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // edi
  char v1; // si
  NTSTATUS v3; // ebx
  NTSTATUS Key; // ebx
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
  DllHandle = 0LL;
  ProcedureAddress = 0LL;
  if ( LdrpIsSecureProcess )
    return 0LL;
  RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
  if ( (unsigned __int16)(OutHeaders->OptionalHeader.Subsystem - 2) > 1u )
    return 0LL;
  if ( NtOpenKey(&KeyHandle, 3u, (POBJECT_ATTRIBUTES)&stru_18012C7A0) < 0
    || (v3 = NtQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_18012D680,
               KeyValuePartialInformation,
               v23,
               0x50u,
               (PULONG)&v9),
        NtClose(KeyHandle),
        v3 < 0)
    || v24 != 4
    || v25 != 4
    || !v26 )
  {
    v9 = 0LL;
    v1 = 0;
    if ( NtOpenKey(&v9, 0x20019u, &stru_180174398) >= 0 )
    {
      Key = ZwQueryKey(v9, KeyFullInformation, KeyInformation, 0x30u, ResultLength);
      NtClose(v9);
      if ( Key == -2147483643 || Key >= 0 )
      {
        if ( v18 )
          goto LABEL_26;
      }
    }
    if ( NtOpenKey(&Handle, 1u, (POBJECT_ATTRIBUTES)&stru_18012C770) >= 0 )
    {
      if ( NtQueryValueKey(
             Handle,
             (PUNICODE_STRING)&stru_18012C760,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x50u,
             ResultLength) >= 0
        && v20 == 4
        && v21 == 4
        && v22 > 1 )
      {
        v1 = 1;
        NtQueryValueKey(
          Handle,
          (PUNICODE_STRING)&stru_18012D670,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x50u,
          ResultLength);
      }
      NtClose(Handle);
      if ( v1 )
        goto LABEL_26;
    }
    if ( RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
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
                           (PUNICODE_STRING)&stru_18012C760,
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
      if ( v1 )
      {
LABEL_26:
        if ( LdrLoadDll(0LL, 0LL, (PUNICODE_STRING)&stru_18012D660, &DllHandle) >= 0 )
        {
          v6 = DllHandle;
          if ( LdrGetProcedureAddressForCaller(
                 DllHandle,
                 (PANSI_STRING)&stru_18012D690,
                 0,
                 &ProcedureAddress,
                 0,
                 retaddr) >= 0
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
  }
  return v0;
}
