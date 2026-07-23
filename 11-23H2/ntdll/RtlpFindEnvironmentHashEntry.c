/*
 * XREFs of RtlpFindEnvironmentHashEntry @ 0x18001EEA0
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18001EB90 (RtlQueryEnvironmentVariable.c)
 *     RtlpInsertEnvironmentHashTableEntry @ 0x180058A94 (RtlpInsertEnvironmentHashTableEntry.c)
 *     RtlpQueryEnvironmentHashTable @ 0x1800D8FB4 (RtlpQueryEnvironmentHashTable.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180014950 (RtlCompareUnicodeStrings.c)
 *     NLS_UPCASE @ 0x1800154D8 (NLS_UPCASE.c)
 */

__int64 __fastcall RtlpFindEnvironmentHashEntry(__int64 a1, const WCHAR *a2, SIZE_T a3)
{
  const WCHAR *v6; // rbx
  __int64 v7; // r10
  const WCHAR *v8; // rdi
  __int64 v9; // rsi
  unsigned __int8 v10; // al
  __int64 v11; // r10
  unsigned int v12; // ebp
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v17; // [rsp+60h] [rbp+8h]

  v6 = a2;
  v7 = 314159LL;
  v8 = &a2[(unsigned int)a3];
  if ( a2 < v8 )
  {
    v9 = qword_180184808;
    do
    {
      v10 = NLS_UPCASE(v9, *v6++);
      v7 = 37 * (v10 + 37 * v11);
    }
    while ( v6 < v8 );
  }
  v12 = *(_DWORD *)(a1 + 4);
  v13 = 0LL;
  v14 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v15 = v7 & v14;
  v17 = v7 & v14;
LABEL_5:
  if ( v13 )
    goto LABEL_8;
  if ( v12 >> 5 )
  {
    v13 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v17)
           + 37
           * (BYTE5(v17)
            + 37
            * (BYTE4(v17)
             + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v15 + 11623883)))))))
          + HIBYTE(v17)) & ((v12 >> 5) - 1));
LABEL_8:
    while ( 1 )
    {
      v13 = *(_QWORD *)v13;
      if ( (v13 & 1) != 0 )
        break;
      if ( v15 == (v14 & *(_QWORD *)(v13 + 8)) )
      {
        if ( RtlCompareUnicodeStrings(*(PCWCH *)(v13 + 16), *(_QWORD *)(v13 + 32), a2, a3, 1u) )
          goto LABEL_5;
        return v13;
      }
    }
  }
  return 0LL;
}
