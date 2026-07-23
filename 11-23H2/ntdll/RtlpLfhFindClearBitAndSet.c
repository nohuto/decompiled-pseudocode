/*
 * XREFs of RtlpLfhFindClearBitAndSet @ 0x1800A06AC
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D560 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180119F20 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLfhFindClearBitAndSet(unsigned __int64 *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 v5; // r8
  __int64 v6; // r11
  _QWORD *v8; // rcx
  _QWORD *v9; // r10
  unsigned __int64 v10; // r10
  _QWORD *v11; // rdx
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  unsigned int v14; // r8d
  unsigned int v15; // ebx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx

  v5 = *a1;
  v6 = -1LL;
  v8 = (_QWORD *)a1[1];
  if ( v5 >= 0x40 )
  {
    v10 = (unsigned __int64)a2 >> 6;
    v11 = &v8[(v5 - 1) >> 6];
    v9 = &v8[v10];
    v12 = v9;
    do
    {
      if ( *v9 != -1LL )
        break;
      v13 = v9++;
      if ( v13 == v11 )
        v9 = v8;
    }
    while ( v9 != v12 );
    if ( v9 == v11 )
    {
      v14 = v5 & 0x3F;
      if ( v14 )
      {
        if ( v14 < (unsigned __int64)a4 )
          a4 = *(_DWORD *)a1 & 0x3F;
      }
    }
  }
  else
  {
    v9 = v8;
    if ( v5 < a4 )
      a4 = v5;
  }
  v15 = (a4 * a3) >> 7;
  if ( a4 < 0x40 )
  {
    _BitScanForward64(&v16, ~*v9);
    LOBYTE(v15) = v16 + v15;
    v6 = ((1LL << a4) - 1) << v16;
  }
  _BitScanForward64(&v17, ~__ROR8__(*v9 | ~v6, v15));
  LODWORD(v17) = ((_BYTE)v15 + (_BYTE)v17) & 0x3F;
  *v9 |= 1LL << v17;
  return (unsigned int)v17 + ((unsigned int)((__int64)((__int64)v9 - a1[1]) >> 3) << 6);
}
