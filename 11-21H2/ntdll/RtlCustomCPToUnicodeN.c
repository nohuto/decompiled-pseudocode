/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x18000E210
 * Callers:
 *     RtlOemToUnicodeN @ 0x18000DCD0 (RtlOemToUnicodeN.c)
 *     RtlMultiByteToUnicodeN @ 0x18000DD40 (RtlMultiByteToUnicodeN.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005BF00 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlCustomCPToUnicodeN(
        __int64 a1,
        _WORD *a2,
        unsigned int a3,
        char *a4,
        unsigned __int8 *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  _WORD *v8; // r10
  unsigned int v10; // edx
  unsigned int v11; // r11d
  unsigned int v12; // ecx
  __int64 v13; // rdi
  unsigned __int8 *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v18; // r14
  int v19; // esi
  unsigned __int8 *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  char *v23; // r8
  int v24; // eax
  char v25; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v8 = a2;
  if ( !a1 || *(_WORD *)a1 == 0xFDE9 )
  {
    v23 = &v25;
    if ( a4 )
      v23 = a4;
    if ( a6 )
    {
      v24 = RtlUTF8ToUnicodeN((_DWORD)a2, a3, (_DWORD)v23, (_DWORD)a5, a6);
    }
    else
    {
      *(_DWORD *)v23 = 0;
      v24 = 0;
    }
    if ( v24 == -1073741789 )
      return (unsigned int)-2147483643;
    return v6;
  }
  else
  {
    v10 = a6;
    v11 = a3 >> 1;
    if ( *(_WORD *)(a1 + 12) )
    {
      v18 = *(_QWORD *)(a1 + 56);
      v19 = (int)v8;
      if ( v11 )
      {
        v20 = a5;
        while ( v10 )
        {
          v21 = *v20;
          --v11;
          --v10;
          v22 = *(unsigned __int16 *)(v18 + 2 * v21);
          if ( (_WORD)v22 )
          {
            if ( !v10 )
            {
              *v8 = 0;
              LODWORD(v8) = (_DWORD)v8 + 2;
              break;
            }
            ++v20;
            --v10;
            *v8 = *(_WORD *)(v18 + 2 * (v22 + *v20));
          }
          else
          {
            *v8 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2 * v21);
          }
          ++v8;
          ++v20;
          if ( !v11 )
            break;
        }
      }
      if ( a4 )
        *(_DWORD *)a4 = (_DWORD)v8 - v19;
    }
    else
    {
      v12 = a6;
      if ( v11 < a6 )
        v12 = v11;
      if ( a4 )
        *(_DWORD *)a4 = 2 * v12;
      v13 = *(_QWORD *)(a1 + 32);
      if ( v12 )
      {
        v14 = a5;
        v15 = v12;
        do
        {
          v16 = *v14++;
          *v8++ = *(_WORD *)(v13 + 2 * v16);
          --v15;
        }
        while ( v15 );
      }
    }
    return v11 < v10 ? 0x80000005 : 0;
  }
}
