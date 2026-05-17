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
  int Key; // ebx
  int v4; // ebx
  int v5; // ebx
  __int64 v6; // rbx
  __int64 *v7; // [rsp+28h] [rbp-E0h]
  __int64 v8; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  _WORD v12[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 Heap; // [rsp+60h] [rbp-A8h]
  HANDLE v14; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-98h] BYREF
  __int64 v16; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-88h] BYREF
  int v18; // [rsp+90h] [rbp-78h] BYREF
  __int64 v19; // [rsp+98h] [rbp-70h]
  _WORD *v20; // [rsp+A0h] [rbp-68h]
  int v21; // [rsp+A8h] [rbp-60h]
  __int128 v22; // [rsp+B0h] [rbp-58h]
  _BYTE v23[20]; // [rsp+C0h] [rbp-48h] BYREF
  int v24; // [rsp+D4h] [rbp-34h]
  _BYTE v25[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v26; // [rsp+FCh] [rbp-Ch]
  int v27; // [rsp+100h] [rbp-8h]
  unsigned int v28; // [rsp+104h] [rbp-4h]
  _BYTE v29[4]; // [rsp+148h] [rbp+40h] BYREF
  int v30; // [rsp+14Ch] [rbp+44h]
  int v31; // [rsp+150h] [rbp+48h]
  int v32; // [rsp+154h] [rbp+4Ch]
  __int64 retaddr; // [rsp+1C0h] [rbp+B8h]

  v0 = 0;
  v1 = 0;
  v15 = 0LL;
  v11 = 0LL;
  if ( LdrpIsSecureProcess )
    return 0LL;
  RtlImageNtHeaderEx(3LL, NtCurrentPeb()->ImageBaseAddress, 0LL, &v16);
  if ( (unsigned __int16)(*(_WORD *)(v16 + 92) - 2) > 1u )
    return 0LL;
  if ( (int)NtOpenKey(&v14, 3LL, &unk_180133150) < 0
    || (v4 = NtQueryValueKey(v14, &unk_1801346D8, 2LL, v29, 80, &v10), NtClose(v14), v4 < 0)
    || v30 != 4
    || v31 != 4
    || !v32 )
  {
    v10 = 0LL;
    if ( (int)NtOpenKey(&v10, 131097LL, &unk_180181398) >= 0 )
    {
      v7 = &v8;
      Key = ZwQueryKey(v10, 2LL, v23);
      NtClose(v10);
      if ( Key == -2147483643 || Key >= 0 )
      {
        if ( v24 )
          v1 = 2;
      }
    }
    if ( (int)NtOpenKey(&Handle, 1LL, &unk_180133120) >= 0 )
    {
      if ( (int)NtQueryValueKey(Handle, L"$&", 2LL, v25, 80, &v8) >= 0 && v26 == 4 && v27 == 4 && v28 > 1 )
        v1 = 1;
      NtClose(Handle);
    }
    if ( v1 != 1 && (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
    {
      v12[0] = 0;
      if ( (unsigned int)UnicodeString.Length + 120 <= 0xFFFE )
      {
        v12[1] = UnicodeString.Length + 120;
        Heap = RtlAllocateHeap(
                 NtCurrentPeb()->ProcessHeap,
                 (unsigned int)(NtdllBaseTag + 1572864),
                 (unsigned __int16)(UnicodeString.Length + 120));
        if ( Heap )
        {
          if ( (int)RtlAppendUnicodeStringToString(v12, &UnicodeString) >= 0
            && (int)RtlAppendUnicodeToString(v12, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            v18 = 48;
            v20 = v12;
            v19 = 0LL;
            v21 = 64;
            v22 = 0LL;
            if ( (int)NtOpenKey(&Handle, 1LL, &v18) >= 0 )
            {
              v5 = NtQueryValueKey(Handle, L"$&", 2LL, v25, 80, &v8);
              NtClose(Handle);
              if ( v5 >= 0 && v26 == 4 && v27 == 4 && v28 > 1 )
                v1 = 1;
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
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
      else if ( (int)LdrLoadDll(0LL, 0LL, &unk_1801346C8, &v15, v7) >= 0 )
      {
        v6 = v15;
        if ( (int)LdrGetProcedureAddressForCaller(v15, (unsigned int)&unk_1801346E8, 0, (unsigned int)&v11, 0, retaddr) >= 0
          && v11 )
        {
          LdrpSaferIsDllAllowedRoutine = __ROR8__(v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
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
  return v0;
}
