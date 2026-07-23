/*
 * XREFs of RtlpQueryRegistryValues @ 0x180008C2C
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x18005E110 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpFindRegTziForCurrentYear @ 0x18007F4F8 (RtlpFindRegTziForCurrentYear.c)
 *     RtlQueryRegistryValuesEx @ 0x1800882B0 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckPortableOperatingSystem @ 0x180088BB0 (RtlCheckPortableOperatingSystem.c)
 *     RtlQueryRegistryValues @ 0x1800FB140 (RtlQueryRegistryValues.c)
 * Callees:
 *     RtlpCallQueryRegistryRoutine @ 0x180009040 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180009484 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpGetRegistryHandle @ 0x18000AAF8 (RtlpGetRegistryHandle.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1800A1110 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A2A40 (ZwDeleteValueKey.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpQueryRegistryValues(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        PVOID Environment,
        char a6)
{
  __int64 v6; // rsi
  int v9; // r13d
  __int64 result; // rax
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rdi
  NTSTATUS v14; // ebx
  ULONG Length; // r14d
  _BYTE *v16; // r12
  const WCHAR *v17; // rdx
  int v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // r14d
  ULONG i; // esi
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  unsigned __int32 v26; // [rsp+48h] [rbp-59h]
  NTSTATUS v27; // [rsp+48h] [rbp-59h]
  NTSTATUS v28; // [rsp+48h] [rbp-59h]
  ULONG ResultLength; // [rsp+4Ch] [rbp-55h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-51h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-49h] BYREF
  ULONG v32[2]; // [rsp+60h] [rbp-41h]
  HANDLE Handle; // [rsp+68h] [rbp-39h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-31h] BYREF
  _UNICODE_STRING v35; // [rsp+80h] [rbp-21h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-11h] BYREF

  v6 = a4;
  v9 = a1;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  v26 = result;
  if ( (int)result >= 0 )
  {
    v11 = v9 & 0x40000000;
    if ( v11 )
    {
      *(_QWORD *)&v35.Length = 0LL;
      v35.Buffer = 0LL;
    }
    else
    {
      RtlInitUnicodeString(&v35, a2);
    }
    RegionSize = 4096LL;
    v12 = RtlpAllocDeallocQueryBuffer(&RegionSize);
    v13 = v12;
    if ( v12 )
    {
      v14 = v26;
      *(_DWORD *)(v12 + 8) = 0;
      Length = RegionSize - 2;
      *(_QWORD *)v32 = RegionSize - 2;
      KeyHandle = Handle;
LABEL_6:
      v16 = (_BYTE *)(a3 + 8);
      if ( *(_QWORD *)a3 || (*v16 & 0x21) != 0 )
      {
        if ( (*v16 & 0x20) == 0 || *(_QWORD *)(a3 + 16) && (*v16 & 1) == 0 && !*(_QWORD *)a3 )
        {
          if ( (*v16 & 3) != 0 && KeyHandle != Handle )
          {
            NtClose(KeyHandle);
            KeyHandle = Handle;
          }
          v17 = *(const WCHAR **)(a3 + 16);
          if ( (*v16 & 1) == 0 )
          {
            if ( v17 )
            {
              RtlInitUnicodeString(&DestinationString, v17);
              v18 = 0;
              while ( 1 )
              {
                v19 = v18++;
                if ( v19 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1276);
                  goto LABEL_29;
                }
                v14 = NtQueryValueKey(
                        KeyHandle,
                        &DestinationString,
                        KeyValueFullInformation,
                        (PVOID)v13,
                        Length,
                        &ResultLength);
                if ( v14 == -2147483643 )
                  v14 = -1073741789;
                v27 = v14;
                if ( v14 < 0 )
                {
                  if ( v14 == -1073741772 )
                  {
                    *(_DWORD *)(v13 + 4) = 0;
                    *(_DWORD *)(v13 + 12) = 0;
                    ResultLength = Length;
                    v14 = RtlpCallQueryRegistryRoutine((int)KeyHandle, a3, v13, (int)&ResultLength, a4, Environment, a6);
                    v27 = v14;
                  }
                  if ( v14 != -1073741789 )
                    goto LABEL_26;
                }
                else
                {
                  if ( *(_DWORD *)(v13 + 4) == 7 )
                  {
                    *(_WORD *)(ResultLength + v13) = 0;
                    *(_DWORD *)(v13 + 12) += 2;
                  }
                  ResultLength = Length;
                  v20 = RtlpCallQueryRegistryRoutine((int)KeyHandle, a3, v13, (int)&ResultLength, a4, Environment, a6);
                  v27 = v20;
                  v14 = v20;
                  if ( v20 != -1073741789 )
                  {
                    if ( v20 < 0 )
                      goto LABEL_29;
                    if ( (*v16 & 0x40) != 0 )
                      ZwDeleteValueKey(KeyHandle, &DestinationString);
LABEL_26:
                    v6 = a4;
LABEL_27:
                    if ( v14 >= 0 )
                    {
                      a3 += 56LL;
                      goto LABEL_6;
                    }
                    goto LABEL_29;
                  }
                }
                RegionSize = ResultLength + 10LL;
                v23 = RtlpAllocDeallocQueryBuffer(&RegionSize);
                v14 = v27;
                v13 = v23;
                if ( !v23 )
                  goto LABEL_29;
                *(_DWORD *)(v23 + 8) = 0;
                Length = RegionSize - 2;
                *(_QWORD *)v32 = RegionSize - 2;
              }
            }
            if ( (*v16 & 8) != 0 )
            {
              v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      v6,
                      *(_QWORD *)(a3 + 24));
              goto LABEL_27;
            }
            goto LABEL_43;
          }
          if ( v17 )
          {
            RtlInitUnicodeString(&v35, v17);
            ObjectAttributes.RootDirectory = Handle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &v35;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v14 = NtOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
            if ( v14 < 0 )
              goto LABEL_29;
            if ( !*(_QWORD *)a3 )
              goto LABEL_27;
LABEL_43:
            v21 = 0;
            for ( i = 0; ; ++i )
            {
              v14 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v13, v32[0], &ResultLength);
              if ( v14 == -2147483643 )
                v14 = -1073741789;
              v28 = v14;
              if ( v14 == -2147483622 )
                break;
              if ( v14 >= 0 )
              {
                ResultLength = v32[0];
                v14 = RtlpCallQueryRegistryRoutine((int)KeyHandle, a3, v13, (int)&ResultLength, a4, Environment, a6);
                v28 = v14;
              }
              if ( v14 == -1073741789 )
              {
                RegionSize = ResultLength + 10LL;
                v24 = RtlpAllocDeallocQueryBuffer(&RegionSize);
                v13 = v24;
                if ( !v24 )
                {
                  v14 = v28;
LABEL_50:
                  Length = v32[0];
                  goto LABEL_26;
                }
                *(_DWORD *)(v24 + 8) = 0;
                --i;
                *(_QWORD *)v32 = RegionSize - 2;
                v25 = v21++;
                if ( v25 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
                  v14 = v28;
                  Length = v32[0];
                  goto LABEL_26;
                }
              }
              else
              {
                if ( v14 < 0 )
                  goto LABEL_29;
                v21 = 0;
                if ( (*v16 & 0x40) != 0 )
                {
                  DestinationString.Buffer = (wchar_t *)(v13 + 20);
                  DestinationString.Length = *(_WORD *)(v13 + 16);
                  DestinationString.MaximumLength = *(_WORD *)(v13 + 16);
                  if ( ZwDeleteValueKey(KeyHandle, &DestinationString) >= 0 )
                    --i;
                }
              }
            }
            if ( i || (v14 = -1073741772, (*v16 & 4) == 0) )
              v14 = 0;
            goto LABEL_50;
          }
        }
        v14 = -1073741811;
      }
LABEL_29:
      if ( Handle && !v11 )
        NtClose(Handle);
      if ( KeyHandle )
      {
        if ( KeyHandle != Handle )
          NtClose(KeyHandle);
      }
      RtlpAllocDeallocQueryBuffer(0LL);
      return (unsigned int)v14;
    }
    else
    {
      if ( !v11 )
        NtClose(Handle);
      return v26;
    }
  }
  return result;
}
