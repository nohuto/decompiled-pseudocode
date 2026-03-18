/*
 * XREFs of IovDetachDevice @ 0x140AC16AC
 * Callers:
 *     IoDetachDevice @ 0x140365FE0 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140AD23C8 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
