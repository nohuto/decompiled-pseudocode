/*
 * XREFs of sub_1409EE454 @ 0x1409EE454
 * Callers:
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1409EE394 @ 0x1409EE394 (sub_1409EE394.c)
 *     sub_1409EE3D4 @ 0x1409EE3D4 (sub_1409EE3D4.c)
 */

__int64 __fastcall sub_1409EE454(__int64 a1, __int64 a2)
{
  int v3; // ebx
  unsigned int v4; // esi
  _DWORD *v6; // rdx

  if ( dword_140D06B40 )
  {
    v4 = *(_DWORD *)(a2 + 16);
    if ( (~dword_140D06B40 & v4) != 0 || (v4 & 3) == 3 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 816) & 0x8000) != 0 )
        return 3221226243LL;
      if ( *(_QWORD *)(a1 + 1024) || (v3 = sub_1409EE394(a1), v3 >= 0) )
      {
        v6 = *(_DWORD **)(a1 + 1024);
        if ( *v6 )
        {
          return (unsigned int)-1073741053;
        }
        else
        {
          v3 = sub_14042A5E0(v4, v6);
          if ( v3 >= 0 )
          {
            sub_1409EE3D4();
            *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 4LL) = v4;
            _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x8000u);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}
