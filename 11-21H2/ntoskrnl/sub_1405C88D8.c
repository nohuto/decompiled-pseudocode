/*
 * XREFs of sub_1405C88D8 @ 0x1405C88D8
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

__int64 __fastcall sub_1405C88D8(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  v4 = a2;
  if ( a1 < (unsigned int)dword_140D06884 )
  {
    v6 = sub_140348800(a1);
    v5 = 0;
    v7 = *(_QWORD *)(v6 + 33600);
    if ( v7 )
    {
      if ( (unsigned int)v4 < *(_DWORD *)(v7 + 32) )
      {
        v8 = 344 * v4;
        if ( a3 )
          _InterlockedOr((volatile signed __int32 *)(v8 + v7 + 1400), 0x80000000);
        else
          _InterlockedAnd((volatile signed __int32 *)(v8 + v7 + 1400), 0x7FFFFFFFu);
      }
      else
      {
        return (unsigned int)-1073741584;
      }
    }
    else
    {
      return (unsigned int)-1073741653;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v5;
}
