/*
 * XREFs of UpcaseUnicodeToMultiByteNHelper @ 0x1800F0738
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x18000C510 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18000DBB0 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 */

__int64 __fastcall UpcaseUnicodeToMultiByteNHelper(
        int a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r15
  _DWORD *v8; // rdi
  __int64 v9; // r14
  unsigned int v10; // r11d
  __int64 v11; // r12
  _BYTE *v12; // r10
  __int64 v13; // r13
  __int64 v15; // rax
  unsigned __int16 v16; // dx
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // dx
  __int16 v19; // dx
  unsigned int v20; // eax

  v5 = a5;
  v7 = qword_180177670;
  v8 = a3;
  v9 = qword_180177678;
  v10 = a2;
  v11 = qword_1801776E0;
  LODWORD(v12) = a1;
  v13 = qword_1801776F8;
  if ( a5 )
  {
    do
    {
      if ( !v10 )
        break;
      v15 = *a4++;
      v16 = *(_WORD *)(v9 + 2 * v15);
      v17 = (unsigned __int64)v16 >> 8;
      if ( *(_WORD *)(v11 + 2 * v17) )
        v18 = *(_WORD *)(qword_180177688
                       + 2 * ((unsigned __int8)v16 + (unsigned __int64)*(unsigned __int16 *)(v11 + 2 * v17)));
      else
        v18 = *(_WORD *)(v7 + 2LL * (unsigned __int8)v16);
      v19 = *(_WORD *)(v9 + 2LL * NLS_UPCASE(v13, v18));
      if ( HIBYTE(v19) )
      {
        v20 = v10--;
        if ( v20 < 2 )
          break;
        *v12++ = HIBYTE(v19);
      }
      *v12 = v19;
      --v10;
      LODWORD(v12) = (_DWORD)v12 + 1;
      --v5;
    }
    while ( v5 );
    v8 = a3;
  }
  if ( v8 )
    *v8 = (_DWORD)v12 - a1;
  return v10 < v5 ? 0x80000005 : 0;
}
