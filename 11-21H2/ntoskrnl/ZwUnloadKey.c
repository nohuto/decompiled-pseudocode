/*
 * XREFs of ZwUnloadKey @ 0x14041F1C0
 * Callers:
 *     sub_140628480 @ 0x140628480 (sub_140628480.c)
 *     sub_1407F6200 @ 0x1407F6200 (sub_1407F6200.c)
 *     sub_1408073EC @ 0x1408073EC (sub_1408073EC.c)
 *     sub_140813960 @ 0x140813960 (sub_140813960.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(TargetKey, v1);
}
