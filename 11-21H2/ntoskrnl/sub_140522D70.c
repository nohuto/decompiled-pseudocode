/*
 * XREFs of sub_140522D70 @ 0x140522D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140522930 @ 0x140522930 (sub_140522930.c)
 */

__int64 __fastcall sub_140522D70(__int64 *a1, int a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
  {
    sub_140522930((__int64)a1, 3, 0);
    return 3221225485LL;
  }
  else
  {
    v5 = 0LL;
    v6 = 1LL;
    if ( a3 )
      v6 = a3;
    *a1 = v6;
    if ( a2 == 1 )
      v5 = v6;
    a1[1] = v5;
    sub_14042A5E0(0LL, 11LL);
    sub_14042A5E0(0LL, 11LL);
    sub_14042A5E0(0LL, 12LL);
    sub_14042A5E0(0LL, 13LL);
    sub_14042A5E0(0LL, 12LL);
    return 0LL;
  }
}
