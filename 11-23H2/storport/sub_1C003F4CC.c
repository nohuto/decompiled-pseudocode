/*
 * XREFs of sub_1C003F4CC @ 0x1C003F4CC
 * Callers:
 *     sub_1C0017CC0 @ 0x1C0017CC0 (sub_1C0017CC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C003F4CC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        __int64 a10)
{
  __int64 v10; // rdx

  if ( a10 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(a10 + v10) );
  }
  return ((__int64 (__fastcall *)(__int64, __int64, void *))qword_1C0093C08)(a1, 43LL, &unk_1C0089838);
}
