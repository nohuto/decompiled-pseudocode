/*
 * XREFs of RaidAdapterDisConnectMSIInterrupt @ 0x1C008C3F8
 * Callers:
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0034284 (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterDisConnectMSIInterrupt(__int64 a1)
{
  ULONG v1; // eax
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 732);
  *(&Parameters.Version + 1) = 0;
  Parameters.Version = v1;
  Parameters.ConnectionContext.Generic = *(PVOID *)(a1 + 4224);
  IoDisconnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 720) = 0LL;
}
