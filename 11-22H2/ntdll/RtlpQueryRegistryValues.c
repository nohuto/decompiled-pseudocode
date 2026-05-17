/*
 * XREFs of RtlpQueryRegistryValues @ 0x180008E4C
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x180060FA0 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpFindRegTziForCurrentYear @ 0x18007EE88 (RtlpFindRegTziForCurrentYear.c)
 *     RtlQueryRegistryValuesEx @ 0x180087AB0 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckPortableOperatingSystem @ 0x1800883B0 (RtlCheckPortableOperatingSystem.c)
 *     RtlQueryRegistryValues @ 0x1800F9D30 (RtlQueryRegistryValues.c)
 * Callees:
 *     RtlpCallQueryRegistryRoutine @ 0x180009260 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1800096A4 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpGetRegistryHandle @ 0x18000AD18 (RtlpGetRegistryHandle.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18009F050 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A0980 (ZwDeleteValueKey.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpQueryRegistryValues(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rsi
  int v9; // r13d
  __int64 result; // rax
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // ebx
  unsigned int v15; // r14d
  _BYTE *v16; // r12
  const WCHAR *v17; // rdx
  int v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // r14d
  unsigned int i; // esi
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-55h] BYREF
  __int64 v28; // [rsp+50h] [rbp-51h] BYREF
  HANDLE v29; // [rsp+58h] [rbp-49h] BYREF
  __int64 v30; // [rsp+60h] [rbp-41h]
  HANDLE Handle; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-31h] BYREF
  UNICODE_STRING v33; // [rsp+80h] [rbp-21h] BYREF
  int v34; // [rsp+90h] [rbp-11h] BYREF
  HANDLE v35; // [rsp+98h] [rbp-9h]
  UNICODE_STRING *v36; // [rsp+A0h] [rbp-1h]
  int v37; // [rsp+A8h] [rbp+7h]
  __int128 v38; // [rsp+B0h] [rbp+Fh]

  v6 = a4;
  v9 = a1;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  v26 = result;
  if ( (int)result >= 0 )
  {
    v11 = v9 & 0x40000000;
    if ( v11 )
    {
      *(_QWORD *)&v33.Length = 0LL;
      v33.Buffer = 0LL;
    }
    else
    {
      RtlInitUnicodeString(&v33, a2);
    }
    v28 = 4096LL;
    v12 = RtlpAllocDeallocQueryBuffer(&v28, 0LL, 0LL, &v26);
    v13 = v12;
    if ( v12 )
    {
      v14 = v26;
      *(_DWORD *)(v12 + 8) = 0;
      v15 = v28 - 2;
      v30 = v28 - 2;
      v29 = Handle;
LABEL_6:
      v16 = (_BYTE *)(a3 + 8);
      if ( *(_QWORD *)a3 || (*v16 & 0x21) != 0 )
      {
        if ( (*v16 & 0x20) == 0 || *(_QWORD *)(a3 + 16) && (*v16 & 1) == 0 && !*(_QWORD *)a3 )
        {
          if ( (*v16 & 3) != 0 && v29 != Handle )
          {
            NtClose(v29);
            v29 = Handle;
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
                    v14 = RtlpCallQueryRegistryRoutine((_DWORD)v29, a3, v13, (unsigned int)&v27, a4, a5, a6);
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
                  v20 = RtlpCallQueryRegistryRoutine((_DWORD)v29, a3, v13, (unsigned int)&v27, a4, a5, a6);
                  v26 = v20;
                  v14 = v20;
                  if ( v20 != -1073741789 )
                  {
                    if ( v20 < 0 )
                      goto LABEL_29;
                    if ( (*v16 & 0x40) != 0 )
                      ZwDeleteValueKey(v29, &DestinationString);
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
                v28 = v27 + 10LL;
                v23 = RtlpAllocDeallocQueryBuffer(&v28, v13, v28, &v26);
                v14 = v26;
                v13 = v23;
                if ( !v23 )
                  goto LABEL_29;
                *(_DWORD *)(v23 + 8) = 0;
                v15 = v28 - 2;
                v30 = v28 - 2;
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
            RtlInitUnicodeString(&v33, v17);
            v35 = Handle;
            v34 = 48;
            v36 = &v33;
            v37 = 576;
            v38 = 0LL;
            v14 = NtOpenKey(&v29, 0x2000000LL, &v34);
            if ( v14 < 0 )
              goto LABEL_29;
            if ( !*(_QWORD *)a3 )
              goto LABEL_27;
LABEL_43:
            v21 = 0;
            for ( i = 0; ; ++i )
            {
              v14 = ZwEnumerateValueKey(v29, i, 1LL, v13, v30, &v27);
              if ( v14 == -2147483643 )
                v14 = -1073741789;
              v26 = v14;
              if ( v14 == -2147483622 )
                break;
              if ( v14 >= 0 )
              {
                v27 = v30;
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
LABEL_50:
                  v15 = v30;
                  goto LABEL_26;
                }
                *(_DWORD *)(v24 + 8) = 0;
                --i;
                v30 = v28 - 2;
                v25 = v21++;
                if ( v25 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
                  v14 = v26;
                  v15 = v30;
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
                  if ( (int)ZwDeleteValueKey(v29, &DestinationString) >= 0 )
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
