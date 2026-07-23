/*
 * XREFs of ZwFlushKey @ 0x14041D540
 * Callers:
 *     sub_1405FDAE4 @ 0x1405FDAE4 (sub_1405FDAE4.c)
 *     sub_140620810 @ 0x140620810 (sub_140620810.c)
 *     sub_1406390F8 @ 0x1406390F8 (sub_1406390F8.c)
 *     sub_1408009E0 @ 0x1408009E0 (sub_1408009E0.c)
 *     sub_140832128 @ 0x140832128 (sub_140832128.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     sub_140A51CA4 @ 0x140A51CA4 (sub_140A51CA4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, v1);
}
