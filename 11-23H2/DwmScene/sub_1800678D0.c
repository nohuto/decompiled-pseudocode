/*
 * XREFs of sub_1800678D0 @ 0x1800678D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 *     sub_180068E68 @ 0x180068E68 (sub_180068E68.c)
 *     sub_18006A694 @ 0x18006A694 (sub_18006A694.c)
 *     sub_18006B29C @ 0x18006B29C (sub_18006B29C.c)
 *     sub_18006BADC @ 0x18006BADC (sub_18006BADC.c)
 *     sub_18006DE34 @ 0x18006DE34 (sub_18006DE34.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800678D0(__int64 a1, __int64 a2)
{
  sub_18006A694();
  if ( sub_180057460(a1 + 1464) )
  {
    sub_18006B29C(a1, a2);
    sub_18006DE34(a1, a2);
  }
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 1552));
  sub_180068E68(a1, a2, a1 + 1488);
  Mtx_unlock((_Mtx_t)(a1 + 1552));
  if ( sub_180057460(a1 + 1465) )
    sub_18006BADC(a1, a2, 0LL);
  return sub_18006AFE4(a1, a2, a1 + 200);
}
