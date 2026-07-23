/*
 * XREFs of IoSetIoCompletion @ 0x1407D55B0
 * Callers:
 *     sub_14025863C @ 0x14025863C (sub_14025863C.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 * Callees:
 *     sub_14035A850 @ 0x14035A850 (sub_14035A850.c)
 */

__int64 __fastcall IoSetIoCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  return sub_14035A850(a1, a2, a3, a4, a5, a6, 0LL, 0);
}
