/*
 * XREFs of EtwTraceOnInputXformUpdate @ 0x1C00BBBE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C01507D0 (McTemplateK0pxq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceOnInputXformUpdate(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0pxq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
