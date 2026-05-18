/*
 * XREFs of sub_18002E92C @ 0x18002E92C
 * Callers:
 *     sub_18002E92C @ 0x18002E92C (sub_18002E92C.c)
 *     sub_18003182C @ 0x18003182C (sub_18003182C.c)
 *     sub_18003EE84 @ 0x18003EE84 (sub_18003EE84.c)
 * Callees:
 *     sub_18002E92C @ 0x18002E92C (sub_18002E92C.c)
 *     sub_18002F1A0 @ 0x18002F1A0 (sub_18002F1A0.c)
 */

__int64 __fastcall sub_18002E92C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002F1A0(v7, v6) )
  {
    sub_18002E92C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
