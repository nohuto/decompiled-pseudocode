/*
 * XREFs of sub_1403B03AC @ 0x1403B03AC
 * Callers:
 *     sub_1403AFE88 @ 0x1403AFE88 (sub_1403AFE88.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1403B03AC(__int64 *a1, unsigned int a2, __int64 a3)
{
  _WORD *PoolWithTag; // rax
  unsigned int v7; // r9d
  _WORD *v8; // r10
  __int64 v9; // rax
  __int64 v10; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x5249654Bu);
  v7 = 0;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    PoolWithTag[4] = *(_WORD *)(a3 + 32);
    *(_QWORD *)PoolWithTag = *(_QWORD *)(a3 + 24);
    *((_BYTE *)PoolWithTag + 16) = 0;
    if ( a2 )
    {
      v9 = a2;
      do
      {
        v10 = *a1++;
        *(_QWORD *)(v10 + 272) = v8;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
