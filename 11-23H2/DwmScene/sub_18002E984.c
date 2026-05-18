/*
 * XREFs of sub_18002E984 @ 0x18002E984
 * Callers:
 *     sub_18002E984 @ 0x18002E984 (sub_18002E984.c)
 *     sub_18003185C @ 0x18003185C (sub_18003185C.c)
 *     sub_1800386F8 @ 0x1800386F8 (sub_1800386F8.c)
 * Callees:
 *     sub_18002E984 @ 0x18002E984 (sub_18002E984.c)
 *     sub_18002F1CC @ 0x18002F1CC (sub_18002F1CC.c)
 */

__int64 __fastcall sub_18002E984(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002F1CC(v7, v6) )
  {
    sub_18002E984(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
