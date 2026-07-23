/*
 * XREFs of sub_1409D847C @ 0x1409D847C
 * Callers:
 *     sub_1409D8588 @ 0x1409D8588 (sub_1409D8588.c)
 *     sub_1409D894C @ 0x1409D894C (sub_1409D894C.c)
 * Callees:
 *     RtlFindSetBits @ 0x1402E4EE0 (RtlFindSetBits.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 */

__int64 __fastcall sub_1409D847C(__int64 a1, ULONG a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r9
  _DWORD *v9; // rcx
  _DWORD *v10; // r8
  _DWORD *v11; // r10
  ULONG SetBits; // eax
  ULONG v13; // ebx
  signed int v14; // ebx
  int v15; // esi
  signed int v16; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  BitMapHeader.SizeOfBitMap = *(_DWORD *)(a1 + 8);
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  v5 = a1 + 168;
  v6 = a1 + 552;
  BitMapHeader.Buffer = *(PULONG *)(a3 + 8);
  v7 = ((unsigned __int64)BitMapHeader.SizeOfBitMap + 31) >> 5;
  while ( v5 < v6 )
  {
    if ( v5 != a3 )
    {
      v9 = *(_DWORD **)(v5 + 8);
      if ( v9 )
      {
        v10 = *(_DWORD **)(a3 + 8);
        v11 = &v9[v7];
        while ( v9 < v11 )
          *v10++ ^= *v9++;
      }
    }
    v5 += 24LL;
  }
  SetBits = RtlFindSetBits(&BitMapHeader, a2, 0);
  v13 = SetBits;
  if ( SetBits == -1 )
  {
    v15 = 0;
    v16 = RtlFindSetBits(&BitMapHeader, 1u, 0);
    if ( v16 < 0 )
      return (unsigned int)-1073741697;
    while ( 1 )
    {
      ++v15;
      v14 = v16 + 1;
      if ( v15 == a2 )
        break;
      v16 = RtlFindSetBits(&BitMapHeader, 1u, v14);
      if ( v16 < v14 )
        return (unsigned int)-1073741697;
    }
  }
  else
  {
    RtlClearBits(&BitMapHeader, 0, SetBits);
    v14 = a2 + v13;
  }
  RtlClearBits(&BitMapHeader, v14, BitMapHeader.SizeOfBitMap - v14);
  return v3;
}
