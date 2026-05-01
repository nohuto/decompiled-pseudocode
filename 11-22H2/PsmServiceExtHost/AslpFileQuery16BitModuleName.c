/*
 * XREFs of AslpFileQuery16BitModuleName @ 0x18009CC9C
 * Callers:
 *     AslpFileGet16BitModuleName @ 0x18009ACE0 (AslpFileGet16BitModuleName.c)
 * Callees:
 *     memcpy_0 @ 0x1800536E2 (memcpy_0.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileQuery16BitModuleName(_BYTE *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  __int64 v7; // r9
  unsigned __int8 *v8; // rdx
  size_t v9; // rsi
  int v10; // r8d

  v3 = 0;
  *a1 = 0;
  if ( *(_DWORD *)(a2 + 56) == 5 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 < v5 + 64 || (v7 = *(unsigned __int16 *)(v5 + v4 + 38), v6 < v7 + 1) )
    {
      v10 = 3610;
    }
    else
    {
      v8 = (unsigned __int8 *)(v4 + v7 + v5);
      if ( *v8 )
      {
        v9 = *v8;
        if ( v6 >= *(_DWORD *)(v4 + 60) + (int)v7 + v9 + 1 )
        {
          memcpy_0(a1, v8 + 1, v9);
          a1[v9] = 0;
          return v3;
        }
        v10 = 3626;
      }
      else
      {
        v10 = 3619;
      }
    }
    v3 = -1073741701;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileQuery16BitModuleName", v10, (unsigned int)"File mapping invalid");
    return v3;
  }
  return (unsigned int)-1073741637;
}
