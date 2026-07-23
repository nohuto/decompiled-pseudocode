/*
 * XREFs of ExIsSoftBoot @ 0x1403B72A0
 * Callers:
 *     sub_14068B1C8 @ 0x14068B1C8 (sub_14068B1C8.c)
 *     sub_1408285B0 @ 0x1408285B0 (sub_1408285B0.c)
 *     sub_1408288D4 @ 0x1408288D4 (sub_1408288D4.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     IoAcquireKsrPersistentMemoryEx @ 0x1409407A0 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x140940A60 (IoQueryKsrPersistentMemorySizeEx.c)
 *     sub_1409ED690 @ 0x1409ED690 (sub_1409ED690.c)
 *     sub_140A5464C @ 0x140A5464C (sub_140A5464C.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140C15C78 & 4) != 0;
}
