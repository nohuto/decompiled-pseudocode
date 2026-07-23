/*
 * XREFs of sub_14068EE60 @ 0x14068EE60
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068A23C @ 0x14068A23C (sub_14068A23C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AB41B0 @ 0x140AB41B0 (sub_140AB41B0.c)
 */

__int64 __fastcall sub_14068EE60(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  char v4; // r14
  _DWORD *v6; // rdi
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  _DWORD *PoolWithTag; // rax
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1

  v3 = a3;
  v4 = a2;
  if ( *(_QWORD *)(a1 + 1544) )
  {
    if ( (_BYTE)a3 )
    {
      v6 = *(_DWORD **)(a1 + 1776);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6F494D43u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memset(PoolWithTag, 0, 0x1000uLL);
      v12 = *(_OWORD **)(a1 + 64);
      a2 = 4LL;
      v13 = v6;
      a3 = 128LL;
      do
      {
        *v13 = *v12;
        v13[1] = v12[1];
        v13[2] = v12[2];
        v13[3] = v12[3];
        v13[4] = v12[4];
        v13[5] = v12[5];
        v13[6] = v12[6];
        v13 += 8;
        v14 = v12[7];
        v12 += 8;
        *(v13 - 1) = v14;
        --a2;
      }
      while ( a2 );
    }
    v7 = *(_DWORD *)(a1 + 172);
    v8 = v7 - 1;
    if ( v4 )
      v8 = *(_DWORD *)(a1 + 172);
    v6[2] = v8;
    v6[1] = v7;
    v6[127] = sub_140AB41B0(v6, a2, a3);
    v9 = sub_14042A5E0(a1, 0LL);
    if ( v9 >= 0 )
    {
      v9 = sub_14068A23C(a1, 0);
      if ( v9 >= 0 )
      {
        *(_BYTE *)(a1 + 194) = v4;
        v9 = 0;
        *(_DWORD *)(a1 + 184) = v6[2];
      }
    }
    if ( !v3 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v9;
}
