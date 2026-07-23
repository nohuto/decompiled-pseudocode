/*
 * XREFs of AVrfpLoadAndInitializeProvider @ 0x1800E630C
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrpCallInitRoutine @ 0x18003FFAC (LdrpCallInitRoutine.c)
 *     LdrpLoadDll @ 0x180044E5C (LdrpLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     RtlImageNtHeader @ 0x18004F1A0 (RtlImageNtHeader.c)
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     RtlGetNtSystemRoot @ 0x1800509E0 (RtlGetNtSystemRoot.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

char __fastcall AVrfpLoadAndInitializeProvider(__int64 a1)
{
  char v2; // di
  char v3; // si
  char v4; // r14
  unsigned int v5; // edx
  unsigned int v6; // ecx
  _WORD *v7; // rax
  const WCHAR *NtSystemRoot; // rax
  wchar_t *Buffer; // rsi
  int Dll; // eax
  PVOID *v11; // rcx
  PIMAGE_NT_HEADERS v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64); // rcx
  __int64 v16; // rsi
  _QWORD v18[2]; // [rsp+38h] [rbp-D0h] BYREF
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  PVOID *v20; // [rsp+58h] [rbp-B0h] BYREF
  const WCHAR *v21[16]; // [rsp+60h] [rbp-A8h] BYREF

  v18[1] = a1;
  v2 = 0;
  v3 = 0;
  v4 = 1;
  if ( (AVrfpDebug & 1) != 0 )
    DbgPrint("AVRF: verifier dll `%ws' \n", *(_QWORD *)(a1 + 24));
  v5 = *(unsigned __int16 *)(a1 + 16) >> 1;
  v6 = 0;
  if ( v5 )
  {
    v7 = *(_WORD **)(a1 + 24);
    while ( *v7 != 92 && *v7 != 47 )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_10;
    }
    v3 = 1;
  }
LABEL_10:
  if ( v3 != 1 )
  {
    Destination.Buffer = (wchar_t *)&unk_18017B0F0;
    *(_DWORD *)&Destination.Length = 34078720;
    NtSystemRoot = RtlGetNtSystemRoot();
    RtlAppendUnicodeToString(&Destination, NtSystemRoot);
    RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
    Buffer = Destination.Buffer;
    LdrpInitializeDllPath(0LL, Destination.Buffer, v21);
    Dll = LdrpLoadDll((unsigned __int16 *)(a1 + 16), (int)v21, 1, (PVOID *)&v20);
    if ( Dll < 0 )
    {
      DbgPrint(
        "AVRF: %ws: failed to load provider `%ws' (status %08X) from %ws\n",
        *(_QWORD *)(qword_18017A150 + 96),
        *(_QWORD *)(a1 + 24),
        (unsigned int)Dll,
        Buffer);
      return 0;
    }
    v11 = v20;
    *(_QWORD *)(a1 + 32) = v20;
    v12 = RtlImageNtHeader(v11[6]);
    if ( v12 )
    {
      if ( (v12->FileHeader.Characteristics & 0x2000) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 104LL) |= 0x400u;
        v14 = *(_QWORD *)(a1 + 32);
        v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v14 + 56);
        if ( !v15 )
        {
          DbgPrint("AVRF: cannot find an entry point for provider %ws \n", *(_QWORD *)(a1 + 24), v13);
          return 0;
        }
        v18[0] = 0LL;
        if ( LdrpCallInitRoutine(v15, *(_QWORD *)(v14 + 48), 4u, (__int64)v18) && (v16 = v18[0]) != 0 )
        {
          if ( *(_DWORD *)v18[0] == 80 )
          {
            if ( (AVrfpDebug & 8) != 0 )
              DbgPrint("AVRF: initialized provider %ws (descriptor @ %p) \n", *(_QWORD *)(a1 + 24), v18[0]);
            *(_QWORD *)(a1 + 40) = *(_QWORD *)(v16 + 8);
            *(_QWORD *)(a1 + 48) = *(_QWORD *)(v16 + 16);
            *(_QWORD *)(a1 + 56) = *(_QWORD *)(v16 + 24);
            *(_QWORD *)(a1 + 64) = *(_QWORD *)(v16 + 72);
            *(_QWORD *)(v16 + 32) = *(_QWORD *)(qword_18017A150 + 96);
            *(_DWORD *)(v16 + 40) = AVrfpVerifierFlags;
            *(_DWORD *)(v16 + 44) = AVrfpDebug;
            *(_QWORD *)(v16 + 48) = RtlpGetStackTraceAddress;
            *(_QWORD *)(v16 + 56) = RtlpDebugPageHeapCreate;
            *(_QWORD *)(v16 + 64) = RtlpDebugPageHeapDestroy;
            if ( AVrfpEnabledSystemWide )
              *(_DWORD *)(v16 + 40) |= 0x20000u;
          }
          else
          {
            v2 = 1;
            DbgPrint("AVRF: provider %ws passed an invalid descriptor @ %p \n", *(_QWORD *)(a1 + 24), v18[0]);
          }
        }
        else
        {
          v2 = 1;
          DbgPrint("AVRF: provider %ws did not initialize correctly \n", *(_QWORD *)(a1 + 24));
        }
      }
      else
      {
        DbgPrint("AVRF: provider %ws is not a DLL image \n", *(_QWORD *)(a1 + 24));
        v2 = 1;
      }
    }
    else
    {
      v2 = 1;
    }
    if ( !v2 )
      return v4;
    return 0;
  }
  DbgPrint("AVRF: Cannot load %ws from arbitrary location\n", *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 24));
  return 0;
}
