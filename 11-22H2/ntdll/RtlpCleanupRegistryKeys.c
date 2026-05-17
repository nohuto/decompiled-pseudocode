/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800FA8F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x18000A450 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlCleanUpTEBLangLists @ 0x1800118A0 (RtlCleanUpTEBLangLists.c)
 *     RtlpInitMuiCriticalSection @ 0x180011C54 (RtlpInitMuiCriticalSection.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180012F40 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014994 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlStringLengthWorkerW @ 0x18007EE40 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800906B0 (_wcsicmp.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x18009F430 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x1800A0920 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A0D80 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x1800A0F20 (NtIsUILanguageComitted.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     _MuiRegAllocArray_0 @ 0x1800FCE54 (_MuiRegAllocArray_0.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned int v0; // r13d
  __int64 Heap; // r15
  int SystemDefaultUILanguage; // ebx
  __int64 v3; // rdi
  __int64 v4; // r11
  int v5; // r12d
  unsigned int v6; // edi
  char *v7; // r14
  int v8; // esi
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  HANDLE *v11; // rsi
  HANDLE v12; // rcx
  char *v14; // rax
  char *v15; // rbx
  __int64 v16; // rcx
  char v17; // [rsp+30h] [rbp-D0h]
  _WORD v18[2]; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h]
  HANDLE v20; // [rsp+40h] [rbp-C0h]
  __int128 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *String2; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+80h] [rbp-80h]
  HANDLE v27; // [rsp+88h] [rbp-78h]
  __int128 *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  char v31; // [rsp+B0h] [rbp-50h] BYREF

  v0 = 0;
  Heap = 0LL;
  v17 = 0;
  v20 = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&v23);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  v3 = v23;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(v18, v23);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  String2 = (wchar_t *)&v31;
  v24 = 11272192;
  if ( !RtlLCIDToCultureName(v18[0], (__int64)&v24) || !v3 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_41;
  }
  v21 = 0LL;
  SystemDefaultUILanguage = RtlStringLengthWorkerW(
                              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                              0x7FFFLL,
                              &v22);
  if ( SystemDefaultUILanguage < 0 )
  {
LABEL_41:
    if ( v20 )
      NtClose(v20);
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    *((_QWORD *)&v21 + 1) = v4;
    LOWORD(v21) = 2 * v22;
    v26 = 48;
    WORD1(v21) = 2 * v22 + 2;
    v27 = 0LL;
    v28 = &v21;
    v29 = 64;
    v30 = 0LL;
    SystemDefaultUILanguage = NtOpenKey();
    if ( SystemDefaultUILanguage >= 0 )
    {
      Handle = 0LL;
      v5 = 0;
      v6 = 0;
      v7 = 0LL;
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
            v8 = NtEnumerateKey();
            if ( v8 < 0 )
            {
LABEL_21:
              if ( Handle )
                NtClose(Handle);
              SystemDefaultUILanguage = 0;
              if ( v8 != -2147483622 )
                SystemDefaultUILanguage = v8;
              if ( v7 )
              {
                if ( v6 )
                {
                  v11 = (HANDLE *)&v7[8 * v6];
                  do
                  {
                    --v11;
                    --v6;
                    v12 = *v11;
                    Handle = v12;
                    if ( v12 )
                    {
                      if ( SystemDefaultUILanguage >= 0 )
                      {
                        v17 = 1;
                        NtDeleteKey();
                        v12 = Handle;
                      }
                      NtClose(v12);
                    }
                  }
                  while ( v6 );
                }
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v7);
              }
              if ( SystemDefaultUILanguage >= 0 && v17 )
              {
                ZwGetMUIRegistryInfo();
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection();
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
            v9 = *(unsigned int *)(Heap + 12);
            ++v5;
            if ( v9 + 24 <= 0x200 )
            {
              *(_WORD *)(Heap + 2 * (v9 >> 1) + 16) = 0;
              if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v23, (const WCHAR *)(Heap + 16), 0, v18) < 0 )
              {
                if ( wcsicmp((const wchar_t *)(Heap + 16), String2) )
                  break;
              }
            }
          }
          v21 = 0LL;
          if ( Heap != -16 )
            break;
LABEL_17:
          v27 = v20;
          Handle = 0LL;
          v28 = &v21;
          v26 = 48;
          v29 = 64;
          v30 = 0LL;
          if ( (int)NtOpenKey() >= 0 )
          {
            if ( v7 )
            {
              if ( v6 >= v0 )
              {
                v14 = (char *)MuiRegAllocArray_0(v10, v0 + 10);
                v15 = v14;
                if ( !v14 )
                {
LABEL_20:
                  v8 = -1073741801;
                  goto LABEL_21;
                }
                memmove(v14, v7, v0);
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v7);
                v0 += 10;
                v7 = v15;
              }
            }
            else
            {
              v0 = 10;
              v7 = (char *)MuiRegAllocArray_0(v10, 10LL);
              if ( !v7 )
                goto LABEL_20;
            }
            v16 = v6++;
            *(_QWORD *)&v7[8 * v16] = Handle;
            Handle = 0LL;
          }
        }
        if ( (int)RtlStringLengthWorkerW((_WORD *)(Heap + 16), 0x7FFFLL, &v22) >= 0 )
        {
          *((_QWORD *)&v21 + 1) = Heap + 16;
          LOWORD(v21) = 2 * v22;
          WORD1(v21) = 2 * v22 + 2;
          goto LABEL_17;
        }
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
