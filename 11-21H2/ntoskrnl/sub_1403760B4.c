/*
 * XREFs of sub_1403760B4 @ 0x1403760B4
 * Callers:
 *     sub_140375ED0 @ 0x140375ED0 (sub_140375ED0.c)
 * Callees:
 *     sub_140233A4C @ 0x140233A4C (sub_140233A4C.c)
 *     sub_140233AA0 @ 0x140233AA0 (sub_140233AA0.c)
 */

__int64 __fastcall sub_1403760B4(__int64 a1, int a2)
{
  __int64 result; // rax
  _SLIST_ENTRY *v3; // rcx

  result = a1;
  if ( qword_140C52B40 )
  {
    v3 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_140C52B40, 0LL);
    if ( v3 )
    {
      if ( result - (unsigned __int64)v3[1].Next > qword_140CF5E00 || a2 )
        return sub_140233AA0(v3);
      else
        return sub_140233A4C(v3, 0);
    }
  }
  return result;
}
