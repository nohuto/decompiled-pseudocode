/*
 * XREFs of RtlpGetRegistryHandle @ 0x18000AD18
 * Callers:
 *     RtlCheckRegistryKey @ 0x180008E10 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x180008E4C (RtlpQueryRegistryValues.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1800611A0 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x18007EC28 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlWriteRegistryValue @ 0x18008CF20 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x18008D030 (RtlDeleteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x1800F9CD0 (RtlCreateRegistryKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18000B5F0 (RtlAppendUnicodeToString.c)
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AD30 (RtlFormatCurrentUserKeyPath.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     ZwCreateKey @ 0x18009F190 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  __int64 v7; // rbx
  NTSTATUS appended; // ebx
  NTSTATUS v9; // eax
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-9h] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+58h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF

  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = (HANDLE)a2;
    return 0LL;
  }
  else
  {
    v7 = (unsigned int)a1;
    LODWORD(v7) = a1 & 0x7FFFFFFF;
    if ( a1 >= 0 )
      v7 = (unsigned int)a1;
    if ( (unsigned int)v7 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      Destination.Buffer = (wchar_t *)NtdllpAllocateStringRoutine(524LL, a2);
      if ( Destination.Buffer )
      {
        *(_DWORD *)&Destination.Length = 34340864;
        if ( !(_DWORD)v7 )
          goto LABEL_11;
        if ( (_DWORD)v7 == 5 && RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &CurrentUserKeyPath);
          RtlFreeUnicodeString(&CurrentUserKeyPath);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&Destination, RtlpRegistryPaths[v7]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( appended >= 0 )
          {
LABEL_11:
            appended = RtlAppendUnicodeToString(&Destination, a2);
            if ( appended >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &Destination;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( a3 )
                v9 = ZwCreateKey(a4, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              else
                v9 = NtOpenKey(a4, 0x82000000, &ObjectAttributes);
              appended = v9;
            }
          }
        }
        NtdllpFreeStringRoutine(Destination.Buffer);
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}
