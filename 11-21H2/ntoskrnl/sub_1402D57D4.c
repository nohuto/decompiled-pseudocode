/*
 * XREFs of sub_1402D57D4 @ 0x1402D57D4
 * Callers:
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x1402D3E10 (ExCancelTimer.c)
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_1402D57D4(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = byte_140D06991;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != byte_140D06991 )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, *((char *)KeGetCurrentThread() + 562), 0LL);
  return result;
}
