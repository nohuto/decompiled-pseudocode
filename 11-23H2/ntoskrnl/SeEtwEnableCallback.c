/*
 * XREFs of SeEtwEnableCallback @ 0x1403B6AD8
 * Callers:
 *     EtwpKernelProvEnableCallback @ 0x140865DD0 (EtwpKernelProvEnableCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall SeEtwEnableCallback(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  SepTokenSidManagementLoggingEnabled = (a4 & 0x40) != 0;
}
