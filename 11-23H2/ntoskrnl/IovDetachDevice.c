/*
 * XREFs of IovDetachDevice @ 0x140AC169C
 * Callers:
 *     IoDetachDevice @ 0x140366180 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140AD23B8 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
