/*
 * XREFs of HamRegisterDesktopProcessWithAppContainerToken @ 0x180001AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001A3C @ 0x180001A3C (sub_180001A3C.c)
 *     sub_180002B58 @ 0x180002B58 (sub_180002B58.c)
 *     sub_180005FC0 @ 0x180005FC0 (sub_180005FC0.c)
 *     sub_180007760 @ 0x180007760 (sub_180007760.c)
 *     sub_180008150 @ 0x180008150 (sub_180008150.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18001CFF4 @ 0x18001CFF4 (sub_18001CFF4.c)
 *     sub_18001D0E4 @ 0x18001D0E4 (sub_18001D0E4.c)
 *     sub_18001E9C0 @ 0x18001E9C0 (sub_18001E9C0.c)
 *     sub_18001EA7C @ 0x18001EA7C (sub_18001EA7C.c)
 *     sub_18001EF4C @ 0x18001EF4C (sub_18001EF4C.c)
 */

__int64 __fastcall HamRegisterDesktopProcessWithAppContainerToken(HKEY a1, int a2, __int64 a3)
{
  int v6; // edx
  CLIENT_CALL_RETURN v7; // rbx
  int v8; // eax
  int v9; // esi
  int v10; // r12d
  __int64 v11; // rax
  const wchar_t *v12; // rdx
  __int64 v13; // rsi
  int v14; // eax
  BYTE Data[4]; // [rsp+50h] [rbp-468h] BYREF
  int v17; // [rsp+54h] [rbp-464h] BYREF
  DWORD cbData; // [rsp+58h] [rbp-460h] BYREF
  __int64 v19; // [rsp+60h] [rbp-458h] BYREF
  void *TokenHandle; // [rsp+68h] [rbp-450h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+70h] [rbp-448h] BYREF
  int Pointer; // [rsp+78h] [rbp-440h]
  __int64 v23; // [rsp+80h] [rbp-438h] BYREF
  HKEY hKey[2]; // [rsp+88h] [rbp-430h] BYREF
  CLIENT_CALL_RETURN v25; // [rsp+98h] [rbp-420h] BYREF
  _BYTE v26[16]; // [rsp+A0h] [rbp-418h] BYREF
  _BYTE v27[464]; // [rsp+B0h] [rbp-408h] BYREF
  _BYTE v28[68]; // [rsp+280h] [rbp-238h] BYREF
  unsigned int v29; // [rsp+2C4h] [rbp-1F4h]
  int v30; // [rsp+2C8h] [rbp-1F0h]
  __int64 v31; // [rsp+2D0h] [rbp-1E8h]
  _BYTE v32[276]; // [rsp+2E0h] [rbp-1D8h] BYREF
  int v33; // [rsp+3F4h] [rbp-C4h]

  hKey[1] = a1;
  v19 = 0LL;
  TokenHandle = 0LL;
  hKey[0] = 0LL;
  v23 = 0LL;
  Binding = 0LL;
  LODWORD(v7.Pointer) = NtOpenProcessToken(a1, 8u, &TokenHandle);
  if ( SLODWORD(v7.Simple) >= 0 )
  {
    v8 = sub_180002B58((_DWORD)TokenHandle, v6, (unsigned int)&v17, (unsigned int)&v25, (__int64)v26);
    LODWORD(v7.Pointer) = v8 | 0x10000000;
    if ( v8 >= 0 )
    {
      if ( v17 == 0x10000 )
      {
        v9 = 0;
      }
      else
      {
        if ( v17 != 65537 )
        {
          LODWORD(v7.Pointer) = -1073741585;
          goto LABEL_34;
        }
        v9 = 1;
      }
      v17 = v9;
      if ( (a2 & 0x80u) != 0 && v9 )
        a2 |= 0x100u;
      v10 = a2 | 0x200;
      if ( !v9 )
        v10 = a2;
      LODWORD(v7.Pointer) = sub_180005FC0(&unk_1800207D0);
      if ( SLODWORD(v7.Simple) >= 0 )
      {
        v7.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 0x18u, 0LL, Binding, a1, v10, a3).Pointer;
        v25.Pointer = v7.Pointer;
        Pointer = (int)v7.Pointer;
        if ( SLODWORD(v7.Simple) >= 0 )
        {
          if ( !v9 )
          {
            LODWORD(v7.Pointer) = sub_180001A3C((__int64)a1, (__int64)&v23);
            if ( SLODWORD(v7.Simple) < 0 )
              goto LABEL_34;
            v23 = 0LL;
            goto LABEL_33;
          }
          LODWORD(v7.Pointer) = sub_18001E9C0(&v19);
          if ( SLODWORD(v7.Simple) >= 0 )
          {
            v11 = 64LL;
            v12 = L"Win32LaunchGrace";
            do
            {
              if ( !*v12 )
                break;
              ++v12;
              --v11;
            }
            while ( v11 );
            if ( v11 )
              sub_180008150(L"Win32LaunchGrace", 0LL, 0LL, v32);
            v33 = -1;
            v13 = v19;
            LODWORD(v7.Pointer) = sub_18001CFF4(*(_QWORD *)(v19 + 8), a1, v32);
            if ( SLODWORD(v7.Simple) >= 0 )
            {
              *(_DWORD *)Data = 16000;
              if ( !RegOpenKeyExW(
                      HKEY_LOCAL_MACHINE,
                      L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppModel",
                      0,
                      1u,
                      hKey) )
              {
                cbData = 4;
                RegQueryValueExW(hKey[0], L"LaunchGraceMs", 0LL, 0LL, Data, &cbData);
                v14 = *(_DWORD *)Data;
                if ( cbData != 4 )
                  v14 = 16000;
                *(_DWORD *)Data = v14;
              }
              LODWORD(v7.Pointer) = sub_18001D0E4(*(_QWORD *)(v13 + 8), *(unsigned int *)Data);
              if ( SLODWORD(v7.Simple) >= 0 )
              {
                LODWORD(v7.Pointer) = sub_180007760(TokenHandle);
                if ( SLODWORD(v7.Simple) >= 0 )
                {
                  LODWORD(v7.Pointer) = PsmTimerStart(
                                          v19 + 16,
                                          v28,
                                          v29,
                                          v27,
                                          v30,
                                          v31,
                                          0,
                                          *(unsigned int *)Data,
                                          sub_18001E9B0,
                                          v19);
                  if ( SLODWORD(v7.Simple) >= 0 )
                  {
                    v19 = 0LL;
LABEL_33:
                    LODWORD(v7.Pointer) = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_34:
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( v23 )
    sub_18001EF4C(a1);
  if ( hKey[0] )
    RegCloseKey(hKey[0]);
  if ( v19 )
    sub_18001EA7C(v19);
  return LODWORD(v7.Pointer);
}
