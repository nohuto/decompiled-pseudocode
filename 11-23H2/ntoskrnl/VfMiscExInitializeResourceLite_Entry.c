/*
 * XREFs of VfMiscExInitializeResourceLite_Entry @ 0x140ADFC00
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateSynchronizationObject @ 0x140AE1730 (ViMiscValidateSynchronizationObject.c)
 */

__int64 __fastcall VfMiscExInitializeResourceLite_Entry(__int64 a1)
{
  return ViMiscValidateSynchronizationObject(*(_QWORD *)(a1 + 8));
}
