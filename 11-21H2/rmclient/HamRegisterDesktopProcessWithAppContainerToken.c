/*
 * XREFs of HamRegisterDesktopProcessWithAppContainerToken @ 0x180002160
 * Callers:
 *     <none>
 * Callees:
 *     HamCreateAutoRestartActivityForDesktopBridge @ 0x180001C8C (HamCreateAutoRestartActivityForDesktopBridge.c)
 *     CempRpcBindToServer @ 0x180005AD0 (CempRpcBindToServer.c)
 *     CempGetTokenHostInfo @ 0x180007FD0 (CempGetTokenHostInfo.c)
 *     ?HampActivityPropertiesInitializeByClass@@YAXPEBG0W4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800083D0 (-HampActivityPropertiesInitializeByClass@@YAXPEBG0W4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPE.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     ?StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_START_TYPE@@@Z @ 0x18001C624 (-StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY.c)
 *     ?WaitForStarted@HamActivityWrapper@@QEAAJK@Z @ 0x18001C714 (-WaitForStarted@HamActivityWrapper@@QEAAJK@Z.c)
 *     HampCltDelayCloseContextCreate @ 0x18001DF00 (HampCltDelayCloseContextCreate.c)
 *     HampCltDelayCloseContextDestroy @ 0x18001DFB0 (HampCltDelayCloseContextDestroy.c)
 *     HamCloseActivityForDesktopBridge @ 0x18001E3CC (HamCloseActivityForDesktopBridge.c)
 */

__int64 __fastcall HamRegisterDesktopProcessWithAppContainerToken(HKEY a1, int a2, __int64 a3)
{
  CLIENT_CALL_RETURN v6; // rbx
  int v7; // ebx
  int Pointer; // eax
  int v9; // ecx
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // r14d
  const wchar_t *v14; // rax
  __int64 v15; // rsi
  int v16; // eax
  LPDWORD lpcbData; // [rsp+28h] [rbp-490h]
  BYTE Data[4]; // [rsp+50h] [rbp-468h] BYREF
  __int64 v19; // [rsp+58h] [rbp-460h] BYREF
  DWORD cbData; // [rsp+60h] [rbp-458h] BYREF
  __int64 v21; // [rsp+68h] [rbp-450h] BYREF
  void *TokenHandle; // [rsp+70h] [rbp-448h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+78h] [rbp-440h] BYREF
  CLIENT_CALL_RETURN v24; // [rsp+80h] [rbp-438h] BYREF
  int v25; // [rsp+88h] [rbp-430h]
  __int64 v26; // [rsp+90h] [rbp-428h] BYREF
  HKEY hKey[3]; // [rsp+98h] [rbp-420h] BYREF
  unsigned __int16 v28[232]; // [rsp+B0h] [rbp-408h] BYREF
  _BYTE v29[68]; // [rsp+280h] [rbp-238h] BYREF
  unsigned int v30; // [rsp+2C4h] [rbp-1F4h]
  int v31; // [rsp+2C8h] [rbp-1F0h]
  __int64 v32; // [rsp+2D0h] [rbp-1E8h]
  _BYTE v33[276]; // [rsp+2E0h] [rbp-1D8h] BYREF
  int v34; // [rsp+3F4h] [rbp-C4h]

  hKey[1] = a1;
  v21 = 0LL;
  TokenHandle = 0LL;
  hKey[0] = 0LL;
  v26 = 0LL;
  Binding = 0LL;
  LODWORD(v6.Pointer) = NtOpenProcessToken(a1, 8u, &TokenHandle);
  if ( SLODWORD(v6.Simple) < 0 )
    goto LABEL_22;
  v7 = RtlQueryPackageClaims(TokenHandle, 0LL, 0LL, 0LL, 0LL, 0LL, &v24, &v19);
  if ( v7 == -1073741275 )
  {
    v19 = 0LL;
    Pointer = 0;
    LODWORD(v24.Pointer) = 0;
    v7 = 0;
  }
  else
  {
    Pointer = (int)v24.Pointer;
  }
  v9 = 0;
  if ( v7 < 0 )
    goto LABEL_9;
  if ( (v19 & 1) != 0 && (v19 & 8) == 0 && (Pointer & 0x10000) == 0 )
  {
    if ( (Pointer & 0x4000) != 0 )
    {
      v9 = 65537;
      goto LABEL_9;
    }
    if ( (Pointer & 4) == 0 && (Pointer & 0x400) == 0 )
    {
      v10 = 64LL;
      if ( (Pointer & 0x800) == 0 )
      {
        if ( (Pointer & 0x40) != 0 )
        {
          v9 = 0x10000;
          goto LABEL_10;
        }
        if ( (Pointer & 0x1000) == 0 )
        {
          v9 = ((unsigned __int8)~LOBYTE(v24.Pointer) >> 3) & 1 | 0x10000;
          goto LABEL_10;
        }
      }
      v9 = 65537;
      goto LABEL_10;
    }
  }
  v9 = 0x10000;
LABEL_9:
  v10 = 64LL;
LABEL_10:
  LODWORD(v6.Pointer) = v7 | 0x10000000;
  if ( SLODWORD(v6.Simple) < 0 )
    goto LABEL_22;
  v11 = v9 - 0x10000;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      LODWORD(v6.Pointer) = -1073741585;
      goto LABEL_22;
    }
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  LODWORD(v19) = v12;
  if ( (a2 & 0x80u) != 0 && v12 )
    a2 |= 0x100u;
  LODWORD(v6.Pointer) = CempRpcBindToServer(&unk_1800217A0);
  if ( SLODWORD(v6.Simple) >= 0 )
  {
    LODWORD(lpcbData) = a2;
    v6.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0x17u, 0LL, Binding, a1, lpcbData, a3).Pointer;
    v24.Pointer = v6.Pointer;
    v25 = (int)v6.Pointer;
    if ( SLODWORD(v6.Simple) >= 0 )
    {
      if ( !v12 )
      {
        LODWORD(v6.Pointer) = HamCreateAutoRestartActivityForDesktopBridge((__int64)a1, (__int64)&v26);
        if ( SLODWORD(v6.Simple) < 0 )
          goto LABEL_22;
        v26 = 0LL;
        goto LABEL_21;
      }
      LODWORD(v6.Pointer) = HampCltDelayCloseContextCreate(&v21);
      if ( SLODWORD(v6.Simple) >= 0 )
      {
        v14 = L"Win32LaunchGrace";
        do
        {
          if ( !*v14 )
            break;
          ++v14;
          --v10;
        }
        while ( v10 );
        if ( v10 )
          HampActivityPropertiesInitializeByClass(L"Win32LaunchGrace", 0LL, 0LL, v33);
        v34 = -1;
        v15 = v21;
        LODWORD(v6.Pointer) = HamActivityWrapper::StartAsyncForProcess(*(_QWORD *)(v21 + 8), a1, v33);
        if ( SLODWORD(v6.Simple) >= 0 )
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
            v16 = *(_DWORD *)Data;
            if ( cbData != 4 )
              v16 = 16000;
            *(_DWORD *)Data = v16;
          }
          LODWORD(v6.Pointer) = HamActivityWrapper::WaitForStarted(
                                  *(HamActivityWrapper **)(v15 + 8),
                                  *(unsigned int *)Data);
          if ( SLODWORD(v6.Simple) >= 0 )
          {
            LODWORD(v6.Pointer) = CempGetTokenHostInfo(TokenHandle, v28);
            if ( SLODWORD(v6.Simple) >= 0 )
            {
              LODWORD(v6.Pointer) = PsmTimerStart(
                                      v21 + 16,
                                      v29,
                                      v30,
                                      v28,
                                      v31,
                                      v32,
                                      0,
                                      *(unsigned int *)Data,
                                      HampCltDelayCloseCallback,
                                      v21);
              if ( SLODWORD(v6.Simple) >= 0 )
              {
                v21 = 0LL;
LABEL_21:
                LODWORD(v6.Pointer) = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_22:
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( v26 )
    HamCloseActivityForDesktopBridge(a1);
  if ( hKey[0] )
    RegCloseKey(hKey[0]);
  if ( v21 )
    HampCltDelayCloseContextDestroy(v21);
  return LODWORD(v6.Pointer);
}
