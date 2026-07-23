/*
 * XREFs of sub_14082B6F0 @ 0x14082B6F0
 * Callers:
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 *     sub_14082B668 @ 0x14082B668 (sub_14082B668.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_14033EF50 @ 0x14033EF50 (sub_14033EF50.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14082BA10 @ 0x14082BA10 (sub_14082BA10.c)
 *     sub_14082BA68 @ 0x14082BA68 (sub_14082BA68.c)
 */

char *__fastcall sub_14082B6F0(__int64 a1)
{
  char *v1; // rbx
  __int64 v2; // rdi
  char *result; // rax
  PIMAGE_NT_HEADERS v4; // r15
  BOOL v5; // r12d
  __int64 NumberOfSections; // rbp
  int v7; // r10d
  _OWORD *v8; // rsi
  int *v9; // r8
  char *v10; // r9
  int v11; // ecx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r13
  __int64 v14; // r11
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r11
  int v17; // ebp
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r14
  __int64 v22; // rdx
  unsigned int v23; // edi
  __int64 v24; // rax
  int v25; // edx
  unsigned int v26; // r8d
  unsigned __int64 v27; // r10
  unsigned int v28; // r9d
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // r8
  __int64 SectionAlignment; // rcx
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // rax
  unsigned int v36; // [rsp+20h] [rbp-A8h]
  unsigned int v37; // [rsp+24h] [rbp-A4h]
  unsigned int v38; // [rsp+28h] [rbp-A0h]
  int v39; // [rsp+2Ch] [rbp-9Ch]
  unsigned __int64 v40; // [rsp+30h] [rbp-98h]
  unsigned __int64 v41; // [rsp+38h] [rbp-90h]
  unsigned __int64 v42; // [rsp+40h] [rbp-88h]
  char *v43; // [rsp+48h] [rbp-80h]
  unsigned __int64 v45; // [rsp+58h] [rbp-70h]
  _OWORD v46[2]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v47; // [rsp+88h] [rbp-40h]

  v1 = *(char **)(a1 + 48);
  v2 = a1;
  memset(v46, 0, sizeof(v46));
  v47 = 0LL;
  result = (char *)sub_1402FDD20((unsigned __int64)v1);
  if ( (_DWORD)result )
  {
    if ( v1 == qword_140D068F0 || v1 == qword_140D06988 )
      return (char *)sub_14082BA68(v1, sub_14082B4E0);
  }
  else
  {
    v37 = 0;
    v4 = RtlImageNtHeader(v1);
    v5 = 0;
    if ( (unsigned int)sub_14027B080((unsigned __int64)v1) == 1 )
      v37 = 1;
    else
      v5 = (*(_DWORD *)(v2 + 104) & 0x8000000) == 0;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v7 = v4->FileHeader.NumberOfSections;
    v8 = (_OWORD *)((char *)&v4->OptionalHeader.Magic + v4->FileHeader.SizeOfOptionalHeader);
    result = v1;
    if ( v4->FileHeader.NumberOfSections )
    {
      v9 = (int *)(v8 + 1);
      while ( 1 )
      {
        v10 = &v1[*(v9 - 1)];
        if ( v10 < result )
          break;
        v11 = *v9;
        if ( *v9 < (unsigned int)*(v9 - 2) )
          v11 = *(v9 - 2);
        v9 += 10;
        result = (char *)(-(__int64)v4->OptionalHeader.SectionAlignment & (unsigned __int64)&v10[v4->OptionalHeader.SectionAlignment
                                                                                               - 1
                                                                                               + v11]);
        if ( !--v7 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v39 = -1073741824;
      v43 = (char *)v8 + 40 * NumberOfSections - 1;
      v13 = sub_140313C70((unsigned __int64)v1);
      v36 = 0;
      v15 = v13 + 8 * v14;
      v16 = 0LL;
      v42 = v15;
      v17 = NumberOfSections + 1;
      v40 = 0LL;
      do
      {
        v45 = v16;
        if ( v17 == 1 )
        {
          HIDWORD(v47) = 0;
          v8 = v46;
          v41 = 0LL;
          v38 = 0;
          v21 = sub_140313C70(v12) + 8;
        }
        else
        {
          v41 = (unsigned __int64)&v1[*((unsigned int *)v8 + 3)];
          v21 = sub_140313C70(v41);
          if ( v19 < v18 )
            v19 = v18;
          v22 = v36;
          v38 = v19;
        }
        if ( v16 )
        {
          if ( v21 > v16 )
          {
            v33 = sub_14082BA10(v37, v22);
            sub_14033EF50(v2, v34, v34, v33);
            v20 = (unsigned __int64)v43;
            v35 = v13;
            v13 += 8LL;
            v16 = 0LL;
            v40 = 0LL;
            v36 = 0;
            if ( v45 != v35 )
              v13 = v35;
          }
        }
        if ( v21 >= v42 )
        {
          result = (char *)v46;
          if ( v8 != v46 )
            break;
        }
        v23 = *((_DWORD *)v8 + 9) & 0xE0000000;
        if ( v5 && ((dword_140D06880 & 0x8000) == 0 || (*((_DWORD *)v8 + 9) & 0x20000000) == 0) )
          v23 = *((_DWORD *)v8 + 9) & 0x60000000 | 0x80000000;
        if ( v23 == v39 && (v32 = v4->OptionalHeader.SectionAlignment, v32 <= 0x1000) )
        {
          SectionAlignment = v32;
        }
        else
        {
          v24 = sub_140313C70(v20);
          v27 = v24;
          if ( v24 == v21 )
          {
            v40 = v21;
            v27 = v24 - 8;
            v16 = v21;
            v36 = v26 | v23 | v25;
          }
          if ( v27 >= v13 )
          {
            v28 = sub_14082BA10(v37, v26);
            v30 = v42 - 8;
            if ( v29 < v42 )
              v30 = v29;
            sub_14033EF50(a1, v13, v30, v28);
            v16 = v40;
          }
          SectionAlignment = v4->OptionalHeader.SectionAlignment;
          v13 = v21;
          v39 = v23;
        }
        v8 = (_OWORD *)((char *)v8 + 40);
        result = (char *)(SectionAlignment + v38);
        v2 = a1;
        v12 = (-SectionAlignment & (unsigned __int64)&result[v41 - 1]) - 1;
        v43 = (char *)v12;
        --v17;
      }
      while ( v17 );
    }
  }
  return result;
}
