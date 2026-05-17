/*
 * XREFs of RtlpQueryRegistryValues @ 0x180009D1C
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x180009444 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlQueryRegistryValuesEx @ 0x180009B10 (RtlQueryRegistryValuesEx.c)
 *     RtlpFindRegTziForCurrentYear @ 0x180009B34 (RtlpFindRegTziForCurrentYear.c)
 *     RtlCheckPortableOperatingSystem @ 0x18000AE10 (RtlCheckPortableOperatingSystem.c)
 *     RtlQueryRegistryValues @ 0x1800F9C30 (RtlQueryRegistryValues.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpCallQueryRegistryRoutine @ 0x18000A110 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x18000A55C (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpGetRegistryHandle @ 0x18000A5F4 (RtlpGetRegistryHandle.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1800A42D0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A5BE0 (ZwDeleteValueKey.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpQueryRegistryValues(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r15
  int v9; // r12d
  __int64 result; // rax
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // ebx
  unsigned int v15; // r13d
  int v16; // eax
  const WCHAR *v17; // rdx
  int v18; // r14d
  int v19; // eax
  int v20; // eax
  int v21; // r15d
  unsigned int i; // r14d
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 v28; // [rsp+50h] [rbp-41h] BYREF
  HANDLE v29; // [rsp+58h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING v32; // [rsp+78h] [rbp-19h] BYREF
  int v33; // [rsp+88h] [rbp-9h] BYREF
  HANDLE v34; // [rsp+90h] [rbp-1h]
  UNICODE_STRING *v35; // [rsp+98h] [rbp+7h]
  int v36; // [rsp+A0h] [rbp+Fh]
  __int128 v37; // [rsp+A8h] [rbp+17h]

  v6 = a4;
  v9 = a1;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  v26 = result;
  if ( (int)result >= 0 )
  {
    v11 = v9 & 0x40000000;
    if ( v11 )
    {
      *(_QWORD *)&v32.Length = 0LL;
      v32.Buffer = 0LL;
    }
    else
    {
      RtlInitUnicodeString(&v32, a2);
    }
    v28 = 4096LL;
    v12 = RtlpAllocDeallocQueryBuffer(&v28, 0LL, 0LL, &v26);
    v13 = v12;
    if ( v12 )
    {
      v14 = v26;
      *(_DWORD *)(v12 + 8) = 0;
      v15 = v28 - 2;
      v29 = Handle;
LABEL_6:
      if ( *(_QWORD *)a3 || (*(_BYTE *)(a3 + 8) & 0x21) != 0 )
      {
        v16 = *(_DWORD *)(a3 + 8);
        if ( (v16 & 0x20) == 0 || *(_QWORD *)(a3 + 16) && (v16 & 1) == 0 && !*(_QWORD *)a3 )
        {
          if ( (v16 & 3) != 0 && v29 != Handle )
          {
            NtClose(v29);
            v29 = Handle;
            v16 = *(_DWORD *)(a3 + 8);
          }
          v17 = *(const WCHAR **)(a3 + 16);
          if ( (v16 & 1) == 0 )
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
                  goto LABEL_28;
                }
                v14 = NtQueryValueKey(v29, &DestinationString, 1LL, v13, v15, &v27);
                if ( v14 == -2147483643 )
                  v14 = -1073741789;
                v26 = v14;
                if ( v14 < 0 )
                {
                  if ( v14 == -1073741772 )
                  {
                    *(_DWORD *)(v13 + 4) = 0;
                    *(_DWORD *)(v13 + 12) = 0;
                    v27 = v15;
                    v14 = RtlpCallQueryRegistryRoutine((_DWORD)v29, a3, v13, (unsigned int)&v27, v6, a5, a6);
                    v26 = v14;
                  }
                  if ( v14 != -1073741789 )
                    goto LABEL_26;
                }
                else
                {
                  if ( *(_DWORD *)(v13 + 4) == 7 )
                  {
                    *(_WORD *)(v27 + v13) = 0;
                    *(_DWORD *)(v13 + 12) += 2;
                  }
                  v27 = v15;
                  v20 = RtlpCallQueryRegistryRoutine((_DWORD)v29, a3, v13, (unsigned int)&v27, v6, a5, a6);
                  v26 = v20;
                  v14 = v20;
                  if ( v20 != -1073741789 )
                  {
                    if ( v20 < 0 )
                      goto LABEL_28;
                    if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                      ZwDeleteValueKey(v29, &DestinationString);
LABEL_26:
                    if ( v14 >= 0 )
                    {
                      a3 += 56LL;
                      goto LABEL_6;
                    }
                    goto LABEL_28;
                  }
                }
                v28 = v27 + 10LL;
                v23 = RtlpAllocDeallocQueryBuffer(&v28, v13, v28, &v26);
                v14 = v26;
                v13 = v23;
                if ( !v23 )
                  goto LABEL_28;
                *(_DWORD *)(v23 + 8) = 0;
                v15 = v28 - 2;
              }
            }
            if ( (v16 & 8) != 0 )
            {
              v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      v6,
                      *(_QWORD *)(a3 + 24));
              goto LABEL_26;
            }
            goto LABEL_42;
          }
          if ( v17 )
          {
            RtlInitUnicodeString(&v32, v17);
            v34 = Handle;
            v33 = 48;
            v35 = &v32;
            v36 = 576;
            v37 = 0LL;
            v14 = NtOpenKey(&v29, 0x2000000LL, &v33);
            if ( v14 < 0 )
              goto LABEL_28;
            if ( !*(_QWORD *)a3 )
              goto LABEL_26;
LABEL_42:
            v21 = 0;
            for ( i = 0; ; ++i )
            {
              v14 = ZwEnumerateValueKey(v29, i, 1LL, v13, v15, &v27);
              if ( v14 == -2147483643 )
                v14 = -1073741789;
              v26 = v14;
              if ( v14 == -2147483622 )
              {
                if ( i || (v14 = -1073741772, (*(_BYTE *)(a3 + 8) & 4) == 0) )
                  v14 = 0;
                goto LABEL_49;
              }
              if ( v14 >= 0 )
              {
                v27 = v15;
                v14 = RtlpCallQueryRegistryRoutine((_DWORD)v29, a3, v13, (unsigned int)&v27, a4, a5, a6);
                v26 = v14;
              }
              if ( v14 == -1073741789 )
              {
                v28 = v27 + 10LL;
                v24 = RtlpAllocDeallocQueryBuffer(&v28, v13, v28, &v26);
                v13 = v24;
                if ( !v24 )
                {
                  v14 = v26;
                  goto LABEL_49;
                }
                *(_DWORD *)(v24 + 8) = 0;
                --i;
                v25 = v21;
                v15 = v28 - 2;
                ++v21;
                if ( v25 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
                  v14 = v26;
LABEL_49:
                  v6 = a4;
                  goto LABEL_26;
                }
              }
              else
              {
                if ( v14 < 0 )
                  goto LABEL_28;
                v21 = 0;
                if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                {
                  DestinationString.Buffer = (wchar_t *)(v13 + 20);
                  DestinationString.Length = *(_WORD *)(v13 + 16);
                  DestinationString.MaximumLength = *(_WORD *)(v13 + 16);
                  if ( (int)ZwDeleteValueKey(v29, &DestinationString) >= 0 )
                    --i;
                }
              }
            }
          }
        }
        v14 = -1073741811;
      }
LABEL_28:
      if ( Handle && !v11 )
        NtClose(Handle);
      if ( v29 )
      {
        if ( v29 != Handle )
          NtClose(v29);
      }
      RtlpAllocDeallocQueryBuffer(0LL, v13, v28, 0LL);
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
