/*
 * XREFs of sub_14067C560 @ 0x14067C560
 * Callers:
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406BBBA8 @ 0x1406BBBA8 (sub_1406BBBA8.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14067C560(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  _QWORD *v5; // r14
  _QWORD *v6; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx

  v4 = -1073741670;
  v5 = 0LL;
  if ( ((a2 - 1) & a2) != 0 )
    return 3221225485LL;
  v6 = 0LL;
  if ( a2 > 0xAAAAAAA )
  {
    v4 = -1073741811;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24 * a2, 0x61434D43u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 24 * a2);
      v8 = ExAllocatePoolWithTag(PagedPool, 0x300uLL, 0x61434D43u);
      v6 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x300uLL);
        if ( a2 )
        {
          v9 = v5;
          v10 = a2;
          do
          {
            *v9 = 0LL;
            v9 += 3;
            --v10;
          }
          while ( v10 );
        }
        v11 = v6;
        v12 = 32LL;
        do
        {
          *v11 = 0LL;
          v11 += 3;
          --v12;
        }
        while ( v12 );
        v4 = 0;
      }
    }
  }
  *(_QWORD *)(a1 + 1648) = v5;
  *(_DWORD *)(a1 + 1656) = a2;
  *(_QWORD *)(a1 + 1664) = v6;
  *(_DWORD *)(a1 + 1672) = 32;
  if ( v4 < 0 )
    sub_1406BBBA8(a1);
  return (unsigned int)v4;
}
