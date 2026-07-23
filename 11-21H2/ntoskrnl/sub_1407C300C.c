/*
 * XREFs of sub_1407C300C @ 0x1407C300C
 * Callers:
 *     sub_1406B3C34 @ 0x1406B3C34 (sub_1406B3C34.c)
 *     sub_14071B730 @ 0x14071B730 (sub_14071B730.c)
 *     sub_1407C16A0 @ 0x1407C16A0 (sub_1407C16A0.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 *     sub_140915854 @ 0x140915854 (sub_140915854.c)
 * Callees:
 *     sub_14071B20C @ 0x14071B20C (sub_14071B20C.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 */

__int64 __fastcall sub_1407C300C(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != a2 )
      {
        sub_14071B20C(a1, a2, &v3, &v4);
        sub_140AB42D0(v3);
        a1 = v4;
      }
    }
  }
  else
  {
    if ( !a2 )
      return result;
    a1 = a2;
  }
  return sub_140AB42D0(a1);
}
