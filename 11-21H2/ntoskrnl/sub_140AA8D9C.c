/*
 * XREFs of sub_140AA8D9C @ 0x140AA8D9C
 * Callers:
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _stricmp @ 0x1403E1190 (_stricmp.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_140AA9660 @ 0x140AA9660 (sub_140AA9660.c)
 *     sub_140AA9C94 @ 0x140AA9C94 (sub_140AA9C94.c)
 *     sub_140AAA418 @ 0x140AAA418 (sub_140AAA418.c)
 */

__int64 sub_140AA8D9C()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 *v3; // rcx
  char Str1[80]; // [rsp+20h] [rbp-68h] BYREF

  result = sub_140AA9660(Str1, 0x50uLL);
  if ( (_BYTE)result )
  {
    if ( !stricmp(Str1, "?") || !stricmp(Str1, "help") )
    {
      sub_140AAA418(qword_140AA80D0);
      sub_140AAA418("d        Display all log entries, paging is on.\r\n");
      sub_140AAA418("help     Display this list.\r\n");
      sub_140AAA418("restart  Restart the system immediately.\r\n");
      sub_140AAA418("?        Display this list.\r\n");
      v3 = qword_140AA80D0;
    }
    else
    {
      if ( !stricmp(Str1, "d") )
      {
        LOBYTE(v1) = 1;
        sub_140AA9C94(v1);
        return sub_140AAA418("\n\r!SAC>");
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
      v3 = (__int64 *)"Type ? or Help for a list of commands.\r\n";
    }
    sub_140AAA418(v3);
    return sub_140AAA418("\n\r!SAC>");
  }
  return result;
}
