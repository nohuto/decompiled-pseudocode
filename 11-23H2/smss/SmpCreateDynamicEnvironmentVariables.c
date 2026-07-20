/*
 * XREFs of SmpCreateDynamicEnvironmentVariables @ 0x140007C60
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004384 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpCreateDynamicEnvironmentVariables(HANDLE KeyHandle)
{
  ULONG DataSize; // edi
  NTSTATUS v3; // edx
  __int64 v4; // rax
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  ULONG v8; // r14d
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  NTSTATUS v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  wchar_t *v15; // rax
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandlea; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v19; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v20; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v21[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING v22; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING v23; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING v24; // [rsp+A8h] [rbp-60h] BYREF
  struct _UNICODE_STRING v25; // [rsp+B8h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  _WORD SystemInformation[2]; // [rsp+F8h] [rbp-10h] BYREF
  int v28; // [rsp+FCh] [rbp-Ch]
  __int64 v29; // [rsp+108h] [rbp+0h] BYREF
  wchar_t v30; // [rsp+110h] [rbp+8h]
  __int64 v31; // [rsp+118h] [rbp+10h] BYREF
  __int64 v32; // [rsp+120h] [rbp+18h] BYREF
  __int64 v33; // [rsp+128h] [rbp+20h] BYREF
  int v34; // [rsp+130h] [rbp+28h]
  __int64 v35; // [rsp+138h] [rbp+30h] BYREF
  int v36; // [rsp+140h] [rbp+38h]
  __int128 Data; // [rsp+148h] [rbp+40h] BYREF
  int v38; // [rsp+158h] [rbp+50h]
  wchar_t v39; // [rsp+15Ch] [rbp+54h]
  __int128 v40; // [rsp+160h] [rbp+58h] BYREF
  wchar_t pszDest[6]; // [rsp+178h] [rbp+70h] BYREF
  wchar_t v42[250]; // [rsp+184h] [rbp+7Ch] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+378h] [rbp+270h] BYREF
  _BYTE v44[500]; // [rsp+384h] [rbp+27Ch] BYREF

  v38 = *(_DWORD *)L"NT";
  v39 = aWindowsNt[10];
  Data = *(_OWORD *)L"Windows_NT";
  DataSize = 12;
  v32 = 0x3600380078LL;
  v30 = aIa64[4];
  v36 = *(_DWORD *)L"4";
  v31 = 0x4D00520041LL;
  v34 = *(_DWORD *)L"4";
  ValueName.Buffer = L"OS";
  v21[1] = L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0";
  v19.Buffer = L"PROCESSOR_ARCHITECTURE";
  v20.Buffer = L"PROCESSOR_LEVEL";
  v29 = *(_QWORD *)L"IA64";
  v24.Buffer = L"PROCESSOR_IDENTIFIER";
  v35 = *(_QWORD *)L"AMD64";
  v25.Buffer = L"PROCESSOR_REVISION";
  v33 = *(_QWORD *)L"ARM64";
  v22.Buffer = L"Identifier";
  v23.Buffer = L"VendorIdentifier";
  v40 = *(_OWORD *)L"Unknown";
  *(_DWORD *)&ValueName.Length = 393220;
  LODWORD(v21[0]) = 8519808;
  *(_DWORD *)&v19.Length = 3014700;
  *(_DWORD *)&v20.Length = 2097182;
  *(_DWORD *)&v24.Length = 2752552;
  *(_DWORD *)&v25.Length = 2490404;
  *(_DWORD *)&v22.Length = 1441812;
  *(_DWORD *)&v23.Length = 2228256;
  v3 = NtQuerySystemInformation(SystemProcessorInformation, SystemInformation, 0xCu, 0LL);
  if ( v3 < 0 )
  {
    v4 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v4 + 2] = 3105;
    SmpGlobalLog[2 * v4 + 3] = v3;
    *(_QWORD *)&SmpGlobalLog[2 * v4 + 4] = KeyHandle;
    return (unsigned int)v3;
  }
  v6 = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, &Data, 0x16u);
  if ( v6 >= 0 )
  {
    v8 = 16;
    if ( SystemInformation[0] )
    {
      if ( SystemInformation[0] != 5 )
      {
        switch ( SystemInformation[0] )
        {
          case 6:
            v9 = &v29;
            DataSize = 10;
            break;
          case 9:
            v9 = &v35;
            break;
          case 0xC:
            v9 = &v33;
            break;
          default:
            v9 = (__int64 *)&v40;
            ResultLength[0] = 16;
            DataSize = 16;
            goto LABEL_19;
        }
LABEL_18:
        ResultLength[0] = DataSize;
LABEL_19:
        v6 = NtSetValueKey(KeyHandle, &v19, 0, 1u, v9, DataSize);
        if ( v6 < 0 )
        {
          v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
          SmpGlobalLog[2 * v7 + 2] = 3180;
          goto LABEL_5;
        }
        RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", SystemInformation[1]);
        v10 = -1LL;
        v11 = -1LL;
        do
          ++v11;
        while ( pszDest[v11] );
        v6 = NtSetValueKey(KeyHandle, &v20, 0, 1u, pszDest, 2 * v11 + 2);
        if ( v6 < 0 )
        {
          v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
          SmpGlobalLog[2 * v7 + 2] = 3224;
          goto LABEL_5;
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v21;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = NtOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
        if ( v6 < 0 )
        {
          v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
          SmpGlobalLog[2 * v7 + 2] = 3250;
          goto LABEL_5;
        }
        v6 = NtQueryValueKey(KeyHandlea, &v22, KeyValuePartialInformation, pszDest, 0x200u, ResultLength);
        if ( v6 < 0 )
        {
          NtClose(KeyHandlea);
          v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
          SmpGlobalLog[2 * v7 + 2] = 3276;
          goto LABEL_5;
        }
        v12 = NtQueryValueKey(KeyHandlea, &v23, KeyValuePartialInformation, KeyValueInformation, 0x200u, ResultLength);
        NtClose(KeyHandlea);
        if ( v12 >= 0 )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( v42[v13] );
          v6 = RtlStringCbPrintfW(&v42[v13], 2 * (250 - v13), L", %ws", v44);
          if ( v6 < 0 )
          {
            v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
            SmpGlobalLog[2 * v7 + 2] = 3324;
            goto LABEL_5;
          }
        }
        v14 = -1LL;
        do
          ++v14;
        while ( v42[v14] );
        v6 = NtSetValueKey(KeyHandle, &v24, 0, 1u, v42, 2 * v14 + 2);
        if ( v6 < 0 )
        {
          v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
          SmpGlobalLog[2 * v7 + 2] = 3346;
          goto LABEL_5;
        }
        if ( SystemInformation[0] )
        {
          if ( SystemInformation[0] != 5
            && SystemInformation[0] != 6
            && SystemInformation[0] != 9
            && SystemInformation[0] != 12 )
          {
            RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u");
            goto LABEL_47;
          }
        }
        else if ( (v28 & 0xFF00) == 0xFF00 )
        {
          RtlStringCbPrintfW(pszDest, 0x200uLL, L"%02x", (unsigned __int8)v28);
          _wcsupr_s(pszDest, 0x100uLL);
          goto LABEL_47;
        }
        RtlStringCbPrintfW(pszDest, 0x200uLL, L"%04x");
        do
LABEL_47:
          ++v10;
        while ( pszDest[v10] );
        v6 = NtSetValueKey(KeyHandle, &v25, 0, 1u, pszDest, 2 * v10 + 2);
        if ( v6 < 0 )
        {
          v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
          SmpGlobalLog[2 * v7 + 2] = 3429;
          goto LABEL_5;
        }
        if ( SmpSafeBootOption == -1 )
          return 0;
        if ( SmpSafeBootOption != 1 )
        {
          if ( SmpSafeBootOption == 2 )
          {
            v15 = L"NETWORK";
            goto LABEL_57;
          }
          if ( SmpSafeBootOption == 3 )
          {
            v15 = L"DSREPAIR";
            v8 = 18;
            goto LABEL_57;
          }
        }
        v15 = L"MINIMAL";
LABEL_57:
        v6 = NtSetValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue, 0, 1u, v15, v8);
        if ( v6 < 0 )
        {
          v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
          SmpGlobalLog[2 * v7 + 2] = 3476;
          goto LABEL_5;
        }
        return 0;
      }
      v9 = &v31;
    }
    else
    {
      v9 = &v32;
    }
    DataSize = 8;
    goto LABEL_18;
  }
  v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
  SmpGlobalLog[2 * v7 + 2] = 3126;
LABEL_5:
  SmpGlobalLog[2 * v7 + 3] = v6;
  *(_QWORD *)&SmpGlobalLog[2 * v7 + 4] = KeyHandle;
  return (unsigned int)v6;
}
