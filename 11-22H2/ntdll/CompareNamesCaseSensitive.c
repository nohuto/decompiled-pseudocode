/*
 * XREFs of CompareNamesCaseSensitive @ 0x1800F0834
 * Callers:
 *     PfxFindPrefix @ 0x1800F0A80 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800F0B80 (PfxInsertPrefix.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018FD4 (RtlpIsUtf8Process.c)
 *     RtlCompareMemory @ 0x1800A3970 (RtlCompareMemory.c)
 */

__int64 __fastcall CompareNamesCaseSensitive(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  bool v4; // r13
  __int64 v5; // r12
  unsigned __int16 *v7; // rdx
  unsigned __int16 *v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // r8d
  __int64 v15; // r15
  unsigned __int8 v16; // r10
  unsigned __int8 v17; // r11
  char v18; // bl
  char v19; // r9
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // al
  unsigned int i; // r9d
  unsigned int j; // r9d
  signed __int32 v24[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = 0;
  v4 = 0;
  v5 = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v24, 0);
    v5 = qword_1801817A0;
    v4 = GlobalRtlNlsState.DBCSCodePage != 0;
  }
  v9 = *v7;
  v10 = *v8;
  if ( (_WORD)v10 == 1 && **((_BYTE **)v8 + 1) == 92 && (unsigned __int16)v9 > 1u && **(_BYTE **)(a2 + 8) == 92 )
    return 1LL;
  v12 = *v8;
  if ( (unsigned __int16)v10 >= (unsigned __int16)v9 )
    v12 = *v7;
  v13 = v12;
  v14 = RtlCompareMemory(*(const void **)(a1 + 8), *(const void **)(a2 + 8), v12);
  if ( v14 < v13 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v16 = 0;
    v17 = 0;
    v18 = *(_BYTE *)(v14 + *(_QWORD *)(a2 + 8));
    v19 = *(_BYTE *)(v14 + v15);
    if ( v19 != 92 )
      v16 = *(_BYTE *)(v14 + v15);
    v20 = v16;
    if ( v18 != 92 )
      v17 = *(_BYTE *)(v14 + *(_QWORD *)(a2 + 8));
    v21 = v17;
    if ( v4 )
    {
      if ( v19 == 92 )
      {
        for ( i = 0; i < v14; i += (*(_WORD *)(v5 + 2LL * *(unsigned __int8 *)(i + v15)) != 0) + 1 )
          ;
        v20 = v16;
        if ( i != v14 )
          v20 = 92;
      }
      v21 = v17;
      if ( v18 == 92 )
      {
        for ( j = 0; j < v14; j += (*(_WORD *)(v5 + 2LL * *(unsigned __int8 *)(j + *(_QWORD *)(a2 + 8))) != 0) + 1 )
          ;
        v21 = v17;
        if ( j != v14 )
          v21 = 92;
      }
    }
    if ( v20 < v21 )
      return 0LL;
    if ( v20 > v21 )
      return 3LL;
  }
  if ( v9 <= (unsigned int)v10 )
    return (unsigned int)(v9 < (unsigned int)v10) + 2;
  LOBYTE(v2) = *(_BYTE *)(v10 + *(_QWORD *)(a2 + 8)) == 92;
  return v2;
}
