/*
 * XREFs of sub_140553F1C @ 0x140553F1C
 * Callers:
 *     sub_140552F60 @ 0x140552F60 (sub_140552F60.c)
 * Callees:
 *     sub_140554ED0 @ 0x140554ED0 (sub_140554ED0.c)
 *     sub_14055D6F4 @ 0x14055D6F4 (sub_14055D6F4.c)
 */

__int64 __fastcall sub_140553F1C(
        int a1,
        unsigned __int64 *a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v7; // r10
  unsigned __int64 v8; // rax

  v7 = a5;
  if ( !a5 )
    return 0LL;
  v8 = *a2;
  if ( a4 >= *a2 )
  {
    if ( a6 )
      return 0LL;
    return 3221225793LL;
  }
  if ( a4 + a5 - 1 >= v8 )
  {
    if ( !a6 )
      return 3221225793LL;
    v7 = v8 - a4;
  }
  if ( !v7 )
    return 0LL;
  if ( qword_140D00A80 && (*(_DWORD *)(qword_140D00A80 + 1368) & 4) != 0 && dword_140C0C6BC == 1 )
    return sub_14055D6F4(a1, (_DWORD)a2, a3, a4, v7, a7);
  else
    return sub_140554ED0(a1, (_DWORD)a2, a3, a4, v7, a7);
}
