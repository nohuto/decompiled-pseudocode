/*
 * XREFs of KiSearchForNewThreadOnSubNode @ 0x14057EC9C
 * Callers:
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 * Callees:
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 */

unsigned __int64 *__fastcall KiSearchForNewThreadOnSubNode(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r9
  int v4; // r8d
  __int64 v6; // rbx
  char v8; // r13
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // edx
  unsigned __int64 v13; // rsi
  int v14; // r12d
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 *result; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  int v21; // [rsp+70h] [rbp+8h]
  int v22; // [rsp+78h] [rbp+10h]

  v3 = a3;
  v4 = *(unsigned __int16 *)(a2 + 136);
  v6 = *(_QWORD *)(a2 + 128);
  v8 = *(_BYTE *)(a1 + 209);
  v9 = v6;
  v10 = *(_QWORD *)(a2 + 152);
  v22 = v4;
  if ( a2 == *(_QWORD *)(a1 + 192) )
  {
    v6 ^= *(_QWORD *)(a1 + 200);
    v10 ^= *(_QWORD *)(a1 + 34880);
    if ( (KiCacheAwareScheduling & 2) != 0 )
      v9 &= *(_QWORD *)(a1 + 34928);
  }
  v11 = ~*(_QWORD *)(a2 + 16) & v6;
  v12 = v4 << 6;
  v21 = v4 << 6;
  while ( 1 )
  {
    if ( !v11 && !v10 )
      return 0LL;
    if ( (v10 & v9) != 0 )
      break;
LABEL_12:
    if ( (v11 & v9) != 0 )
    {
      v19 = __ROR8__(v11 & v9, v8);
      do
      {
        _BitScanForward64(&v20, v19);
        v19 ^= 1LL << v20;
        result = KiSearchForNewThreadOnProcessor(
                   a1,
                   KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v12 + (((_BYTE)v20 + v8) & 0x3F)]],
                   0LL,
                   v3);
        if ( result )
          return result;
        v12 = v21;
        v3 = a3;
      }
      while ( v19 );
    }
    v12 = v21;
    v4 = v22;
    v11 &= ~v9;
    v9 = *(_QWORD *)(a2 + 128);
    v3 = a3;
  }
  v13 = __ROR8__(v10 & v9, v8);
  v14 = v4 << 6;
  while ( 1 )
  {
    _BitScanForward64(&v15, v13);
    v16 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v14 + ((v8 + (_BYTE)v15) & 0x3F)]];
    v17 = *(_QWORD *)(v16 + 34880);
    v10 &= ~v17;
    v13 &= __ROR8__(~v17, v8);
    result = KiSearchForNewThreadOnProcessor(a1, 0LL, *(struct _KPRCB ***)(v16 + 34888), v3);
    if ( result )
      return result;
    v3 = a3;
    if ( !v13 )
    {
      v12 = v21;
      goto LABEL_12;
    }
  }
}
