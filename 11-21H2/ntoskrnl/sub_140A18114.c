/*
 * XREFs of sub_140A18114 @ 0x140A18114
 * Callers:
 *     sub_140A177D8 @ 0x140A177D8 (sub_140A177D8.c)
 * Callees:
 *     sub_1402D87F0 @ 0x1402D87F0 (sub_1402D87F0.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 */

__int64 __fastcall sub_140A18114(
        wchar_t *Str1,
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
  v15 = Str1;
  while ( !v10 )
  {
    v16 = dword_140C092F0[6 * v13];
    if ( a2 > v16 )
    {
      v17 = wcsnicmp(v15, off_140C092E0[3 * v13], v16);
      v7 = 0;
      if ( !v17 )
      {
        v18 = 3 * v13;
        v12 = a2 + dword_140C092F4[6 * v13] - dword_140C092F0[6 * v13];
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
            if ( *(_WORD *)((char *)&unk_140C09260 + i * 8) == v19 && *(_WORD *)((char *)&unk_140C09262 + i * 8) == a6 )
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
              v26 = sub_1402D87F0(a3, v8, (__int64)(&off_140C09268)[i]);
              if ( v26 < 0 )
                goto LABEL_38;
              v27 = sub_1402D87F0(a3, v8, (__int64)&Str1[dword_140C092F0[0]]);
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
          sub_1406E0C3C(1LL, (__int64)"AslpEnvResolveVars");
          v18 = 0LL;
          goto LABEL_27;
        }
        if ( !v11 )
        {
LABEL_27:
          v26 = sub_1402E0200(a3, v8, (__int64)(&off_140C092E8)[v18]);
          if ( v26 < 0 )
            goto LABEL_38;
          v28 = sub_1402D87F0(a3, v8, (__int64)&Str1[dword_140C092F0[6 * v13]]);
          v7 = 0;
          v26 = v28;
          if ( v28 < 0 )
            goto LABEL_38;
        }
LABEL_29:
        v10 = 1;
      }
      v15 = Str1;
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
        v26 = sub_1402E0200(a3, v8, (__int64)v15);
        if ( v26 < 0 )
        {
LABEL_38:
          sub_1406E0C3C(1LL, (__int64)"AslpEnvResolveVars");
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
