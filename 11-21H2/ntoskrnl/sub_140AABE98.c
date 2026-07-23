/*
 * XREFs of sub_140AABE98 @ 0x140AABE98
 * Callers:
 *     sub_140AAB88C @ 0x140AAB88C (sub_140AAB88C.c)
 *     sub_140AAB930 @ 0x140AAB930 (sub_140AAB930.c)
 *     sub_140AABF48 @ 0x140AABF48 (sub_140AABF48.c)
 *     sub_140AAC868 @ 0x140AAC868 (sub_140AAC868.c)
 *     sub_140AAE560 @ 0x140AAE560 (sub_140AAE560.c)
 *     sub_140B55FC4 @ 0x140B55FC4 (sub_140B55FC4.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 */

__int64 __fastcall sub_140AABE98(wchar_t *Str2, __int64 **a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 *i; // rbx

  result = 3221226021LL;
  if ( !a2 || !byte_140C0DF00 )
    return 3221225485LL;
  *a2 = 0LL;
  v5 = qword_140C0DF10;
  while ( (__int64 *)v5 != &qword_140C0DF10 )
  {
    for ( i = *(__int64 **)(v5 + 40); i != (__int64 *)(v5 + 40); i = (__int64 *)*i )
    {
      if ( Str2 )
      {
        if ( !wcsicmp((const wchar_t *)i[4], Str2) )
        {
LABEL_9:
          *a2 = i;
          return 0LL;
        }
      }
      else if ( (*(_DWORD *)(v5 + 28) & 1) != 0 )
      {
        goto LABEL_9;
      }
    }
    v5 = *(_QWORD *)v5;
    result = 3221226021LL;
  }
  return result;
}
