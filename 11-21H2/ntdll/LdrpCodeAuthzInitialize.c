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
  int v3; // ebx
  int Key; // ebx
  int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 v11[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 Heap; // [rsp+60h] [rbp-A8h]
  HANDLE v13; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp-98h] BYREF
  __int64 v15; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-88h] BYREF
  int v17; // [rsp+90h] [rbp-78h] BYREF
  __int64 v18; // [rsp+98h] [rbp-70h]
  unsigned __int16 *v19; // [rsp+A0h] [rbp-68h]
  int v20; // [rsp+A8h] [rbp-60h]
  __int128 v21; // [rsp+B0h] [rbp-58h]
  _BYTE v22[20]; // [rsp+C0h] [rbp-48h] BYREF
  int v23; // [rsp+D4h] [rbp-34h]
  _BYTE v24[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v25; // [rsp+FCh] [rbp-Ch]
  int v26; // [rsp+100h] [rbp-8h]
  unsigned int v27; // [rsp+104h] [rbp-4h]
  _BYTE v28[4]; // [rsp+148h] [rbp+40h] BYREF
  int v29; // [rsp+14Ch] [rbp+44h]
  int v30; // [rsp+150h] [rbp+48h]
  int v31; // [rsp+154h] [rbp+4Ch]
  unsigned __int64 retaddr; // [rsp+1C0h] [rbp+B8h]

  v0 = 0;
  v14 = 0LL;
  v10 = 0LL;
  if ( LdrpIsSecureProcess )
    return 0LL;
  RtlImageNtHeaderEx(3, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v15);
  if ( (unsigned __int16)(*(_WORD *)(v15 + 92) - 2) > 1u )
    return 0LL;
  if ( (int)NtOpenKey(&v13, 3LL, &unk_18012C7A0) < 0
    || (v3 = NtQueryValueKey(v13, &unk_18012D680, 2LL, v28, 80, &v9), NtClose(v13), v3 < 0)
    || v29 != 4
    || v30 != 4
    || !v31 )
  {
    v9 = 0LL;
    v1 = 0;
    if ( (int)NtOpenKey(&v9, 131097LL, &unk_180174398) >= 0 )
    {
      Key = ZwQueryKey(v9, 2LL, v22);
      NtClose(v9);
      if ( Key == -2147483643 || Key >= 0 )
      {
        if ( v23 )
          goto LABEL_26;
      }
    }
    if ( (int)NtOpenKey(&Handle, 1LL, &unk_18012C770) >= 0 )
    {
      if ( (int)NtQueryValueKey(Handle, L"$&", 2LL, v24, 80, &v7) >= 0 && v25 == 4 && v26 == 4 && v27 > 1 )
      {
        v1 = 1;
        NtQueryValueKey(Handle, L"FH", 2LL, v24, 80, &v7);
      }
      NtClose(Handle);
      if ( v1 )
        goto LABEL_26;
    }
    if ( (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
    {
      v11[0] = 0;
      if ( (unsigned int)UnicodeString.Length + 120 <= 0xFFFE )
      {
        v11[1] = UnicodeString.Length + 120;
        Heap = RtlAllocateHeap(
                 (__int64)NtCurrentPeb()->ProcessHeap,
                 NtdllBaseTag + 1572864,
                 (unsigned __int16)(UnicodeString.Length + 120));
        if ( Heap )
        {
          if ( (int)RtlAppendUnicodeStringToString(v11, (const void **)&UnicodeString) >= 0
            && (int)RtlAppendUnicodeToString(v11, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            v17 = 48;
            v19 = v11;
            v18 = 0LL;
            v20 = 64;
            v21 = 0LL;
            if ( (int)NtOpenKey(&Handle, 1LL, &v17) >= 0 )
            {
              v5 = NtQueryValueKey(Handle, L"$&", 2LL, v24, 80, &v7);
              NtClose(Handle);
              if ( v5 >= 0 && v25 == 4 && v26 == 4 && v27 > 1 )
                v1 = 1;
            }
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
      if ( v1 )
      {
LABEL_26:
        if ( (int)LdrLoadDll(0LL, 0LL, (__int64)&unk_18012D660, &v14) >= 0 )
        {
          v6 = v14;
          if ( (int)LdrGetProcedureAddressForCaller(
                      v14,
                      &qword_18012D690,
                      0LL,
                      (volatile signed __int32 *)&v10,
                      0,
                      retaddr) >= 0
            && v10 )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR8__(v10 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
            LdrpAdvapi32DllHandle = v6;
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
