/*
 * XREFs of sub_18002BCC0 @ 0x18002BCC0
 * Callers:
 *     sub_1800280E8 @ 0x1800280E8 (sub_1800280E8.c)
 *     sub_18002A08C @ 0x18002A08C (sub_18002A08C.c)
 *     sub_18002A240 @ 0x18002A240 (sub_18002A240.c)
 *     sub_1800355F8 @ 0x1800355F8 (sub_1800355F8.c)
 *     sub_180035680 @ 0x180035680 (sub_180035680.c)
 *     sub_18004D508 @ 0x18004D508 (sub_18004D508.c)
 *     sub_18004D5E0 @ 0x18004D5E0 (sub_18004D5E0.c)
 *     sub_18004D6B8 @ 0x18004D6B8 (sub_18004D6B8.c)
 *     sub_18004D790 @ 0x18004D790 (sub_18004D790.c)
 *     sub_18004D864 @ 0x18004D864 (sub_18004D864.c)
 *     sub_18004D93C @ 0x18004D93C (sub_18004D93C.c)
 *     sub_18004E560 @ 0x18004E560 (sub_18004E560.c)
 *     sub_18004F104 @ 0x18004F104 (sub_18004F104.c)
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 *     sub_18005D638 @ 0x18005D638 (sub_18005D638.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 *     sub_18007A618 @ 0x18007A618 (sub_18007A618.c)
 *     sub_18007A8C0 @ 0x18007A8C0 (sub_18007A8C0.c)
 *     sub_18007A998 @ 0x18007A998 (sub_18007A998.c)
 *     sub_18007AA0C @ 0x18007AA0C (sub_18007AA0C.c)
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 *     sub_180096660 @ 0x180096660 (sub_180096660.c)
 *     sub_180099338 @ 0x180099338 (sub_180099338.c)
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 *     sub_1800EE7A4 @ 0x1800EE7A4 (sub_1800EE7A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002BCC0(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
