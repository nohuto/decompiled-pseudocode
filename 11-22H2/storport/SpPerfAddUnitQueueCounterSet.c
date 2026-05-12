/*
 * XREFs of SpPerfAddUnitQueueCounterSet @ 0x1C00A81F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SpPerfAddUnitQueueCounterSet(
        struct _PCW_BUFFER *a1,
        const UNICODE_STRING *a2,
        ULONG a3,
        const void *a4)
{
  struct _PCW_DATA Data; // [rsp+30h] [rbp-18h] BYREF

  Data.Data = a4;
  Data.Size = 8;
  return PcwAddInstance(a1, a2, a3, 1u, &Data);
}
