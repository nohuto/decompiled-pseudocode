/*
 * XREFs of EtwTraceFlipManagerCreate @ 0x1C014D180
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C014F9C8 (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerCreate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &FlipManagerCreate, a3, (unsigned int)a1);
  return result;
}
