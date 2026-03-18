/*
 * XREFs of EtwTraceFlipManagerBufferAvailable @ 0x1C014D070
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qpt_EtwWriteTransfer @ 0x1C00D84B8 (McTemplateK0qpt_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerBufferAvailable(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qpt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
