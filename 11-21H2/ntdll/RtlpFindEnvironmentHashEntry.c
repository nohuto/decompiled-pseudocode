/*
 * XREFs of RtlpFindEnvironmentHashEntry @ 0x180038070
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 *     RtlpInsertEnvironmentHashTableEntry @ 0x1800D93B0 (RtlpInsertEnvironmentHashTableEntry.c)
 *     RtlpQueryEnvironmentHashTable @ 0x1800D9600 (RtlpQueryEnvironmentHashTable.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1800416B0 (RtlCompareUnicodeStrings.c)
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 */

__int64 __fastcall RtlpFindEnvironmentHashEntry(__int64 a1, const WCHAR *a2, SIZE_T a3)
{
  const WCHAR *v6; // r11
  __int64 v7; // r9
  const WCHAR *v8; // rbx
  __int64 v9; // rdi
  unsigned __int8 v10; // al
  __int64 v11; // r9
  __int64 v12; // r11
  unsigned int v13; // ebp
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v18; // [rsp+60h] [rbp+8h]

  v6 = a2;
  v7 = 314159LL;
  v8 = &a2[(unsigned int)a3];
  if ( a2 < v8 )
  {
    v9 = qword_1801776F8;
    do
    {
      v10 = NLS_UPCASE(v9, *v6);
      v6 = (const WCHAR *)(v12 + 2);
      v7 = 37 * (v10 + 37 * v11);
    }
    while ( v6 < v8 );
  }
  v13 = *(_DWORD *)(a1 + 4);
  v14 = 0LL;
  v15 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v16 = v7 & v15;
  v18 = v7 & v15;
LABEL_5:
  if ( v14 )
    goto LABEL_8;
  if ( v13 >> 5 )
  {
    v14 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v18)
           + 37
           * (BYTE5(v18)
            + 37
            * (BYTE4(v18)
             + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v16 + 11623883)))))))
          + HIBYTE(v18)) & ((v13 >> 5) - 1));
LABEL_8:
    while ( 1 )
    {
      v14 = *(_QWORD *)v14;
      if ( (v14 & 1) != 0 )
        break;
      if ( v16 == (v15 & *(_QWORD *)(v14 + 8)) )
      {
        if ( RtlCompareUnicodeStrings(*(PCWCH *)(v14 + 16), *(_QWORD *)(v14 + 32), a2, a3, 1u) )
          goto LABEL_5;
        return v14;
      }
    }
  }
  return 0LL;
}
