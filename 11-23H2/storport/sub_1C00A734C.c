/*
 * XREFs of sub_1C00A734C @ 0x1C00A734C
 * Callers:
 *     sub_1C00353FC @ 0x1C00353FC (sub_1C00353FC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00A734C(__int64 a1)
{
  ULONG v1; // eax
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 740);
  *(&Parameters.Version + 1) = 0;
  Parameters.Version = v1;
  Parameters.ConnectionContext.Generic = *(PVOID *)(a1 + 4288);
  IoDisconnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 728) = 0LL;
}
