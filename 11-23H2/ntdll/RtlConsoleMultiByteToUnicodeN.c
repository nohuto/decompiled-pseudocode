/*
 * XREFs of RtlConsoleMultiByteToUnicodeN @ 0x1800F12E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018DC4 (RtlpIsUtf8Process.c)
 *     RtlMultiByteToUnicodeN @ 0x180059010 (RtlMultiByteToUnicodeN.c)
 */

__int64 __fastcall RtlConsoleMultiByteToUnicodeN(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v6; // rdx
  _DWORD *v7; // r8
  _BYTE *v8; // r9
  unsigned int v9; // r10d
  _WORD *v10; // r11
  _BYTE *i; // rax
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r15
  int v20; // ebp
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rsi
  signed __int32 v24[8]; // [rsp+0h] [rbp-48h] BYREF

  *a6 = 0;
  if ( RtlpIsUtf8Process() )
  {
    if ( a5 )
    {
      for ( i = v8; *i >= 0x20u; ++i )
      {
        if ( ++v9 >= a5 )
          return RtlMultiByteToUnicodeN((int)v10, v6, (__int64)v7, (__int64)v8, a5);
      }
      *a6 = 1;
    }
    return RtlMultiByteToUnicodeN((int)v10, v6, (__int64)v7, (__int64)v8, a5);
  }
  else
  {
    _InterlockedOr(v24, v9);
    v13 = qword_180184780;
    v14 = qword_1801847F0;
    v15 = (unsigned int)v6 >> 1;
    if ( word_18018476C == (_WORD)v9 )
    {
      v16 = a5;
      if ( v15 < a5 )
        v16 = v15;
      if ( v7 )
        *v7 = 2 * v16;
      if ( v16 )
      {
        v17 = v16;
        do
        {
          if ( *v8 < 0x20u )
            *a6 = 1;
          v18 = (unsigned __int8)*v8++;
          *v10++ = *(_WORD *)(v13 + 2 * v18);
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v19 = qword_180184798;
      v20 = (int)v10;
      if ( v15 )
      {
        v21 = a5;
        while ( v21 )
        {
          v22 = (unsigned __int8)*v8;
          --v15;
          --v21;
          v23 = *(unsigned __int16 *)(v14 + 2 * v22);
          if ( (_WORD)v23 )
          {
            if ( !v21 )
            {
              *v10 = v9;
              LODWORD(v10) = (_DWORD)v10 + 2;
              break;
            }
            ++v8;
            --v21;
            *v10 = *(_WORD *)(v19 + 2 * (v23 + (unsigned __int8)*v8));
          }
          else
          {
            if ( (unsigned __int8)v22 < 0x20u )
              *a6 = 1;
            *v10 = *(_WORD *)(v13 + 2LL * (unsigned __int8)*v8);
          }
          ++v10;
          ++v8;
          if ( !v15 )
            break;
        }
      }
      if ( v7 )
        *v7 = (_DWORD)v10 - v20;
    }
    return 0LL;
  }
}
