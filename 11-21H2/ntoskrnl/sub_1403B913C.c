/*
 * XREFs of sub_1403B913C @ 0x1403B913C
 * Callers:
 *     sub_140A54D70 @ 0x140A54D70 (sub_140A54D70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403B913C(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx

  v1 = 0LL;
  v2 = qword_140C4AC20;
  do
  {
    if ( !*v2 )
    {
      qword_140C4AC20[v1] = a1;
      return 0LL;
    }
    v1 = (unsigned int)(v1 + 1);
    ++v2;
  }
  while ( (unsigned int)v1 < 0x10 );
  if ( (_DWORD)v1 != 16 )
    return 0LL;
  return 3221225626LL;
}
