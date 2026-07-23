/*
 * XREFs of sub_1403C68CC @ 0x1403C68CC
 * Callers:
 *     sub_140389D88 @ 0x140389D88 (sub_140389D88.c)
 *     LdrResSearchResource @ 0x140673120 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x140830F20 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1409B7260 (RtlLoadString.c)
 *     sub_140B146C4 @ 0x140B146C4 (sub_140B146C4.c)
 * Callees:
 *     sub_140372774 @ 0x140372774 (sub_140372774.c)
 *     bsearch @ 0x1403E1840 (bsearch.c)
 */

__int64 __fastcall sub_1403C68CC(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_1400036D0, 0x1B4uLL, 8uLL, sub_1403CB680)) != 0LL
    && ((v4 = &(&off_140004470)[2 * word_1400257C0[(v3 - (_BYTE *)&off_1400036D0) >> 3]], (v2 & 2) != 0)
     || !sub_140372774((__int64)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
