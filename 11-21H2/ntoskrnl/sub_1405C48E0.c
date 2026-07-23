/*
 * XREFs of sub_1405C48E0 @ 0x1405C48E0
 * Callers:
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 * Callees:
 *     sub_140283DF0 @ 0x140283DF0 (sub_140283DF0.c)
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_140287180 @ 0x140287180 (sub_140287180.c)
 *     sub_14059DF58 @ 0x14059DF58 (sub_14059DF58.c)
 */

__int64 __fastcall sub_1405C48E0(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4, int a5)
{
  __int64 *v9; // rbp
  __int64 *v10; // rax
  unsigned __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v9 = (__int64 *)sub_140286F90(a1, *a2, &v12);
  a5 = -a5;
  if ( a4 )
  {
    v10 = sub_140287180(a1, (a3 << 12) + *a2 - 1, 0);
    sub_14059DF58(v9, v10);
  }
  return sub_140283DF0(v9);
}
