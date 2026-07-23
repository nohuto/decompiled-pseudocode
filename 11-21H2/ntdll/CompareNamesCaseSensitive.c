/*
 * XREFs of CompareNamesCaseSensitive @ 0x1800F0C38
 * Callers:
 *     PfxFindPrefix @ 0x1800F0E80 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800F0F80 (PfxInsertPrefix.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 *     RtlCompareMemory @ 0x1800A8B30 (RtlCompareMemory.c)
 */

__int64 __fastcall CompareNamesCaseSensitive(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  bool v4; // r13
  __int64 v5; // r12
  unsigned __int16 *v7; // rdx
  unsigned __int16 *v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // ebp
  unsigned int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // r15
  unsigned __int8 v15; // r10
  unsigned __int8 v16; // r11
  char v17; // bl
  char v18; // r9
  unsigned __int8 v19; // r8
  unsigned __int8 v20; // al
  unsigned int i; // r9d
  signed __int32 v23[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = 0;
  v4 = 0;
  v5 = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v23, 0);
    v5 = qword_1801776E0;
    v4 = GlobalRtlNlsState.DBCSCodePage != 0;
  }
  v9 = *v8;
  v10 = *v7;
  if ( (_WORD)v9 == 1 && **(_BYTE **)(a1 + 8) == 92 && (unsigned __int16)v10 > 1u && **(_BYTE **)(a2 + 8) == 92 )
    return 1LL;
  v11 = *v8;
  if ( (unsigned __int16)v9 >= (unsigned __int16)v10 )
    v11 = *v7;
  v12 = v11;
  v13 = RtlCompareMemory(*(const void **)(a1 + 8), *(const void **)(a2 + 8), v11);
  if ( v13 < v12 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v15 = 0;
    v16 = 0;
    v17 = *(_BYTE *)(v13 + *(_QWORD *)(a2 + 8));
    v18 = *(_BYTE *)(v13 + v14);
    if ( v18 != 92 )
      v15 = *(_BYTE *)(v13 + v14);
    v19 = v15;
    if ( v17 != 92 )
      v16 = *(_BYTE *)(v13 + *(_QWORD *)(a2 + 8));
    v20 = v16;
    if ( v4 )
    {
      if ( v18 == 92 )
      {
        for ( i = 0; i < v13; i += (*(_WORD *)(v5 + 2LL * *(unsigned __int8 *)(i + v14)) != 0) + 1 )
          ;
        v19 = v15;
        if ( i != v13 )
          v19 = 92;
      }
      v20 = v16;
      if ( v17 == 92 )
      {
        if ( v13 )
        {
          do
            v2 += (*(_WORD *)(v5 + 2LL * *(unsigned __int8 *)(v2 + *(_QWORD *)(a2 + 8))) != 0) + 1;
          while ( v2 < v13 );
        }
        v20 = v16;
        if ( v2 != v13 )
          v20 = 92;
      }
    }
    if ( v19 < v20 )
      return 0LL;
    if ( v19 > v20 )
      return 3LL;
  }
  if ( (unsigned int)v9 < v10 )
    return *(_BYTE *)(v9 + *(_QWORD *)(a2 + 8)) == 92;
  if ( (unsigned int)v9 <= v10 )
    return 2LL;
  else
    return 3LL;
}
