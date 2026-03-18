/*
 * XREFs of ZwSetInformationProcess @ 0x14041B0E0
 * Callers:
 *     DifZwSetInformationProcessWrapper @ 0x1405F7320 (DifZwSetInformationProcessWrapper.c)
 *     RtlCreateUserStack @ 0x14077407C (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1407DE480 (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x14080AADC (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x140B68C34 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
