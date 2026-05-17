/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x180018F30
 * Callers:
 *     RtlUnicodeToMultiByteN @ 0x180018A50 (RtlUnicodeToMultiByteN.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018DA0 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeToOemN @ 0x1800590D0 (RtlUnicodeToOemN.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180059D30 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall RtlUnicodeToCustomCPN(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // r11d
  _BYTE *v8; // r10
  unsigned int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned __int16 *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v16; // r14
  int v17; // edi
  unsigned __int16 *v18; // r8
  __int64 v19; // rax
  __int16 v20; // si
  unsigned int v21; // eax
  char *v22; // r8
  int v23; // eax
  char v24; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v7 = a3;
  v8 = a2;
  if ( !a1 || *(_WORD *)a1 == 0xFDE9 )
  {
    v22 = &v24;
    if ( a4 )
      v22 = (char *)a4;
    if ( a6 )
    {
      v23 = RtlUnicodeToUTF8N((_DWORD)a2, v7, (_DWORD)v22, (_DWORD)a5, a6);
    }
    else
    {
      *(_DWORD *)v22 = 0;
      v23 = 0;
    }
    if ( v23 == -1073741789 )
      return (unsigned int)-2147483643;
    return v6;
  }
  else
  {
    v9 = a6 >> 1;
    if ( *(_WORD *)(a1 + 12) )
    {
      v16 = *(_QWORD *)(a1 + 40);
      v17 = (int)v8;
      if ( v9 )
      {
        v18 = a5;
        do
        {
          if ( !v7 )
            break;
          v19 = *v18++;
          v20 = *(_WORD *)(v16 + 2 * v19);
          if ( HIBYTE(v20) )
          {
            v21 = v7--;
            if ( v21 < 2 )
              break;
            *v8++ = HIBYTE(v20);
          }
          *v8 = v20;
          --v7;
          ++v8;
          --v9;
        }
        while ( v9 );
      }
      if ( a4 )
        *a4 = (_DWORD)v8 - v17;
    }
    else
    {
      v10 = a3;
      if ( v9 < a3 )
        v10 = a6 >> 1;
      if ( a4 )
        *a4 = v10;
      v11 = *(_QWORD *)(a1 + 40);
      if ( v10 )
      {
        v12 = a5;
        v13 = v10;
        do
        {
          v14 = *v12++;
          *v8++ = *(_BYTE *)(v14 + v11);
          --v13;
        }
        while ( v13 );
      }
    }
    return v7 < v9 ? 0x80000005 : 0;
  }
}
