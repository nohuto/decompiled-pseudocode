/*
 * XREFs of UpcaseUnicodeToMultiByteNHelper @ 0x1800F160C
 * Callers:
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18007EC70 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18008A5E0 (RtlUpcaseUnicodeToOemN.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800154D8 (NLS_UPCASE.c)
 */

__int64 __fastcall UpcaseUnicodeToMultiByteNHelper(
        int a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v6; // edi
  _DWORD *v7; // rsi
  unsigned __int16 *MultiByteTable; // r12
  _WORD *WideCharTable; // r15
  _BYTE *v11; // r11
  __int64 v12; // r13
  int v13; // r14d
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int16 v16; // dx
  unsigned __int64 v17; // rax
  int v18; // edx
  __int16 v19; // dx
  unsigned int v20; // eax

  v6 = a5;
  v7 = a3;
  MultiByteTable = GlobalRtlNlsState.MultiByteTable;
  WideCharTable = GlobalRtlNlsState.WideCharTable;
  LODWORD(v11) = a1;
  v12 = qword_1801847F0;
  v13 = a1;
  if ( a5 )
  {
    v14 = qword_180184808;
    do
    {
      if ( !a2 )
        break;
      v15 = *a4++;
      v16 = WideCharTable[v15];
      v17 = (unsigned __int64)v16 >> 8;
      if ( *(_WORD *)(v12 + 2 * v17) )
        v18 = GlobalRtlNlsState.DBCSOffsets[(unsigned __int8)v16
                                          + (unsigned __int64)*(unsigned __int16 *)(v12 + 2 * v17)];
      else
        v18 = MultiByteTable[(unsigned __int8)v16];
      v19 = WideCharTable[(unsigned __int16)NLS_UPCASE(v14, v18)];
      if ( HIBYTE(v19) )
      {
        v20 = a2--;
        if ( v20 < 2 )
          break;
        *v11++ = HIBYTE(v19);
      }
      *v11 = v19;
      --a2;
      LODWORD(v11) = (_DWORD)v11 + 1;
      --v6;
    }
    while ( v6 );
    v7 = a3;
    v13 = a1;
  }
  if ( v7 )
    *v7 = (_DWORD)v11 - v13;
  return a2 < v6 ? 0x80000005 : 0;
}
