/*
 * XREFs of sub_140863ABC @ 0x140863ABC
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall sub_140863ABC(__int64 a1, __int64 (__fastcall **a2)(unsigned int *a1))
{
  signed __int64 v3; // rdx
  unsigned int v4; // ebx

  if ( *(_DWORD *)(a1 + 4) == 1 )
  {
    if ( *(_QWORD *)(a1 + 8) && (v3 = *(_QWORD *)(a1 + 24)) != 0 )
    {
      v4 = -1073741823;
      if ( !_InterlockedCompareExchange64(&qword_140C1C970, v3, 0LL) )
      {
        v4 = 0;
        xmmword_140C1C960 = *(_OWORD *)(a1 + 8);
        a2[1] = 0LL;
        *a2 = sub_1403D68F0;
        ObfReferenceObjectWithTag(*(PVOID *)(a1 + 24), 0x4D584650u);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return v4;
}
