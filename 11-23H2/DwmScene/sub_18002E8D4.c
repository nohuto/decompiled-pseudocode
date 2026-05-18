/*
 * XREFs of sub_18002E8D4 @ 0x18002E8D4
 * Callers:
 *     sub_18002E8A4 @ 0x18002E8A4 (sub_18002E8A4.c)
 *     sub_18002E8D4 @ 0x18002E8D4 (sub_18002E8D4.c)
 * Callees:
 *     sub_18002E8D4 @ 0x18002E8D4 (sub_18002E8D4.c)
 *     sub_18002F174 @ 0x18002F174 (sub_18002F174.c)
 */

__int64 __fastcall sub_18002E8D4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002F174(v7, v6) )
  {
    sub_18002E8D4(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
