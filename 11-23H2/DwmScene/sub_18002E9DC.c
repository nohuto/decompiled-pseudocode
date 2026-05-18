/*
 * XREFs of sub_18002E9DC @ 0x18002E9DC
 * Callers:
 *     sub_18002E9DC @ 0x18002E9DC (sub_18002E9DC.c)
 *     sub_18003188C @ 0x18003188C (sub_18003188C.c)
 *     sub_180038658 @ 0x180038658 (sub_180038658.c)
 * Callees:
 *     sub_18002E9DC @ 0x18002E9DC (sub_18002E9DC.c)
 *     sub_18002F1F8 @ 0x18002F1F8 (sub_18002F1F8.c)
 */

__int64 __fastcall sub_18002E9DC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002F1F8(v7, v6) )
  {
    sub_18002E9DC(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
