/*
 * XREFs of AVrfpLoadAndInitializeProvider @ 0x1800E5180
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18000B5F0 (RtlAppendUnicodeToString.c)
 *     RtlGetNtSystemRoot @ 0x180018A20 (RtlGetNtSystemRoot.c)
 *     LdrpLoadDll @ 0x18001927C (LdrpLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     LdrpCallInitRoutine @ 0x180028D74 (LdrpCallInitRoutine.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

char __fastcall AVrfpLoadAndInitializeProvider(__int64 a1)
{
  char v2; // bl
  char v3; // r14
  _QWORD *v4; // r15
  char v5; // di
  unsigned int v6; // edx
  unsigned int v7; // ecx
  _WORD *v8; // rax
  const WCHAR *NtSystemRoot; // rax
  __int64 v10; // rcx
  PIMAGE_NT_HEADERS v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64); // rcx
  __int64 v15; // r14
  int v16; // ecx
  _QWORD v18[2]; // [rsp+38h] [rbp-E0h] BYREF
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v21[16]; // [rsp+60h] [rbp-B8h] BYREF

  v18[1] = a1;
  v2 = 0;
  v3 = 0;
  v4 = (_QWORD *)(a1 + 24);
  v5 = 1;
  if ( (AVrfpDebug & 1) != 0 )
    DbgPrint("AVRF: verifier dll `%ws' \n", *v4);
  v6 = *(unsigned __int16 *)(a1 + 16) >> 1;
  v7 = 0;
  if ( v6 )
  {
    v8 = (_WORD *)*v4;
    while ( *v8 != 92 && *v8 != 47 )
    {
      ++v7;
      ++v8;
      if ( v7 >= v6 )
        goto LABEL_10;
    }
    v3 = 1;
  }
LABEL_10:
  if ( v3 == 1 )
  {
    DbgPrint("AVRF: Cannot load %ws from arbitrary location\n", *v4, *v4);
    return 0;
  }
  Destination.Buffer = (wchar_t *)&unk_180185390;
  *(_DWORD *)&Destination.Length = 34078720;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlAppendUnicodeToString(&Destination, NtSystemRoot);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  LdrpInitializeDllPath(0LL, (__int64)Destination.Buffer, v21);
  if ( (int)LdrpLoadDll(a1 + 16, (int)v21, 1, (__int64)&v20) < 0 )
  {
    DbgPrint(
      "AVRF: %ws: failed to load provider `%ws' (status %08X) from %ws\n",
      *(_QWORD *)(qword_180184390 + 96),
      *v4);
    return 0;
  }
  v10 = v20;
  *(_QWORD *)(a1 + 32) = v20;
  v11 = RtlImageNtHeader(*(PVOID *)(v10 + 48));
  if ( v11 )
  {
    if ( (v11->FileHeader.Characteristics & 0x2000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 104LL) |= 0x400u;
      v13 = *(_QWORD *)(a1 + 32);
      v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v13 + 56);
      if ( !v14 )
      {
        DbgPrint("AVRF: cannot find an entry point for provider %ws \n", *v4, v12);
        return 0;
      }
      v18[0] = 0LL;
      if ( LdrpCallInitRoutine(v14, *(_QWORD *)(v13 + 48), 4u, (__int64)v18) && (v15 = v18[0]) != 0 )
      {
        if ( *(_DWORD *)v18[0] == 80 )
        {
          if ( (AVrfpDebug & 8) != 0 )
            DbgPrint("AVRF: initialized provider %ws (descriptor @ %p) \n", *v4, v18[0]);
          *(_QWORD *)(a1 + 40) = *(_QWORD *)(v15 + 8);
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(v15 + 16);
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(v15 + 24);
          *(_QWORD *)(a1 + 64) = *(_QWORD *)(v15 + 72);
          *(_QWORD *)(v15 + 32) = *(_QWORD *)(qword_180184390 + 96);
          v16 = AVrfpVerifierFlags;
          *(_DWORD *)(v15 + 40) = AVrfpVerifierFlags;
          *(_DWORD *)(v15 + 44) = AVrfpDebug;
          *(_QWORD *)(v15 + 48) = RtlpGetStackTraceAddress;
          *(_QWORD *)(v15 + 56) = RtlpDebugPageHeapCreate;
          *(_QWORD *)(v15 + 64) = RtlpDebugPageHeapDestroy;
          if ( AVrfpEnabledSystemWide )
            *(_DWORD *)(v15 + 40) = v16 | 0x20000;
        }
        else
        {
          v2 = 1;
          DbgPrint("AVRF: provider %ws passed an invalid descriptor @ %p \n", *v4, v18[0]);
        }
      }
      else
      {
        v2 = 1;
        DbgPrint("AVRF: provider %ws did not initialize correctly \n", *v4);
      }
    }
    else
    {
      DbgPrint("AVRF: provider %ws is not a DLL image \n", *v4);
      v2 = 1;
    }
  }
  else
  {
    v2 = 1;
  }
  if ( v2 )
    return 0;
  return v5;
}
