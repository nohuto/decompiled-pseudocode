/*
 * XREFs of EtwTraceFlipManagerProducerSetContent_Enabled @ 0x1C014DE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EtwTraceFlipManagerProducerSetContent_Enabled()
{
  unsigned int v0; // edx

  if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) == 0 )
    return 0;
  v0 = 1;
  if ( (unsigned __int8)(byte_1C028DB38 - 1) <= 2u
    || (qword_1C028DB20 & 0x8000000000001000uLL) == 0
    || (qword_1C028DB28 & 0x8000000000001000uLL) != qword_1C028DB28 )
  {
    return 0;
  }
  return v0;
}
