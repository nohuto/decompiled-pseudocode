/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x18005A200
 * Callers:
 *     toupper @ 0x180094840 (toupper.c)
 *     _mbstrlen @ 0x180097F18 (_mbstrlen.c)
 *     mbtowc @ 0x180098DD4 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x18009B544 (_safecrt_mbtowc.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180055990 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlAnsiCharToUnicodeChar(char **a1)
{
  int v2; // edx
  char *v3; // r9
  unsigned int v4; // edi
  __int16 v5; // cx
  __int64 *v6; // r11
  __int16 v7; // ax
  __int64 v8; // r10
  __int64 v9; // r8
  unsigned __int16 *v10; // rsi
  unsigned int v11; // ebp
  __int64 v12; // r8
  unsigned __int16 *v13; // rdx
  __int64 v14; // rax
  char v16; // al
  __int64 v17; // rcx
  signed __int32 v18[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int16 v19; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+58h] [rbp+10h] BYREF

  v19 = 32;
  _InterlockedOr(v18, 0);
  v2 = 1;
  if ( GlobalRtlNlsState != -535 && word_180181750 != -535 )
  {
    _InterlockedOr(v18, 0);
    v3 = *a1;
    if ( *(_WORD *)(qword_1801817A0 + 2LL * (unsigned __int8)**a1) )
    {
      v4 = 2;
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v3 = *a1;
  v16 = **a1;
  if ( (unsigned __int8)v16 < 0xC0u )
  {
LABEL_4:
    v4 = 1;
    goto LABEL_5;
  }
  if ( (unsigned __int8)v16 >= 0xE0u )
  {
    if ( (unsigned __int8)v16 >= 0xF0u )
    {
      v4 = 1;
      if ( (unsigned __int8)v16 < 0xF8u )
        v4 = 4;
    }
    else
    {
      v4 = 3;
    }
  }
  else
  {
    v4 = 2;
  }
LABEL_5:
  _InterlockedOr(v18, 0);
  if ( GlobalRtlNlsState == -535 || word_180181750 == -535 )
  {
    v5 = Utf8TableInfo;
    v6 = (__int64 *)&xmmword_1801816C0;
    v7 = WORD6(Utf8TableInfo);
    v8 = xmmword_1801816C0;
    v9 = qword_1801816D8;
  }
  else
  {
    _InterlockedOr(v18, 0);
    v5 = GlobalRtlNlsState;
    v6 = &qword_180181730;
    v7 = word_18018171C;
    v8 = qword_180181730;
    v9 = qword_180181748;
  }
  v10 = &v19;
  v11 = v4;
  if ( v5 == -535 )
  {
    RtlUTF8ToUnicodeN(&v19, 2u, &v20, v3, v4);
  }
  else if ( v7 )
  {
    while ( v11 )
    {
      --v2;
      --v11;
      v17 = 2LL * (unsigned __int8)*v3;
      if ( *(_WORD *)(v17 + v9) )
      {
        if ( !v11 )
        {
          *v10 = 0;
          break;
        }
        ++v3;
        --v11;
        *v10 = *(_WORD *)(v9 + 2 * ((unsigned __int8)*v3 + (unsigned __int64)*(unsigned __int16 *)(v17 + v9)));
      }
      else
      {
        *v10 = *(_WORD *)(v17 + *v6);
      }
      ++v10;
      ++v3;
      if ( !v2 )
        break;
    }
  }
  else
  {
    v12 = v4;
    if ( v4 > 1 )
      v12 = 1LL;
    v13 = &v19;
    do
    {
      v14 = (unsigned __int8)*v3;
      ++v13;
      ++v3;
      *(v13 - 1) = *(_WORD *)(v8 + 2 * v14);
      --v12;
    }
    while ( v12 );
  }
  *a1 += v4;
  return v19;
}
