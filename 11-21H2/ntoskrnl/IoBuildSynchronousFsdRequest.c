/*
 * XREFs of IoBuildSynchronousFsdRequest @ 0x140705EF0
 * Callers:
 *     sub_140A651B8 @ 0x140A651B8 (sub_140A651B8.c)
 *     sub_140A65554 @ 0x140A65554 (sub_140A65554.c)
 *     sub_140B0E310 @ 0x140B0E310 (sub_140B0E310.c)
 * Callees:
 *     sub_140705F30 @ 0x140705F30 (sub_140705F30.c)
 */

PIRP __stdcall IoBuildSynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)sub_140705F30(
                 MajorFunction,
                 (_DWORD)DeviceObject,
                 (_DWORD)Buffer,
                 Length,
                 (__int64)StartingOffset,
                 (__int64)Event,
                 (__int64)IoStatusBlock,
                 retaddr);
}
