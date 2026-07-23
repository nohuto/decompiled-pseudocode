/*
 * XREFs of sub_140329630 @ 0x140329630
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_140282D10 @ 0x140282D10 (sub_140282D10.c)
 *     sub_1402E57FC @ 0x1402E57FC (sub_1402E57FC.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_140387140 @ 0x140387140 (sub_140387140.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 * Callees:
 *     sub_14024AA58 @ 0x14024AA58 (sub_14024AA58.c)
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_14028DC40 @ 0x14028DC40 (sub_14028DC40.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 */

unsigned __int64 __fastcall sub_140329630(ULONG_PTR *a1, unsigned __int64 a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v7; // rdx
  bool v8; // zf
  unsigned __int32 v9; // eax
  unsigned __int64 v10; // rbx
  __int64 v12; // r8

  while ( 1 )
  {
    if ( a1 == &StartContext )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = *((unsigned int *)CurrentPrcb + 8615);
      if ( a2 <= v7 )
      {
        do
        {
          if ( (_DWORD)v7 == -1 )
            break;
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v7 - a2, v7);
          v8 = (_DWORD)v7 == v9;
          LODWORD(v7) = v9;
          if ( v8 )
            goto LABEL_5;
        }
        while ( a2 <= v9 );
      }
    }
    v12 = 1LL;
    if ( a2 != 1 )
      v12 = 1024LL;
    if ( (unsigned int)sub_14028DC40((__int64)a1, a2, v12) )
      break;
    a2 >>= 1;
    if ( !a2 )
      goto LABEL_20;
  }
LABEL_5:
  if ( a2 )
    goto LABEL_6;
LABEL_20:
  if ( (a3 & 2) == 0 )
    return 0LL;
  a2 = 1LL;
  sub_1402821F4(a1, 1uLL, 0xFFFFFFFFLL);
LABEL_6:
  if ( (a3 & 1) == 0 )
    return a2;
  v10 = a2;
  while ( !(unsigned int)sub_14032A4B0(a1, v10, 1LL) )
  {
    v10 >>= 1;
    if ( !v10 )
    {
      if ( (a3 & 2) != 0 )
      {
        v10 = 1LL;
        sub_14032A4B0(a1, 1LL, 4LL);
      }
      break;
    }
  }
  if ( v10 != a2 )
    sub_14024AA58((__int64)a1, a2 - v10, 0);
  return v10;
}
