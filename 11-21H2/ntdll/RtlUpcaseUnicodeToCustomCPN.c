/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1800F0420
 * Callers:
 *     <none>
 * Callees:
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 */

__int64 __fastcall RtlUpcaseUnicodeToCustomCPN(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  __int64 v7; // r13
  unsigned int v8; // r11d
  unsigned int v10; // ebx
  _BYTE *v11; // r10
  unsigned int v12; // eax
  __int64 v13; // rbp
  unsigned __int16 *v14; // rsi
  __int64 v15; // r14
  unsigned __int16 v16; // ax
  _BYTE *v17; // r10
  __int64 v18; // r14
  int v19; // r15d
  __int64 v20; // r12
  unsigned __int16 *v21; // rbp
  __int64 v22; // rax
  unsigned __int16 v23; // dx
  unsigned __int64 v24; // rax
  unsigned __int16 v25; // dx
  __int16 v26; // dx
  unsigned int v27; // eax

  v7 = qword_1801776F8;
  v8 = a6 >> 1;
  v10 = a3;
  LODWORD(v11) = a2;
  if ( *(_WORD *)(a1 + 12) )
  {
    v18 = *(_QWORD *)(a1 + 56);
    v19 = a2;
    v20 = *(_QWORD *)(a1 + 40);
    if ( v8 )
    {
      v21 = a5;
      do
      {
        if ( !v10 )
          break;
        v22 = *v21++;
        v23 = *(_WORD *)(v20 + 2 * v22);
        v24 = (unsigned __int64)v23 >> 8;
        if ( *(_WORD *)(v18 + 2 * v24) )
          v25 = *(_WORD *)(v18 + 2 * ((unsigned __int8)v23 + (unsigned __int64)*(unsigned __int16 *)(v18 + 2 * v24)));
        else
          v25 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * (unsigned __int8)v23);
        v26 = *(_WORD *)(v20 + 2LL * NLS_UPCASE(v7, v25));
        if ( HIBYTE(v26) )
        {
          v27 = v10--;
          if ( v27 < 2 )
            break;
          *v11++ = HIBYTE(v26);
        }
        *v11 = v26;
        --v10;
        LODWORD(v11) = (_DWORD)v11 + 1;
        --v8;
      }
      while ( v8 );
      v19 = a2;
    }
    if ( a4 )
      *a4 = (_DWORD)v11 - v19;
  }
  else
  {
    v12 = a3;
    if ( v8 < a3 )
      v12 = a6 >> 1;
    if ( a4 )
      *a4 = v12;
    v13 = *(_QWORD *)(a1 + 40);
    if ( v12 )
    {
      v14 = a5;
      v15 = v12;
      do
      {
        v16 = NLS_UPCASE(v7, *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*v14++ + v13)));
        *v17 = *(_BYTE *)(v16 + v13);
        --v15;
      }
      while ( v15 );
    }
  }
  return v10 < v8 ? 0x80000005 : 0;
}
