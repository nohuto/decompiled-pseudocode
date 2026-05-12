/*
 * XREFs of StorPortAdapterDirectedPowerDownCompletion @ 0x1C004DA50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0043BF8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterDirectedPowerDownCompletion(
        PDEVICE_OBJECT DeviceObject,
        __int64 MinorFunction,
        __int64 PowerState,
        _BYTE *Context)
{
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+28h] [rbp-10h]

  Context[107] &= ~4u;
  v5 = (Context[108] & 1) == 0;
  v6 = *((_QWORD *)Context + 612);
  *((_QWORD *)Context + 658) = MEMORY[0xFFFFF78000000008];
  if ( v5 )
  {
    *(_DWORD *)(v6 + 20) &= ~0x20u;
  }
  else
  {
    *(_DWORD *)(v6 + 20) |= 0x20u;
    if ( !*((_QWORD *)Context + 657) )
      *((_QWORD *)Context + 657) = *((_QWORD *)Context + 658);
  }
  PoFxCompleteDirectedPowerDown(**((_QWORD **)Context + 612), MinorFunction, PowerState);
  if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
  {
    v10 = 1;
    v9 = *((_DWORD *)Context + 14);
    McTemplateK0pqq_EtwWriteTransfer(v7, &EventAdapterDirectedPowerDownStop, v8, **((_QWORD **)Context + 612), v9, v10);
  }
  Context[109] |= 0x40u;
}
