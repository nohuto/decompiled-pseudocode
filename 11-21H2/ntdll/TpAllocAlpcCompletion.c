/*
 * XREFs of TpAllocAlpcCompletion @ 0x180081460
 * Callers:
 *     <none>
 * Callees:
 *     TppAllocAlpcCompletion @ 0x180081594 (TppAllocAlpcCompletion.c)
 */

NTSTATUS __cdecl TpAllocAlpcCompletion(
        PTP_ALPC *AlpcReturn,
        HANDLE AlpcPort,
        PTP_ALPC_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  return TppAllocAlpcCompletion(AlpcReturn, AlpcPort, Callback, Context, CallbackEnviron, v6);
}
