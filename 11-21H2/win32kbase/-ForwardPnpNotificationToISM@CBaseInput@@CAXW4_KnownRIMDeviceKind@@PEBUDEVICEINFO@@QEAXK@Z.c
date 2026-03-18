/*
 * XREFs of ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C00B5F50
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0048B2C (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C00B5BF0 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ForwardPnpNotificationToISM(int a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // cf
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // di
  const void *v17; // rdx
  int v18; // eax
  int v19; // eax
  __int64 v20; // xmm1_8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int16 v23; // ax
  _DWORD v24[144]; // [rsp+20h] [rbp-E0h] BYREF

  result = (unsigned int)(a4 - 2);
  if ( (unsigned int)result <= 1 )
  {
    memset(v24, 0, 0x23CuLL);
    v12 = __CFSHR__(*(_DWORD *)(a2 + 184), 14);
    v24[0] = a1;
    v24[1] = a3;
    v24[3] = -v12;
    v13 = *(_QWORD *)(a2 + 384);
    v24[2] = a4;
    if ( v13 )
    {
      v21 = *(_QWORD *)(v13 + 88);
      if ( v21 )
        v24[4] = *(_DWORD *)(v21 + 56);
    }
    v14 = *(_WORD *)(a2 + 208);
    if ( v14 )
    {
      v15 = v14 >> 1;
      v16 = 260;
      if ( v15 > 0x104u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
      else
        v16 = v15;
      v17 = *(const void **)(a2 + 216);
      v24[12] = v16;
      memmove(&v24[13], v17, 2LL * v16);
    }
    if ( a1 == 1 )
    {
      v18 = *(_DWORD *)(a2 + 464);
      *(_QWORD *)&v24[5] = *(_QWORD *)(a2 + 456);
      v24[7] = v18;
    }
    else if ( a1 == 2 )
    {
      v19 = *(_DWORD *)(a2 + 480);
      v20 = *(_QWORD *)(a2 + 472);
      *(_OWORD *)&v24[5] = *(_OWORD *)(a2 + 456);
      v24[11] = v19;
      *(_QWORD *)&v24[9] = v20;
    }
    else
    {
      v22 = *(_QWORD *)(a2 + 464);
      LOWORD(v24[5]) = *(_WORD *)(v22 + 16);
      v23 = *(_WORD *)(v22 + 18);
      v10 = *(_QWORD *)(a2 + 456);
      HIWORD(v24[5]) = v23;
      v24[6] = *(_DWORD *)(v10 + 110);
      LOWORD(v24[7]) = *(_WORD *)(v10 + 114);
    }
    return InputExtensibilityCallout::CoreMsgSendMessage(v10, 13);
  }
  return result;
}
