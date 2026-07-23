/*
 * XREFs of sub_1409CCC54 @ 0x1409CCC54
 * Callers:
 *     sub_1409CCB9C @ 0x1409CCB9C (sub_1409CCB9C.c)
 *     sub_1409CCBCC @ 0x1409CCBCC (sub_1409CCBCC.c)
 *     sub_1409CCE04 @ 0x1409CCE04 (sub_1409CCE04.c)
 * Callees:
 *     sub_1409C6834 @ 0x1409C6834 (sub_1409C6834.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409CCC54(volatile signed __int64 *P, __int64 a2)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 v5; // rax

  if ( P )
  {
    v3 = _InterlockedExchangeAdd64(P + 1, 0xFFFFFFFFFFFFFFFFuLL);
    v4 = v3 <= 1;
    v5 = v3 - 1;
    if ( v4 )
    {
      if ( v5 )
        __fastfail(0xEu);
      sub_1409C6834(5, (__int64)P, 0LL, a2);
      ExFreePoolWithTag((PVOID)P, 0);
    }
  }
}
