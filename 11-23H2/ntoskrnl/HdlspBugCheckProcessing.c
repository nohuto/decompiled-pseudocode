/*
 * XREFs of HdlspBugCheckProcessing @ 0x140AE9D84
 * Callers:
 *     HdlspDispatch @ 0x140AE9EB0 (HdlspDispatch.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402C32C0 (KeStallExecutionProcessor.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _stricmp @ 0x1403D9930 (_stricmp.c)
 *     HalReturnToFirmware @ 0x140506EB0 (HalReturnToFirmware.c)
 *     HdlspGetLine @ 0x140AEA690 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140AEACAC (HdlspProcessDumpCommand.c)
 *     HdlspSendStringAtBaud @ 0x140AEB474 (HdlspSendStringAtBaud.c)
 */

__int64 HdlspBugCheckProcessing()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  const char *v3; // rcx
  char Str1[80]; // [rsp+20h] [rbp-68h] BYREF

  result = HdlspGetLine(Str1, 0x50uLL);
  if ( (_BYTE)result )
  {
    if ( !stricmp(Str1, "?") || !stricmp(Str1, "help") )
    {
      HdlspSendStringAtBaud("\r\n");
      HdlspSendStringAtBaud("d        Display all log entries, paging is on.\r\n");
      HdlspSendStringAtBaud("help     Display this list.\r\n");
      HdlspSendStringAtBaud("restart  Restart the system immediately.\r\n");
      HdlspSendStringAtBaud("?        Display this list.\r\n");
      v3 = "\r\n";
    }
    else
    {
      if ( !stricmp(Str1, "d") )
      {
        LOBYTE(v1) = 1;
        HdlspProcessDumpCommand(v1);
        return HdlspSendStringAtBaud("\n\r!SAC>");
      }
      if ( !stricmp(Str1, "restart") )
      {
        v2 = 10LL;
        do
        {
          KeStallExecutionProcessor(0x186A0u);
          --v2;
        }
        while ( v2 );
        HalReturnToFirmware(3);
      }
      v3 = "Type ? or Help for a list of commands.\r\n";
    }
    HdlspSendStringAtBaud(v3);
    return HdlspSendStringAtBaud("\n\r!SAC>");
  }
  return result;
}
