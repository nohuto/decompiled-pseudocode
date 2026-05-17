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

char __fastcall AVrfpLoadAndInitializeProvider(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  char v6; // r14
  __int64 *v7; // r15
  char v8; // di
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _WORD *v12; // rax
  _WORD *NtSystemRoot; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64); // rcx
  __int64 v19; // r14
  int v20; // ecx
  _QWORD v22[2]; // [rsp+38h] [rbp-E0h] BYREF
  int v23; // [rsp+48h] [rbp-D0h] BYREF
  void *v24; // [rsp+50h] [rbp-C8h]
  __int64 v25; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v26[16]; // [rsp+60h] [rbp-B8h] BYREF

  v22[1] = a1;
  v5 = 0;
  v6 = 0;
  v7 = (__int64 *)(a1 + 24);
  v8 = 1;
  if ( (AVrfpDebug & 1) != 0 )
    DbgPrint("AVRF: verifier dll `%ws' \n", *v7);
  v9 = *v7;
  v10 = *(unsigned __int16 *)(a1 + 16) >> 1;
  v11 = 0LL;
  if ( (_DWORD)v10 )
  {
    v12 = (_WORD *)*v7;
    while ( *v12 != 92 && *v12 != 47 )
    {
      v11 = (unsigned int)(v11 + 1);
      ++v12;
      if ( (unsigned int)v11 >= (unsigned int)v10 )
        goto LABEL_10;
    }
    v6 = 1;
  }
LABEL_10:
  if ( v6 == 1 )
  {
    DbgPrint("AVRF: Cannot load %ws from arbitrary location\n", *v7, v9);
    return 0;
  }
  v24 = &unk_180185390;
  v23 = 34078720;
  NtSystemRoot = (_WORD *)RtlGetNtSystemRoot(v11, v10, v9, a4);
  RtlAppendUnicodeToString((unsigned __int16 *)&v23, NtSystemRoot);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v23, &SlashSystem32SlashString);
  LdrpInitializeDllPath(0LL, (__int64)v24, v26);
  if ( (int)LdrpLoadDll(a1 + 16, (int)v26, 1, (__int64)&v25) < 0 )
  {
    DbgPrint(
      "AVRF: %ws: failed to load provider `%ws' (status %08X) from %ws\n",
      *(_QWORD *)(qword_180184390 + 96),
      *v7);
    return 0;
  }
  v14 = v25;
  *(_QWORD *)(a1 + 32) = v25;
  v15 = RtlImageNtHeader(*(_QWORD *)(v14 + 48));
  if ( v15 )
  {
    if ( (*(_WORD *)(v15 + 22) & 0x2000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 104LL) |= 0x400u;
      v17 = *(_QWORD *)(a1 + 32);
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v17 + 56);
      if ( !v18 )
      {
        DbgPrint("AVRF: cannot find an entry point for provider %ws \n", *v7, v16);
        return 0;
      }
      v22[0] = 0LL;
      if ( LdrpCallInitRoutine(v18, *(_QWORD *)(v17 + 48), 4LL, (__int64)v22) && (v19 = v22[0]) != 0 )
      {
        if ( *(_DWORD *)v22[0] == 80 )
        {
          if ( (AVrfpDebug & 8) != 0 )
            DbgPrint("AVRF: initialized provider %ws (descriptor @ %p) \n", *v7, v22[0]);
          *(_QWORD *)(a1 + 40) = *(_QWORD *)(v19 + 8);
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(v19 + 16);
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(v19 + 24);
          *(_QWORD *)(a1 + 64) = *(_QWORD *)(v19 + 72);
          *(_QWORD *)(v19 + 32) = *(_QWORD *)(qword_180184390 + 96);
          v20 = AVrfpVerifierFlags;
          *(_DWORD *)(v19 + 40) = AVrfpVerifierFlags;
          *(_DWORD *)(v19 + 44) = AVrfpDebug;
          *(_QWORD *)(v19 + 48) = RtlpGetStackTraceAddress;
          *(_QWORD *)(v19 + 56) = RtlpDebugPageHeapCreate;
          *(_QWORD *)(v19 + 64) = RtlpDebugPageHeapDestroy;
          if ( AVrfpEnabledSystemWide )
            *(_DWORD *)(v19 + 40) = v20 | 0x20000;
        }
        else
        {
          v5 = 1;
          DbgPrint("AVRF: provider %ws passed an invalid descriptor @ %p \n", *v7, v22[0]);
        }
      }
      else
      {
        v5 = 1;
        DbgPrint("AVRF: provider %ws did not initialize correctly \n", *v7);
      }
    }
    else
    {
      DbgPrint("AVRF: provider %ws is not a DLL image \n", *v7);
      v5 = 1;
    }
  }
  else
  {
    v5 = 1;
  }
  if ( v5 )
    return 0;
  return v8;
}
