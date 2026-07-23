/*
 * XREFs of sub_1405909B0 @ 0x1405909B0
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140567C08 @ 0x140567C08 (sub_140567C08.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1405909B0(unsigned __int64 a1)
{
  int v1; // edx
  _QWORD *result; // rax

  if ( !qword_140C29CA8 )
    return 0LL;
  v1 = 0;
  if ( !dword_140C29CA0 )
    return 0LL;
  while ( 1 )
  {
    result = (char *)qword_140C29CA8 + 40 * (unsigned int)(dword_140C29CA0 - v1 - 1);
    if ( result[1] )
    {
      if ( a1 >= result[2] && a1 < result[3] )
        break;
    }
    if ( ++v1 >= (unsigned int)dword_140C29CA0 )
      return 0LL;
  }
  return result;
}
