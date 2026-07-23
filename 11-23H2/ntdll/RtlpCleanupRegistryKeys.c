/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800FBD00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x18000A320 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlCleanUpTEBLangLists @ 0x180011690 (RtlCleanUpTEBLangLists.c)
 *     RtlpInitMuiCriticalSection @ 0x180011A44 (RtlpInitMuiCriticalSection.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180012D30 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014788 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180015AB0 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F190 (RtlpCreateProcessRegistryInfo.c)
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlStringLengthWorkerW @ 0x18007F4B0 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180090EB0 (_wcsicmp.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A14F0 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x1800A29E0 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A2E40 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x1800A2FE0 (NtIsUILanguageComitted.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     _MuiRegAllocArray_0 @ 0x1800FE264 (_MuiRegAllocArray_0.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned int v0; // r13d
  wchar_t *Heap; // r15
  int SystemDefaultUILanguage; // ebx
  PLCID v3; // rdi
  __int64 v4; // r11
  ULONG v5; // r12d
  unsigned int v6; // edi
  char *v7; // r14
  NTSTATUS v8; // esi
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  HANDLE *v11; // rsi
  HANDLE v12; // rcx
  char *v14; // rax
  char *v15; // rbx
  __int64 v16; // rcx
  char v17; // [rsp+30h] [rbp-D0h]
  LANGID DefaultUILanguageId[2]; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  PLCID Lcid; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING String; // [rsp+68h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  char v27; // [rsp+B0h] [rbp-50h] BYREF

  v0 = 0;
  Heap = 0LL;
  v17 = 0;
  KeyHandle = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  v3 = Lcid;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)DefaultUILanguageId, Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  String.Buffer = (wchar_t *)&v27;
  *(_DWORD *)&String.Length = 11272192;
  if ( !RtlLCIDToCultureName(DefaultUILanguageId[0], &String) || !v3 )
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
    if ( KeyHandle )
      NtClose(KeyHandle);
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    *((_QWORD *)&v21 + 1) = v4;
    LOWORD(v21) = 2 * v22;
    ObjectAttributes.Length = 48;
    WORD1(v21) = 2 * v22 + 2;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SystemDefaultUILanguage = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( SystemDefaultUILanguage >= 0 )
    {
      Handle = 0LL;
      v5 = 0;
      v6 = 0;
      v7 = 0LL;
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x200uLL);
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
            v8 = NtEnumerateKey(KeyHandle, v5, KeyBasicInformation, Heap, 0x200u, &ResultLength);
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
                        NtDeleteKey(v12);
                        v12 = Handle;
                      }
                      NtClose(v12);
                    }
                  }
                  while ( v6 );
                }
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
              }
              if ( SystemDefaultUILanguage >= 0 && v17 )
              {
                ZwGetMUIRegistryInfo(2u, 0LL, 0LL);
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection();
                RtlEnterCriticalSection(&RegistryInfoCritSect);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo((__int64)g_RegInfo, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_RegInfo);
                  g_RegInfo = 0LL;
                }
                RtlLeaveCriticalSection(&RegistryInfoCritSect);
              }
              goto LABEL_41;
            }
            v9 = *((unsigned int *)Heap + 3);
            ++v5;
            if ( v9 + 24 <= 0x200 )
            {
              Heap[(v9 >> 1) + 8] = 0;
              if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)Lcid, Heap + 8, 0, DefaultUILanguageId) < 0 )
              {
                if ( wcsicmp(Heap + 8, String.Buffer) )
                  break;
              }
            }
          }
          v21 = 0LL;
          if ( Heap != (wchar_t *)-16LL )
            break;
LABEL_17:
          ObjectAttributes.RootDirectory = KeyHandle;
          Handle = 0LL;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) >= 0 )
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
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
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
        if ( (int)RtlStringLengthWorkerW(Heap + 8, 0x7FFFLL, &v22) >= 0 )
        {
          *((_QWORD *)&v21 + 1) = Heap + 8;
          LOWORD(v21) = 2 * v22;
          WORD1(v21) = 2 * v22 + 2;
          goto LABEL_17;
        }
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
