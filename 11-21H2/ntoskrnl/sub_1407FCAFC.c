/*
 * XREFs of sub_1407FCAFC @ 0x1407FCAFC
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140861088 @ 0x140861088 (sub_140861088.c)
 */

__int64 __fastcall sub_1407FCAFC(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  if ( !(_DWORD)v2 )
    return sub_140861088(a1, a2, v2, a1);
  if ( (_DWORD)v2 != 1 )
    return 3221225485LL;
  result = 3221225474LL;
  if ( qword_140C5AD60 )
    return sub_14042A5E0(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 1));
  return result;
}
