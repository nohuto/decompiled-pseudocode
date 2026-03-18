/*
 * XREFs of NtQueryIoRingCapabilities @ 0x140939090
 * Callers:
 *     <none>
 * Callees:
 *     IopExceptionFilter @ 0x14025E7A8 (IopExceptionFilter.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryIoRingCapabilities(SIZE_T Length, _DWORD *Address)
{
  if ( (unsigned int)Length < 0x14 )
    return 3221225507LL;
  if ( KeGetCurrentThread()->PreviousMode )
    ProbeForWrite(Address, (unsigned int)Length, 1u);
  *Address = 2;
  Address[1] = 5;
  Address[2] = 2;
  Address[3] = 0x10000;
  Address[4] = 0x20000;
  return 0LL;
}
