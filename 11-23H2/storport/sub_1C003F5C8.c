/*
 * XREFs of sub_1C003F5C8 @ 0x1C003F5C8
 * Callers:
 *     sub_1C0016800 @ 0x1C0016800 (sub_1C0016800.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C003F5C8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9)
{
  __int64 v9; // rdx

  if ( a9 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_BYTE *)(a9 + v9) );
  }
  return ((__int64 (__fastcall *)(__int64, __int64, void *))qword_1C0093C08)(a1, 43LL, &unk_1C0089838);
}
