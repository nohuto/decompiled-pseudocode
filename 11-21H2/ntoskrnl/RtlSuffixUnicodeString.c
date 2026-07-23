/*
 * XREFs of RtlSuffixUnicodeString @ 0x1409B57F0
 * Callers:
 *     sub_140826270 @ 0x140826270 (sub_140826270.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

BOOLEAN __stdcall RtlSuffixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  _QWORD *v3; // rax
  char v4; // r8
  __int64 v5; // r9
  unsigned __int16 *v6; // r11
  unsigned __int16 *v7; // rdx
  unsigned int v8; // r10d
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  _WORD *v11; // r11
  __int64 v12; // rdx
  _WORD *v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  unsigned __int16 *v17; // r11
  unsigned __int16 v18; // ax
  __int64 v19; // r11
  __int16 v20; // r10
  unsigned __int64 v21; // rdx

  v3 = sub_140347DB0();
  v8 = *v7;
  v9 = v3[154];
  v10 = *v6;
  if ( (unsigned __int16)v8 >= (unsigned __int16)v10 )
  {
    v11 = (_WORD *)*((_QWORD *)v6 + 1);
    v12 = (unsigned int)v10;
    v13 = &v11[v10 >> 1];
    if ( v11 >= v13 )
      return 1;
    v14 = *(_QWORD *)(v5 + 8);
    v15 = ((unsigned __int64)v8 - v12) >> 1;
    if ( v4 )
    {
      v16 = v14 + 2 * v15 - (_QWORD)v11;
      while ( 1 )
      {
        sub_1403477B0(v9, *(_WORD *)((char *)v11 + v16));
        v18 = sub_1403477B0(v9, *v17);
        if ( v18 != v20 )
          break;
        v11 = (_WORD *)(v19 + 2);
        if ( v11 >= v13 )
          return 1;
      }
    }
    else
    {
      v21 = v14 + 2 * v15 - (_QWORD)v11;
      while ( *v11 == *(_WORD *)((char *)v11 + v21) )
      {
        if ( ++v11 >= v13 )
          return 1;
      }
    }
  }
  return 0;
}
