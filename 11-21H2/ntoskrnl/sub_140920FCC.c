/*
 * XREFs of sub_140920FCC @ 0x140920FCC
 * Callers:
 *     sub_14069EE0C @ 0x14069EE0C (sub_14069EE0C.c)
 *     sub_140920F1C @ 0x140920F1C (sub_140920F1C.c)
 * Callees:
 *     sub_14065BD24 @ 0x14065BD24 (sub_14065BD24.c)
 *     sub_14065C8A4 @ 0x14065C8A4 (sub_14065C8A4.c)
 */

__int64 __fastcall sub_140920FCC(__int16 *a1, unsigned __int16 *a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 result; // rax

  result = sub_14065C8A4((__int64)a1, *a2, a3, a4);
  if ( (int)result >= 0 )
  {
    sub_14065BD24(a1, (__int64)a2);
    return 0LL;
  }
  return result;
}
