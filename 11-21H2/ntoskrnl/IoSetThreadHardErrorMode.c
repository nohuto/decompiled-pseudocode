/*
 * XREFs of IoSetThreadHardErrorMode @ 0x1402A0800
 * Callers:
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140387570 (FsRtlGetVirtualDiskNestingLevel.c)
 *     sub_1405FB648 @ 0x1405FB648 (sub_1405FB648.c)
 *     sub_14067C24C @ 0x14067C24C (sub_14067C24C.c)
 *     sub_14068EC28 @ 0x14068EC28 (sub_14068EC28.c)
 *     sub_1406A443C @ 0x1406A443C (sub_1406A443C.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     sub_14070AAD0 @ 0x14070AAD0 (sub_14070AAD0.c)
 *     sub_14070AC28 @ 0x14070AC28 (sub_14070AC28.c)
 *     sub_14070BCA4 @ 0x14070BCA4 (sub_14070BCA4.c)
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 *     sub_1409D57BC @ 0x1409D57BC (sub_1409D57BC.c)
 *     sub_1409D59E8 @ 0x1409D59E8 (sub_1409D59E8.c)
 *     sub_1409D5B38 @ 0x1409D5B38 (sub_1409D5B38.c)
 *     sub_1409D64F8 @ 0x1409D64F8 (sub_1409D64F8.c)
 *     sub_1409D69A8 @ 0x1409D69A8 (sub_1409D69A8.c)
 *     sub_1409D6C58 @ 0x1409D6C58 (sub_1409D6C58.c)
 *     sub_1409D6CF4 @ 0x1409D6CF4 (sub_1409D6CF4.c)
 *     sub_1409D71F0 @ 0x1409D71F0 (sub_1409D71F0.c)
 *     sub_1409D7390 @ 0x1409D7390 (sub_1409D7390.c)
 *     sub_1409D75C0 @ 0x1409D75C0 (sub_1409D75C0.c)
 *     sub_1409EB374 @ 0x1409EB374 (sub_1409EB374.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoSetThreadHardErrorMode(BOOLEAN EnableHardErrors)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int8 v2; // cf

  CurrentThread = KeGetCurrentThread();
  if ( EnableHardErrors )
    v2 = _interlockedbittestandreset((volatile signed __int32 *)CurrentThread + 344, 4u);
  else
    v2 = _interlockedbittestandset((volatile signed __int32 *)CurrentThread + 344, 4u);
  return v2 == 0;
}
