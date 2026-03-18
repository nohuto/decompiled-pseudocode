/*
 * XREFs of EtwTraceFocusChange @ 0x1C00B6DB0
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0091630 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 * Callees:
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C00E58B0 (McTemplateK0dq_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceFocusChange(__int64 a1, int a2)
{
  char result; // al

  if ( (W32kEtwEnabledKeyword & 0x8000000000002000uLL) != 0 )
  {
    result = byte_1C028DB38 - 1;
    if ( (unsigned __int8)(byte_1C028DB38 - 1) > 2u && (qword_1C028DB20 & 0x8000000000002000uLL) != 0 )
    {
      result = 0;
      if ( (qword_1C028DB28 & 0x8000000000002000uLL) == qword_1C028DB28 && (Microsoft_Windows_Win32kEnableBits & 2) != 0 )
        return McTemplateK0dq_EtwWriteTransfer(a1, &FocusEvent, 0x8000000000002000uLL, (unsigned int)a1, a2);
    }
  }
  return result;
}
