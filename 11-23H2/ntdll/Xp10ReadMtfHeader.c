/*
 * XREFs of Xp10ReadMtfHeader @ 0x18011FC3C
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x18011BC10 (RtlDecompressBuffer2Xp10.c)
 * Callees:
 *     Xp10ScatteredReadBytes @ 0x1801201FC (Xp10ScatteredReadBytes.c)
 */

__int64 __fastcall Xp10ReadMtfHeader(_WORD *a1, int *a2, __int64 a3)
{
  unsigned int v3; // ebp
  int *v5; // r14
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v5 = a2;
  *(_OWORD *)a2 = 0LL;
  while ( 1 )
  {
    v7 = 5;
    if ( !*(_QWORD *)a3 )
      break;
    if ( *(_QWORD *)a3 < 5uLL )
      v7 = *(_DWORD *)a3;
    v8 = *(_DWORD *)(a3 + 16);
    if ( v8 < v7 )
    {
      v9 = Xp10ScatteredReadBytes(a3 + 24, &v19, 4LL);
      v10 = *(_DWORD *)(a3 + 16);
      *(_QWORD *)(a3 + 8) |= (unsigned __int64)v19 << v10;
      v8 = v10 + 8 * v9;
      if ( v8 < v7 )
        v7 = v8;
    }
    *(_DWORD *)(a3 + 16) = v8 - v7;
    v11 = *(_DWORD *)(a3 + 8) & ((1LL << v7) - 1);
    *(_QWORD *)(a3 + 8) >>= v7;
    *(_QWORD *)a3 -= v7;
    if ( v7 < 5 || v11 > (*a1 & 0x1Fu) )
      break;
    if ( v11 )
    {
      v13 = v11;
      if ( *(_QWORD *)a3 )
      {
        if ( (unsigned __int64)v11 > *(_QWORD *)a3 )
          v13 = *(_DWORD *)a3;
        v14 = *(_DWORD *)(a3 + 16);
        if ( v14 < v13 )
        {
          v15 = Xp10ScatteredReadBytes(a3 + 24, &v20, 4LL);
          v16 = *(_DWORD *)(a3 + 16);
          *(_QWORD *)(a3 + 8) |= (unsigned __int64)v20 << v16;
          v14 = v16 + 8 * v15;
          if ( v14 < v13 )
            v13 = v14;
        }
        v17 = *(_DWORD *)(a3 + 8) & ((1LL << v13) - 1);
        *(_QWORD *)(a3 + 8) >>= v13;
        *(_QWORD *)a3 -= v13;
        *(_DWORD *)(a3 + 16) = v14 - v13;
      }
      else
      {
        v17 = 0;
        v13 = 0;
      }
      if ( v13 < v11 )
        return 3221226050LL;
      v12 = v17 + (1 << v11);
    }
    else
    {
      v12 = 1;
    }
    *v5 = v12;
    ++v3;
    ++v5;
    if ( v3 >= 4 )
      return 0LL;
  }
  return 3221226050LL;
}
