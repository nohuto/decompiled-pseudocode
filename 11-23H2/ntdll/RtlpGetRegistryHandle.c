/*
 * XREFs of RtlpGetRegistryHandle @ 0x18000AAF8
 * Callers:
 *     RtlCheckRegistryKey @ 0x180008BF0 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x180008C2C (RtlpQueryRegistryValues.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x18005E310 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x18007F298 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlWriteRegistryValue @ 0x18008D720 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x18008D830 (RtlDeleteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x1800FB0E0 (RtlCreateRegistryKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18000B3D0 (RtlAppendUnicodeToString.c)
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800192F0 (RtlAppendUnicodeStringToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AB50 (RtlFormatCurrentUserKeyPath.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1800A1250 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v7; // rbx
  int appended; // ebx
  int v9; // eax
  int v11; // [rsp+48h] [rbp-9h] BYREF
  __int64 StringRoutine; // [rsp+50h] [rbp-1h]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp+7h] BYREF
  int v14; // [rsp+68h] [rbp+17h] BYREF
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  int *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  __int128 v18; // [rsp+88h] [rbp+37h]

  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = a2;
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
      StringRoutine = NtdllpAllocateStringRoutine(524LL, a2);
      if ( StringRoutine )
      {
        v11 = 34340864;
        if ( !(_DWORD)v7 )
          goto LABEL_11;
        if ( (_DWORD)v7 == 5 && (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&v11, &UnicodeString);
          RtlFreeUnicodeString(&UnicodeString);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&v11, RtlpRegistryPaths[v7]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&v11, L"\\");
          if ( appended >= 0 )
          {
LABEL_11:
            appended = RtlAppendUnicodeToString(&v11, a2);
            if ( appended >= 0 )
            {
              v14 = 48;
              v16 = &v11;
              v15 = 0LL;
              v17 = 576;
              v18 = 0LL;
              if ( a3 )
                v9 = ZwCreateKey(a4, 0x40000000LL, &v14, 0LL, 0LL, 0, 0LL);
              else
                v9 = NtOpenKey(a4, 2181038080LL, &v14);
              appended = v9;
            }
          }
        }
        NtdllpFreeStringRoutine(StringRoutine);
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}
