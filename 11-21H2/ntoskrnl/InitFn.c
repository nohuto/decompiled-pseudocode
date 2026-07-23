/*
 * XREFs of InitFn @ 0x1403DE6A0
 * Callers:
 *     sub_14036EDD4 @ 0x14036EDD4 (sub_14036EDD4.c)
 * Callees:
 *     sub_14036F620 @ 0x14036F620 (sub_14036F620.c)
 */

__int64 __fastcall InitFn(PRTL_RUN_ONCE a1, __int128 *a2, PVOID *a3)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a2;
  v4 = sub_14036F620(0, (__int64)a2, (__int64)a3, &v6);
  result = 0LL;
  if ( v4 )
  {
    a1[-1].Ptr = (PVOID)v4;
    return 1LL;
  }
  return result;
}
