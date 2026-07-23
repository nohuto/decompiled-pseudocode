/*
 * XREFs of SbpLookup @ 0x180128514
 * Callers:
 *     SbpResolveBasedOnName @ 0x1801286BC (SbpResolveBasedOnName.c)
 * Callees:
 *     _strnicmp @ 0x1800908E0 (_strnicmp.c)
 */

__int64 __fastcall SbpLookup(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  _DWORD *v12; // rax
  int v13; // edx
  unsigned __int16 *v14; // r9
  int v15; // r11d
  int v16; // r10d

  v2 = *(unsigned int *)(a1 + 60);
  v3 = 0;
  v6 = *(unsigned __int16 *)(v2 + a1 + 6);
  v7 = *(unsigned __int16 *)(v2 + a1 + 20) + v2 + a1 + 24;
  if ( *(_WORD *)(v2 + a1 + 6) )
  {
    while ( strnicmp(".sb_data", (const char *)v7, 8uLL) )
    {
      ++v3;
      v7 += 40LL;
      if ( v3 >= v6 )
        return 0LL;
    }
    v9 = *(_DWORD *)(v7 + 16);
    v10 = a1 + *(unsigned int *)(v7 + 12);
    if ( *(_DWORD *)(v7 + 8) <= v9 )
      v9 = *(_DWORD *)(v7 + 8);
    v11 = v10 + v9;
    while ( v10 < v11 )
    {
      if ( *(_DWORD *)v10 == 1165184107 )
      {
        v12 = *(_DWORD **)(v10 + 16);
        if ( v12 )
        {
          v13 = 0;
          if ( *v12 )
          {
            do
            {
              v14 = a2;
              do
              {
                v15 = *(unsigned __int16 *)((char *)v14 + *(_QWORD *)&v12[4 * v13 + 2] - (_QWORD)a2);
                v16 = *v14 - v15;
                if ( v16 )
                  break;
                ++v14;
              }
              while ( v15 );
              if ( !v16 )
                return *(_QWORD *)&v12[4 * v13 + 4];
            }
            while ( (unsigned int)++v13 < *v12 );
          }
        }
      }
      v10 += 40LL;
    }
  }
  return 0LL;
}
