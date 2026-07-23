/*
 * XREFs of PopNotifyConsoleUserPresent @ 0x1407D3A14
 * Callers:
 *     PopUserPresentSetWorker @ 0x14058E6A0 (PopUserPresentSetWorker.c)
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     NtSetThreadExecutionState @ 0x1407A8F10 (NtSetThreadExecutionState.c)
 *     PopSetSystemAwayMode @ 0x14098AA90 (PopSetSystemAwayMode.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x14035EE60 (RtlGetActiveConsoleId.c)
 *     TtmIsEnabled @ 0x1407A6280 (TtmIsEnabled.c)
 *     PopInvokeWin32Callout @ 0x1407D3B8C (PopInvokeWin32Callout.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409A4414 (TtmNotifyConsoleUserPresent.c)
 */

ULONG __fastcall PopNotifyConsoleUserPresent(char a1, unsigned int a2)
{
  ULONG result; // eax
  ULONG v5; // ebx
  int v6; // [rsp+20h] [rbp-30h] BYREF
  __int16 v7; // [rsp+25h] [rbp-2Bh]
  char v8; // [rsp+27h] [rbp-29h]
  int v9; // [rsp+28h] [rbp-28h]
  int v10; // [rsp+2Ch] [rbp-24h]
  int *v11; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+3Ch] [rbp-14h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  ULONG v15; // [rsp+80h] [rbp+30h] BYREF
  int v16; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v17; // [rsp+8Ch] [rbp+3Ch]

  result = 0;
  v7 = 0;
  v8 = 0;
  v10 = 0;
  v13 = 0;
  v16 = 0;
  LOBYTE(v17) = 0;
  if ( PsWin32CalloutsEstablished )
  {
    result = RtlGetActiveConsoleId();
    v15 = result;
    v5 = result;
    if ( result != -1 )
    {
      if ( TtmIsEnabled() )
      {
        return TtmNotifyConsoleUserPresent(v5, a2);
      }
      else
      {
        LOBYTE(v16) = a1;
        v11 = &v16;
        v17 = a2;
        v9 = 8;
        v12 = 0;
        v14 = 0LL;
        return PopInvokeWin32Callout(5LL, &v6, 1LL, &v15, 1);
      }
    }
  }
  return result;
}
