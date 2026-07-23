/*
 * XREFs of sub_1407A5668 @ 0x1407A5668
 * Callers:
 *     sub_14066BC7C @ 0x14066BC7C (sub_14066BC7C.c)
 *     sub_1406CBB84 @ 0x1406CBB84 (sub_1406CBB84.c)
 *     sub_1407A74A4 @ 0x1407A74A4 (sub_1407A74A4.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_1407A5668(__int64 a1)
{
  ULONG_PTR v1; // rbx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v3, 0);
  *(_BYTE *)(a1 - 32) &= ~4u;
  v1 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 - 16);
  return sub_1402AFC00(v1);
}
