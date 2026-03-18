/*
 * XREFs of ZwAlpcConnectPort @ 0x14041BC80
 * Callers:
 *     DifZwAlpcConnectPortWrapper @ 0x1405ECEC0 (DifZwAlpcConnectPortWrapper.c)
 *     DbgkRegisterErrorPort @ 0x140939914 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
