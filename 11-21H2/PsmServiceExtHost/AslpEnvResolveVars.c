/*
 * XREFs of AslpEnvResolveVars @ 0x1800A37C8
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1800A3010 (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180094FC4 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1800971BC (RtlStringCchCatW.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpEnvResolveVars(
        wchar_t *String1,
        unsigned int a2,
        _WORD *a3,
        unsigned int a4,
        __int16 a5,
        __int16 a6,
        unsigned int *a7)
{
  int v7; // r11d
  __int64 v8; // r13
  int v10; // ebx
  int v11; // esi
  unsigned int v12; // ebp
  __int64 v13; // r12
  const wchar_t *v15; // r9
  unsigned int v16; // eax
  int v17; // eax
  __int64 v18; // rbx
  __int16 v19; // cx
  unsigned __int64 i; // rdi
  __int64 v21; // rdx
  _WORD *v22; // rcx
  __int16 v23; // ax
  _WORD *v24; // rax
  signed int v25; // eax
  int v26; // ebx
  int v27; // eax
  int v28; // eax

  v7 = 0;
  v8 = a4;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  v15 = String1;
  while ( !v10 )
  {
    v16 = dword_1800DC550[6 * v13];
    if ( a2 > v16 )
    {
      v17 = _wcsnicmp(v15, off_1800DC540[3 * v13], v16);
      v7 = 0;
      if ( !v17 )
      {
        v18 = 3 * v13;
        v12 = a2 + dword_1800DC554[6 * v13] - dword_1800DC550[6 * v13];
        if ( v12 > (unsigned int)v8 )
        {
          v26 = -1073741789;
          goto LABEL_44;
        }
        if ( !v13 )
        {
          v19 = a5;
          for ( i = 0LL; i < 16; i += 2LL )
          {
            if ( *(_WORD *)((char *)&unk_1800DC4C0 + i * 8) == v19 && *(_WORD *)((char *)&unk_1800DC4C2 + i * 8) == a6 )
            {
              if ( (unsigned __int64)(v8 - 1) > 0x7FFFFFFE )
              {
                v25 = -1073741811;
                if ( (_DWORD)v8 )
                {
                  *a3 = 0;
                  v26 = -1073741811;
                  goto LABEL_38;
                }
              }
              else
              {
                v21 = v8;
                v22 = a3;
                do
                {
                  if ( !(2147483646 - v8 + v21) )
                    break;
                  v23 = *(_WORD *)((char *)v22 + (char *)L"%systemroot%" - (char *)a3);
                  if ( !v23 )
                    break;
                  *v22++ = v23;
                  --v21;
                }
                while ( v21 );
                v24 = v22 - 1;
                if ( v21 )
                  v24 = v22;
                *v24 = 0;
                v25 = v21 != 0 ? 0 : 0x80000005;
              }
              v26 = v25;
              if ( v25 < 0 )
                goto LABEL_38;
              v26 = RtlStringCchCatW(a3, v8, (__int64)(&off_1800DC4C8)[i]);
              if ( v26 < 0 )
                goto LABEL_38;
              v27 = RtlStringCchCatW(a3, v8, (__int64)&String1[dword_1800DC550[0]]);
              v7 = 0;
              v26 = v27;
              if ( v27 < 0 )
                goto LABEL_38;
              v19 = a5;
              v11 = 1;
            }
          }
          if ( v11 )
            goto LABEL_29;
          AslLogCallPrintf(1LL);
          v18 = 0LL;
          goto LABEL_27;
        }
        if ( !v11 )
        {
LABEL_27:
          v26 = RtlStringCchCopyW(a3, v8, (__int64)(&off_1800DC548)[v18]);
          if ( v26 < 0 )
            goto LABEL_38;
          v28 = RtlStringCchCatW(a3, v8, (__int64)&String1[dword_1800DC550[6 * v13]]);
          v7 = 0;
          v26 = v28;
          if ( v28 < 0 )
            goto LABEL_38;
        }
LABEL_29:
        v10 = 1;
      }
      v15 = String1;
    }
    if ( (unsigned __int64)++v13 >= 4 )
    {
      if ( !v10 )
      {
        v12 = a2;
        if ( a2 > (unsigned int)v8 )
        {
          v26 = -1073741789;
          *a7 = a2;
          return (unsigned int)v26;
        }
        v26 = RtlStringCchCopyW(a3, v8, (__int64)v15);
        if ( v26 < 0 )
        {
LABEL_38:
          AslLogCallPrintf(1LL);
          return (unsigned int)v26;
        }
      }
      break;
    }
  }
  v26 = v7;
LABEL_44:
  *a7 = v12;
  return (unsigned int)v26;
}
