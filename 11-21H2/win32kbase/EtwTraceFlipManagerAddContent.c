/*
 * XREFs of EtwTraceFlipManagerAddContent @ 0x1C014CFB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qpx_EtwWriteTransfer @ 0x1C00D853C (McTemplateK0qpx_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerAddContent(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qpx_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
