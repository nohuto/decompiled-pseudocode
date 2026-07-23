/*
 * XREFs of sub_14038190C @ 0x14038190C
 * Callers:
 *     sub_14023814C @ 0x14023814C (sub_14023814C.c)
 *     sub_14038032C @ 0x14038032C (sub_14038032C.c)
 * Callees:
 *     <none>
 */

signed __int32 *__fastcall sub_14038190C(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  signed __int32 *result; // rax

  result = (signed __int32 *)((unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1);
  if ( a3 < (unsigned int)result && a3 )
  {
    if ( a4 >= (unsigned int)result || !a4 )
    {
      result = *(signed __int32 **)(a1 + 1080);
      --*(_DWORD *)(a1 + 1088);
      _bittestandset(result, a2);
    }
  }
  else if ( a4 < (unsigned int)result )
  {
    if ( a4 )
    {
      result = *(signed __int32 **)(a1 + 1080);
      _bittestandreset(result, a2);
      ++*(_DWORD *)(a1 + 1088);
    }
  }
  return result;
}
