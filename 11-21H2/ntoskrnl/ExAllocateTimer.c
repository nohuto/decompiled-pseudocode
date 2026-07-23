/*
 * XREFs of ExAllocateTimer @ 0x1402D5B50
 * Callers:
 *     sub_14074F848 @ 0x14074F848 (sub_14074F848.c)
 *     sub_1408281D8 @ 0x1408281D8 (sub_1408281D8.c)
 *     sub_14083F5FC @ 0x14083F5FC (sub_14083F5FC.c)
 *     sub_1409EC088 @ 0x1409EC088 (sub_1409EC088.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     ntoskrnl_4 @ 0x1402D5B80 (ntoskrnl_4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ntoskrnl_4(a1, a2, 0LL, a3);
}
