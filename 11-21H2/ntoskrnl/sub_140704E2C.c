/*
 * XREFs of sub_140704E2C @ 0x140704E2C
 * Callers:
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_140704EF8 @ 0x140704EF8 (sub_140704EF8.c)
 * Callees:
 *     sub_140294DD8 @ 0x140294DD8 (sub_140294DD8.c)
 *     sub_140297F80 @ 0x140297F80 (sub_140297F80.c)
 *     sub_14029A240 @ 0x14029A240 (sub_14029A240.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_140704E2C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  ULONG Alignment[6]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0;
  Alignment[0] = 0;
  result = sub_140297F80(a4, &v10);
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      return 3221225659LL;
    }
    else
    {
      sub_14029A240(a4, 0LL, Alignment);
      if ( (v10 & 1) != 0 )
        ProbeForWrite((volatile void *)(a2 + *(int *)(a3 + 8)), *(unsigned int *)(a3 + 12), Alignment[0]);
      if ( (v10 & 2) != 0 )
        ProbeForWrite((volatile void *)(a2 + *(int *)(a3 + 16)), *(unsigned int *)(a3 + 20), 0x40u);
      result = sub_140294DD8(1, a2, a3, a4, a5, 0LL);
      Alignment[1] = result;
    }
  }
  return result;
}
