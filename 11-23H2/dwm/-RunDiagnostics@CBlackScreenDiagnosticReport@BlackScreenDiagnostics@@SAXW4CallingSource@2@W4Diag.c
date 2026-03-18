/*
 * XREFs of ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E8D4
 * Callers:
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000EA28 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 *     ?RunDiagnosticsFromLongPowerButtonHold@BlackScreenDiagnostics@@YAXAEBU_GUID@@@Z @ 0x14000EAE0 (-RunDiagnosticsFromLongPowerButtonHold@BlackScreenDiagnostics@@YAXAEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140005BF0 (__security_check_cookie.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E584 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x14000EE5C (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     _tlgKeywordOn @ 0x14000EFB8 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x14000EFEC (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(
        unsigned int a1,
        unsigned int a2,
        const unsigned __int16 *a3)
{
  BlackScreenDiagnostics::CBlackScreenDiagnosticReport *v6; // rcx
  REGHANDLE v7; // rcx
  unsigned int v8; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v9; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v10; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+7h]
  int v13; // [rsp+70h] [rbp+Fh]
  int v14; // [rsp+74h] [rbp+13h]
  const unsigned __int16 *v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  int *v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  int *v21; // [rsp+98h] [rbp+37h]
  int v22; // [rsp+A0h] [rbp+3Fh]
  int v23; // [rsp+A4h] [rbp+43h]

  if ( TryAcquireSRWLockExclusive(&BlackScreenDiagnostics::CBlackScreenDiagnosticReport::s_srwLock) )
  {
    TraceLoggingRegisterEx_EventRegister_EventSetInformation();
    if ( (unsigned int)dword_140017000 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn() )
      {
        v23 = 0;
        v20 = 0;
        v17 = 0;
        v14 = 0;
        v21 = (int *)&v8;
        v22 = 4;
        v18 = (int *)&v9;
        v12 = &v10;
        v19 = 4;
        v8 = a2;
        v9 = a1;
        v10 = 50331648LL;
        v15 = a3;
        v16 = 16;
        v13 = 8;
        tlgWriteTransfer_EventWriteTransfer((int)&dword_140017000, (int)&dword_1400123EE, 0, 0, 6u, &v11);
      }
    }
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::Run(
      v6,
      (const unsigned __int16 *)a1,
      (const unsigned __int16 *)a2,
      a3);
    v7 = RegHandle;
    RegHandle = 0LL;
    dword_140017000 = 0;
    EventUnregister(v7);
    ReleaseSRWLockExclusive(&BlackScreenDiagnostics::CBlackScreenDiagnosticReport::s_srwLock);
  }
}
