/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800FAF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringLengthWorkerW @ 0x180009AC0 (RtlStringLengthWorkerW.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18004B090 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18004B690 (RtlLCIDToCultureName.c)
 *     RtlpInitMuiCriticalSection @ 0x18004C6A8 (RtlpInitMuiCriticalSection.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18004DCB0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlCleanUpTEBLangLists @ 0x18006DAB0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006E840 (RtlpMuiRegFreeRegistryInfo.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800956E0 (_wcsicmp.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A46B0 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x1800A5B80 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A5FE0 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x1800A6180 (NtIsUILanguageComitted.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     _MuiRegAllocArray_0 @ 0x1800FD19C (_MuiRegAllocArray_0.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned int v0; // r13d
  __int64 Heap; // r15
  int SystemDefaultUILanguage; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // r11
  int v7; // r12d
  unsigned int v8; // edi
  char *v9; // r14
  int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  HANDLE *v13; // rsi
  HANDLE v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v20; // rax
  char *v21; // rbx
  __int64 v22; // rcx
  char v23; // [rsp+30h] [rbp-D0h]
  _WORD v24[2]; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h]
  HANDLE v26; // [rsp+40h] [rbp-C0h]
  __int128 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *String2; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+80h] [rbp-80h]
  HANDLE v33; // [rsp+88h] [rbp-78h]
  __int128 *v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+98h] [rbp-68h]
  __int128 v36; // [rsp+A0h] [rbp-60h]
  char v37; // [rsp+B0h] [rbp-50h] BYREF

  v0 = 0;
  Heap = 0LL;
  v23 = 0;
  v26 = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&v29);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  v5 = v29;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(v24, v29, v3, v4);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  String2 = (wchar_t *)&v37;
  v30 = 11272192;
  if ( !RtlLCIDToCultureName(v24[0], (__int64)&v30) || !v5 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_41;
  }
  v27 = 0LL;
  SystemDefaultUILanguage = RtlStringLengthWorkerW(
                              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                              0x7FFFLL,
                              &v28);
  if ( SystemDefaultUILanguage < 0 )
  {
LABEL_41:
    if ( v26 )
      NtClose(v26);
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    *((_QWORD *)&v27 + 1) = v6;
    LOWORD(v27) = 2 * v28;
    v32 = 48;
    WORD1(v27) = 2 * v28 + 2;
    v33 = 0LL;
    v34 = &v27;
    v35 = 64;
    v36 = 0LL;
    SystemDefaultUILanguage = NtOpenKey();
    if ( SystemDefaultUILanguage >= 0 )
    {
      Handle = 0LL;
      v7 = 0;
      v8 = 0;
      v9 = 0LL;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 512LL);
      if ( !Heap )
      {
        SystemDefaultUILanguage = -1073741801;
        goto LABEL_41;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v10 = NtEnumerateKey();
            if ( v10 < 0 )
            {
LABEL_21:
              if ( Handle )
                NtClose(Handle);
              SystemDefaultUILanguage = 0;
              if ( v10 != -2147483622 )
                SystemDefaultUILanguage = v10;
              if ( v9 )
              {
                if ( v8 )
                {
                  v13 = (HANDLE *)&v9[8 * v8];
                  do
                  {
                    --v13;
                    --v8;
                    v14 = *v13;
                    Handle = v14;
                    if ( v14 )
                    {
                      if ( SystemDefaultUILanguage >= 0 )
                      {
                        v23 = 1;
                        NtDeleteKey();
                        v14 = Handle;
                      }
                      NtClose(v14);
                    }
                  }
                  while ( v8 );
                }
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
              }
              if ( SystemDefaultUILanguage >= 0 && v23 )
              {
                ZwGetMUIRegistryInfo();
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection(v16, v15, v17, v18);
                RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo(g_RegInfo, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, g_RegInfo);
                  g_RegInfo = 0LL;
                }
                RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
              }
              goto LABEL_41;
            }
            v11 = *(unsigned int *)(Heap + 12);
            ++v7;
            if ( v11 + 24 <= 0x200 )
            {
              *(_WORD *)(Heap + 2 * (v11 >> 1) + 16) = 0;
              if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v29, (const WCHAR *)(Heap + 16), 0, v24) < 0 )
              {
                if ( wcsicmp((const wchar_t *)(Heap + 16), String2) )
                  break;
              }
            }
          }
          v27 = 0LL;
          if ( Heap != -16 )
            break;
LABEL_17:
          v33 = v26;
          Handle = 0LL;
          v34 = &v27;
          v32 = 48;
          v35 = 64;
          v36 = 0LL;
          if ( (int)NtOpenKey() >= 0 )
          {
            if ( v9 )
            {
              if ( v8 >= v0 )
              {
                v20 = (char *)MuiRegAllocArray_0(v12, v0 + 10);
                v21 = v20;
                if ( !v20 )
                {
LABEL_20:
                  v10 = -1073741801;
                  goto LABEL_21;
                }
                memmove(v20, v9, v0);
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
                v0 += 10;
                v9 = v21;
              }
            }
            else
            {
              v0 = 10;
              v9 = (char *)MuiRegAllocArray_0(v12, 10LL);
              if ( !v9 )
                goto LABEL_20;
            }
            v22 = v8++;
            *(_QWORD *)&v9[8 * v22] = Handle;
            Handle = 0LL;
          }
        }
        if ( (int)RtlStringLengthWorkerW((_WORD *)(Heap + 16), 0x7FFFLL, &v28) >= 0 )
        {
          *((_QWORD *)&v27 + 1) = Heap + 16;
          LOWORD(v27) = 2 * v28;
          WORD1(v27) = 2 * v28 + 2;
          goto LABEL_17;
        }
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
