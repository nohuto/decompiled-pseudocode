/*
 * XREFs of sub_140638890 @ 0x140638890
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140638890(int a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = a1 & 0x3000000;
  if ( (_DWORD)v2 && (a2 & 0x3000000) == 0 && *((_QWORD *)&xmmword_140C15BB0 + 1) )
    return sub_14042A5E0(v2, a2);
  else
    return 3221225659LL;
}
