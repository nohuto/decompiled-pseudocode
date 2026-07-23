/*
 * XREFs of sub_1406AF66C @ 0x1406AF66C
 * Callers:
 *     sub_1406AF34C @ 0x1406AF34C (sub_1406AF34C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406AF66C(unsigned int *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned int v5; // r9d
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned __int64 v15; // rdi
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v20; // ecx

  v3 = a2;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  v5 = 128;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_DWORD *)(a3 + 56) = 0;
  v6 = a1[2];
  v7 = a1[8];
  if ( (_DWORD)v6 )
  {
    if ( !v7 )
      return 4000LL;
  }
  else if ( v7 )
  {
    return 4100LL;
  }
  if ( v7 )
  {
    if ( v7 < 0x80 )
      return 4200LL;
    if ( v6 > a2 / 0x28uLL )
      return 4300LL;
    v8 = 40 * v6;
    if ( v7 >= a2 || v8 >= a2 || v7 > a2 - v8 )
      return 4400LL;
    v5 = v7 + v8;
    *(_DWORD *)a3 = v7;
    *(_DWORD *)(a3 + 4) = v7 + v8;
    *(_DWORD *)(a3 + 8) = a1[2];
  }
  v9 = a1[3];
  v10 = a1[10];
  if ( (_DWORD)v9 )
  {
    if ( !v10 )
      return 5000LL;
    if ( v10 < v5 )
      return 5200LL;
    if ( v9 > a2 / 0x30uLL )
      return 5300LL;
    v11 = 48 * v9;
    if ( v10 >= a2 || v11 >= a2 || v10 > a2 - v11 )
      return 5400LL;
    v5 = v10 + v11;
    *(_DWORD *)(a3 + 12) = v10;
    *(_DWORD *)(a3 + 16) = v10 + v11;
    *(_DWORD *)(a3 + 20) = a1[3];
  }
  else if ( v10 )
  {
    return 5100LL;
  }
  v12 = a1[4];
  v13 = a1[12];
  if ( v12 )
  {
    if ( !v13 )
      return 6000LL;
    if ( v13 < v5 )
      return 6200LL;
    if ( v12 > (unsigned int)v3 >> 4 )
      return 6300LL;
    v14 = 16 * v12;
    if ( v13 >= (unsigned int)v3 || v14 >= (unsigned int)v3 || v13 > (unsigned int)v3 - v14 )
      return 6400LL;
    v5 = v13 + v14;
    *(_DWORD *)(a3 + 24) = v13;
    *(_DWORD *)(a3 + 28) = v13 + v14;
    *(_DWORD *)(a3 + 32) = a1[4];
  }
  else if ( v13 )
  {
    return 6100LL;
  }
  v15 = a1[5];
  v16 = a1[14];
  if ( (_DWORD)v15 )
  {
    if ( !v16 )
      return 7000LL;
    if ( v16 < v5 )
      return 7200LL;
    if ( v15 > v3 / 0x28 )
      return 7300LL;
    v20 = 40 * v15;
    if ( v16 >= (unsigned int)v3 || v20 >= (unsigned int)v3 || v16 > (unsigned int)v3 - v20 )
      return 7400LL;
    v5 = v16 + v20;
    *(_DWORD *)(a3 + 36) = v16;
    *(_DWORD *)(a3 + 40) = v16 + v20;
    *(_DWORD *)(a3 + 44) = a1[5];
  }
  else if ( v16 )
  {
    return 7100LL;
  }
  v17 = a1[6];
  v18 = a1[16];
  if ( v17 )
  {
    if ( v18 )
    {
      if ( v18 < v5 )
      {
        return 8200LL;
      }
      else
      {
        if ( v18 < (unsigned int)v3 && v17 < (unsigned int)v3 && v18 <= (unsigned int)v3 - v17 )
        {
          v5 = v18 + v17;
          *(_DWORD *)(a3 + 48) = v18;
          *(_DWORD *)(a3 + 52) = v18 + v17;
          return (_DWORD)v3 != v5 ? 0x2328 : 0;
        }
        return 8300LL;
      }
    }
    else
    {
      return 8000LL;
    }
  }
  else
  {
    if ( !v18 )
      return (_DWORD)v3 != v5 ? 0x2328 : 0;
    return 8100LL;
  }
}
