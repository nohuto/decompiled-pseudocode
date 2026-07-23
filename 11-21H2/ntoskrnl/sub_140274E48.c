/*
 * XREFs of sub_140274E48 @ 0x140274E48
 * Callers:
 *     sub_140239C2C @ 0x140239C2C (sub_140239C2C.c)
 *     sub_14025592C @ 0x14025592C (sub_14025592C.c)
 *     sub_14025AD28 @ 0x14025AD28 (sub_14025AD28.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_140276E5C @ 0x140276E5C (sub_140276E5C.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 * Callees:
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 */

__int64 __fastcall sub_140274E48(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v4 = sub_140232694(&v6, 0, a3);
  if ( !v4 )
    return 0LL;
  sub_1402E20D0(a1, v4, 0LL);
  return 1LL;
}
