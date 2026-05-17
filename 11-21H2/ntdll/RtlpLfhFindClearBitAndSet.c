/*
 * XREFs of RtlpLfhFindClearBitAndSet @ 0x18006CF04
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180029530 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18006CAE4 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLfhFindClearBitAndSet(unsigned __int64 *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r11
  __int64 *v7; // rcx
  __int64 *v8; // r10
  __int64 v9; // rbx
  unsigned int v10; // r8d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // r10
  __int64 *v15; // rdx
  __int64 *v16; // rsi
  __int64 *v17; // rax
  unsigned int v18; // ebx

  v4 = *a1;
  v5 = -1LL;
  v7 = (__int64 *)a1[1];
  if ( v4 >= 0x40 )
  {
    v14 = (unsigned __int64)a2 >> 6;
    v15 = &v7[(v4 - 1) >> 6];
    v8 = &v7[v14];
    v16 = v8;
    do
    {
      if ( *v8 != -1 )
        break;
      v17 = v8++;
      if ( v17 == v15 )
        v8 = v7;
    }
    while ( v8 != v16 );
    if ( v8 == v15 )
    {
      v18 = v4 & 0x3F;
      if ( v18 )
      {
        if ( v18 < (unsigned __int64)a4 )
          a4 = *(_DWORD *)a1 & 0x3F;
      }
    }
  }
  else
  {
    v8 = v7;
    if ( v4 < a4 )
      a4 = v4;
  }
  v9 = *v8;
  v10 = (a4 * a3) >> 7;
  if ( a4 < 0x40 )
  {
    _BitScanForward64(&v11, ~v9);
    LOBYTE(v10) = v11 + v10;
    v5 = ((1LL << a4) - 1) << v11;
  }
  _BitScanForward64(&v12, ~__ROR8__(v9 | ~v5, v10));
  LODWORD(v12) = ((_BYTE)v10 + (_BYTE)v12) & 0x3F;
  *v8 = v9 | (1LL << v12);
  return (unsigned int)v12 + ((unsigned int)((__int64)((__int64)v8 - a1[1]) >> 3) << 6);
}
