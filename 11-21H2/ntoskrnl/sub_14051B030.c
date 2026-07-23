/*
 * XREFs of sub_14051B030 @ 0x14051B030
 * Callers:
 *     sub_14051A990 @ 0x14051A990 (sub_14051A990.c)
 *     sub_14051BA00 @ 0x14051BA00 (sub_14051BA00.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14051B030(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax

  v1 = (__int64 *)qword_140C4BCE0;
  result = 0LL;
  while ( v1 != &qword_140C4BCE0 )
  {
    if ( v1[44] )
    {
      result = sub_14042A5E0(v1[2], a1);
      if ( (_DWORD)result )
        break;
    }
    v1 = (__int64 *)*v1;
  }
  return result;
}
