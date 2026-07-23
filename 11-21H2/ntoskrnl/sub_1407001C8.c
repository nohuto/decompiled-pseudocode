/*
 * XREFs of sub_1407001C8 @ 0x1407001C8
 * Callers:
 *     sub_140683890 @ 0x140683890 (sub_140683890.c)
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_1406FFA80 @ 0x1406FFA80 (sub_1406FFA80.c)
 *     sub_1409AFD2C @ 0x1409AFD2C (sub_1409AFD2C.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall sub_1407001C8(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 1224, 0LL);
}
