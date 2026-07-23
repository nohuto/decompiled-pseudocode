/*
 * XREFs of sub_14026A6C4 @ 0x14026A6C4
 * Callers:
 *     sub_14026A5DC @ 0x14026A5DC (sub_14026A5DC.c)
 * Callees:
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 */

__int64 __fastcall sub_14026A6C4(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  _QWORD *v3; // rcx

  v1 = sub_1403250B0(&StartContext, a1, 778LL);
  v2 = v1;
  if ( v1 != -1 )
  {
    v3 = (_QWORD *)(48 * v1 - 0x21FFFFFFFFF0LL);
    *v3 = 0LL;
    sub_1402E89B0(v3, 0LL, v1);
  }
  return v2;
}
