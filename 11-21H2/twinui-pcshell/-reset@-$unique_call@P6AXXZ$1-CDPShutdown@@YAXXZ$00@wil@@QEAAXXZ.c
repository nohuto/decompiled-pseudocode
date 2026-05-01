/*
 * XREFs of ?reset@?$unique_call@P6AXXZ$1?CDPShutdown@@YAXXZ$00@wil@@QEAAXXZ @ 0x1800A9378
 * Callers:
 *     ??1TaskFlowImmersiveShellBroker@@UEAA@XZ @ 0x1800A6FE8 (--1TaskFlowImmersiveShellBroker@@UEAA@XZ.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A78B4 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall wil::unique_call<void (*)(void),&void CDPShutdown(void),1>::reset(char *a1)
{
  char result; // al

  result = *a1;
  *a1 = 0;
  if ( result )
    return CDPShutdown();
  return result;
}
