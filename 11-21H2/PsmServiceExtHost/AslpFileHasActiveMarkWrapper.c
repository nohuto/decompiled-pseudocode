/*
 * XREFs of AslpFileHasActiveMarkWrapper @ 0x1800A1C44
 * Callers:
 *     AslpFileGetExeWrapper @ 0x1800A0AC0 (AslpFileGetExeWrapper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileHasActiveMarkWrapper(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 i; // rdx

  v4 = 0;
  v5 = 0LL;
  *a1 = 0;
  v6 = *(_QWORD *)(a3 + 24);
  if ( v6 >= *(_QWORD *)(a3 + 40) )
    v6 = *(_QWORD *)(a3 + 40);
  if ( v6 - 1025 > 0xFFFFFBFE || *(_DWORD *)(a3 + 76) || *(_DWORD *)(a3 + 72) )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    if ( *(_WORD *)(a2 + 24) == 267 )
    {
      v5 = a2 + 152;
    }
    else if ( *(_WORD *)(a2 + 24) == 523 )
    {
      v5 = a2 + 168;
    }
    if ( v5 && (v7 = (unsigned int)(*(_DWORD *)(v5 + 4) + 1024), v6 > v7) )
    {
      v8 = v6 - v7 + *(_QWORD *)(a3 + 32);
      for ( i = v8 + 998; i >= v8; --i )
      {
        if ( *(_QWORD *)i == 0x464F564D41534D54LL
          && *(_WORD *)(i + 8) == 1
          && *(unsigned int *)(i + 10) + 622LL + *(unsigned int *)(i + 14) + (unsigned __int64)*(unsigned int *)(i + 18) == *(_DWORD *)(i + 22) )
        {
          *a1 = 1;
          return v4;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return v4;
}
