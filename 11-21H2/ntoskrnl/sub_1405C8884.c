/*
 * XREFs of sub_1405C8884 @ 0x1405C8884
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405C8884(unsigned int a1, char a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rcx

  v2 = 0;
  if ( qword_140D068A8 )
  {
    if ( a1 < *(_DWORD *)qword_140D068A8 )
    {
      v3 = 448LL * a1;
      if ( a2 )
        _InterlockedOr((volatile signed __int32 *)(v3 + qword_140D068A8 + 80), 0x80000000);
      else
        _InterlockedAnd((volatile signed __int32 *)(v3 + qword_140D068A8 + 80), 0x7FFFFFFFu);
    }
    else
    {
      return (unsigned int)-1073741585;
    }
  }
  else
  {
    return (unsigned int)-1073741653;
  }
  return v2;
}
