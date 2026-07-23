/*
 * XREFs of NtQueryIoRingCapabilities @ 0x14094AA90
 * Callers:
 *     <none>
 * Callees:
 *     IopExceptionFilter @ 0x140555BA8 (IopExceptionFilter.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryIoRingCapabilities(SIZE_T IoRingCapabilitiesLength, PVOID IoRingCapabilities)
{
  char PreviousMode; // dl

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)IoRingCapabilitiesLength < 0x14 )
    return -1073741789;
  if ( PreviousMode )
    ProbeForWrite(IoRingCapabilities, (unsigned int)IoRingCapabilitiesLength, 1u);
  *(_DWORD *)IoRingCapabilities = 300;
  *((_DWORD *)IoRingCapabilities + 1) = 7;
  *((_DWORD *)IoRingCapabilities + 2) = 2;
  *((_DWORD *)IoRingCapabilities + 3) = 0x10000;
  *((_DWORD *)IoRingCapabilities + 4) = 0x20000;
  return 0;
}
