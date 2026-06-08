/*
 * XREFs of GetHvProcessorInfo @ 0x1C0003D48
 * Callers:
 *     RegisterHvPackage @ 0x1C003A500 (RegisterHvPackage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHvProcessorInfo(int a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  _DWORD *i; // r8

  result = 0LL;
  v2 = 0;
  if ( dword_1C001F590 )
  {
    for ( i = (_DWORD *)qword_1C001F588; a1 != *i; i += 3 )
    {
      if ( ++v2 >= dword_1C001F590 )
        return result;
    }
    return qword_1C001F588 + 12LL * v2;
  }
  return result;
}
