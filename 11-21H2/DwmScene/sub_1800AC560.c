/*
 * XREFs of sub_1800AC560 @ 0x1800AC560
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18004981C @ 0x18004981C (sub_18004981C.c)
 *     sub_180049AF0 @ 0x180049AF0 (sub_180049AF0.c)
 *     sub_180049D64 @ 0x180049D64 (sub_180049D64.c)
 *     sub_18005211C @ 0x18005211C (sub_18005211C.c)
 */

__int64 __fastcall sub_1800AC560(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_18005211C(a2, v7, a3);
  v3 = sub_18004981C(v7[0]);
  sub_180049D64(v7[0], 9, (unsigned int)(v3 - 1) <= 1);
  sub_180049D64(v7[0], 8, (unsigned int)(v3 - 2) <= 1);
  if ( v3 == 1 || v3 == 2 )
    LOBYTE(v4) = 1;
  else
    v4 = 0LL;
  sub_180049AF0(v7[0], (__int64)&qword_1801F5B18, v4);
  LOBYTE(v5) = (unsigned int)(v3 - 2) <= 1;
  sub_180049AF0(v7[0], (__int64)&qword_1801F5B38, v5);
  return sub_180010910((__int64)v7);
}
