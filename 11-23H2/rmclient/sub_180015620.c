/*
 * XREFs of sub_180015620 @ 0x180015620
 * Callers:
 *     sub_180015150 @ 0x180015150 (sub_180015150.c)
 *     sub_180015160 @ 0x180015160 (sub_180015160.c)
 * Callees:
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_18000F974 @ 0x18000F974 (sub_18000F974.c)
 */

void __fastcall sub_180015620(__int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)a1 )
  {
    v2 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v3 = v2;
    sub_18000F974(a1);
    *(_BYTE *)(a1 + 24) = 0;
    sub_18000CE58(&v3);
  }
}
