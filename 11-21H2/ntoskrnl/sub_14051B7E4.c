/*
 * XREFs of sub_14051B7E4 @ 0x14051B7E4
 * Callers:
 *     sub_14051A460 @ 0x14051A460 (sub_14051A460.c)
 *     sub_14051A990 @ 0x14051A990 (sub_14051A990.c)
 *     sub_14051BA00 @ 0x14051BA00 (sub_14051BA00.c)
 *     sub_140846E20 @ 0x140846E20 (sub_140846E20.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14051B7E4(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v3 = (__int64 *)qword_140C4BCE0;
  result = 3221226021LL;
  while ( v3 != &qword_140C4BCE0 )
  {
    if ( v3[43] )
    {
      result = sub_14042A5E0(v3[2], a1);
      if ( (_DWORD)result != -1073741275 )
        break;
    }
    v3 = (__int64 *)*v3;
  }
  return result;
}
