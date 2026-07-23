/*
 * XREFs of sub_1407EDCAC @ 0x1407EDCAC
 * Callers:
 *     sub_1407EC2C8 @ 0x1407EC2C8 (sub_1407EC2C8.c)
 *     sub_1407ED644 @ 0x1407ED644 (sub_1407ED644.c)
 *     sub_140809408 @ 0x140809408 (sub_140809408.c)
 * Callees:
 *     sub_140369B48 @ 0x140369B48 (sub_140369B48.c)
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     sub_1407EF650 @ 0x1407EF650 (sub_1407EF650.c)
 */

__int64 __fastcall sub_1407EDCAC(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int Src; // [rsp+48h] [rbp+10h] BYREF

  Src = a2;
  sub_1407EF650(&stru_1400110A0);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_14086DEB0;
  sub_140369B48(3LL, (__int64)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  sub_14075140C(&stru_140011090, a1, 0, 4u, &Src);
  return sub_14075140C(&stru_140011090, a1, 1, 4u, &Src);
}
