/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x18005F8E0
 * Callers:
 *     toupper @ 0x180099780 (toupper.c)
 *     _mbstrlen @ 0x18009CE18 (_mbstrlen.c)
 *     mbtowc @ 0x18009DC94 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x1800A03B4 (_safecrt_mbtowc.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005BF00 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlAnsiCharToUnicodeChar(char **a1)
{
  char *v2; // r9
  unsigned int v3; // ebx
  __int16 *v4; // rdx
  unsigned __int16 *v5; // r8
  unsigned int v6; // r10d
  int v7; // r11d
  __int64 v8; // r10
  __int64 v9; // r8
  unsigned __int16 *v10; // rdx
  __int64 v11; // rax
  __int64 v13; // rsi
  char v14; // al
  __int64 v15; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int16 v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF

  v17 = 32;
  _InterlockedOr(v16, 0);
  if ( GlobalRtlNlsState != -535 && word_180177690 != -535 )
  {
    _InterlockedOr(v16, 0);
    v2 = *a1;
    if ( !*(_WORD *)(qword_1801776E0 + 2LL * (unsigned __int8)**a1) )
    {
LABEL_4:
      v3 = 1;
      goto LABEL_5;
    }
    goto LABEL_16;
  }
  v2 = *a1;
  v14 = **a1;
  if ( (unsigned __int8)v14 < 0xC0u )
    goto LABEL_4;
  if ( (unsigned __int8)v14 < 0xE0u )
  {
LABEL_16:
    v3 = 2;
    goto LABEL_5;
  }
  v3 = 3;
  if ( (unsigned __int8)v14 >= 0xF0u )
    v3 = (unsigned __int8)v14 < 0xF8u ? 4 : 1;
LABEL_5:
  _InterlockedOr(v16, 0);
  if ( GlobalRtlNlsState == -535 || word_180177690 == -535 )
  {
    v4 = (__int16 *)&Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v16, 0);
    v4 = &GlobalRtlNlsState;
  }
  v5 = &v17;
  v6 = v3;
  if ( *v4 == -535 )
  {
    RtlUTF8ToUnicodeN(&v17, 2u, &v18, v2, v3);
  }
  else
  {
    v7 = 1;
    if ( v4[6] )
    {
      v13 = *((_QWORD *)v4 + 7);
      while ( v6 )
      {
        v15 = (unsigned __int8)*v2;
        --v7;
        --v6;
        if ( *(_WORD *)(v13 + 2 * v15) )
        {
          if ( !v6 )
          {
            *v5 = 0;
            break;
          }
          ++v2;
          --v6;
          *v5 = *(_WORD *)(v13 + 2 * ((unsigned __int8)*v2 + (unsigned __int64)*(unsigned __int16 *)(v13 + 2 * v15)));
        }
        else
        {
          *v5 = *(_WORD *)(*((_QWORD *)v4 + 4) + 2 * v15);
        }
        ++v5;
        ++v2;
        if ( !v7 )
          break;
      }
    }
    else
    {
      v8 = *((_QWORD *)v4 + 4);
      v9 = v3;
      v10 = &v17;
      if ( v3 > 1 )
        v9 = 1LL;
      do
      {
        v11 = (unsigned __int8)*v2++;
        *v10++ = *(_WORD *)(v8 + 2 * v11);
        --v9;
      }
      while ( v9 );
    }
  }
  *a1 += v3;
  return v17;
}
