/*
 * XREFs of ZwSetSystemEnvironmentValue @ 0x14041E7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING VariableValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}
