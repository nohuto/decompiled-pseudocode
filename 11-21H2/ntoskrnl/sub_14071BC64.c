/*
 * XREFs of sub_14071BC64 @ 0x14071BC64
 * Callers:
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_14069E368 @ 0x14069E368 (sub_14069E368.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_14080FD00 @ 0x14080FD00 (sub_14080FD00.c)
 *     sub_14080FD5C @ 0x14080FD5C (sub_14080FD5C.c)
 *     sub_140914D00 @ 0x140914D00 (sub_140914D00.c)
 *     sub_14091CBB0 @ 0x14091CBB0 (sub_14091CBB0.c)
 *     sub_140920D44 @ 0x140920D44 (sub_140920D44.c)
 *     sub_140924550 @ 0x140924550 (sub_140924550.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14071BC64(volatile signed __int64 *BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  return result;
}
