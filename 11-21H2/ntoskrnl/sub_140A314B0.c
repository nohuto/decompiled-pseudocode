/*
 * XREFs of sub_140A314B0 @ 0x140A314B0
 * Callers:
 *     sub_140A318B0 @ 0x140A318B0 (sub_140A318B0.c)
 * Callees:
 *     sub_1402E04F4 @ 0x1402E04F4 (sub_1402E04F4.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     sub_140A30DE4 @ 0x140A30DE4 (sub_140A30DE4.c)
 */

__int64 __fastcall sub_140A314B0(_DWORD *a1, unsigned int a2, _WORD *a3, unsigned int *a4)
{
  unsigned __int64 v7; // rdi
  _WORD *v8; // rsi
  int v9; // ecx
  int v10; // eax
  const wchar_t *v11; // r8
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  int v15; // ebx
  unsigned int v16; // r15d
  signed int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  const WCHAR *v22; // r8
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rax
  unsigned int v28; // r15d
  unsigned int v29; // r15d
  unsigned __int64 v30; // rax
  unsigned __int64 v32; // [rsp+30h] [rbp-10h] BYREF
  _WORD *v33; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v34; // [rsp+80h] [rbp+40h] BYREF
  unsigned int *v35; // [rsp+98h] [rbp+58h]

  v35 = a4;
  v32 = 0LL;
  v7 = 0LL;
  v33 = 0LL;
  v8 = 0LL;
  v34 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( a2 >= 2 )
    *a3 = 0;
  v10 = *a1 & 0xFF00000;
  if ( v10 )
  {
    switch ( v10 )
    {
      case 1048576:
        v11 = L"AND(";
        break;
      case 2097152:
        goto LABEL_12;
      case 3145728:
        v11 = L"OR(";
        break;
      case 4194304:
LABEL_12:
        v11 = (const wchar_t *)qword_14086CB30;
        break;
      case 5242880:
        v11 = L"NOT(";
        break;
      case 6291456:
        goto LABEL_12;
      default:
        return (unsigned int)-1073741811;
    }
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
    if ( a4 )
      *a4 = v13;
    if ( v13 > a2 )
      return (unsigned int)-1073741789;
    else
      return (unsigned int)sub_1402E0978(a3, a2, (__int64)v11);
  }
  v14 = 6;
  if ( a2 >= 6 )
  {
    v9 = sub_1402E04F4(a3, a2, L"[{", &v33, &v32, 1024);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v7 = v32;
    v8 = v33;
  }
  v15 = *a1 & 0xF0000;
  if ( (*a1 & 0x10000) != 0 )
  {
    v15 = *a1 & 0xE0000;
    v14 = 16;
    if ( a2 >= 0x10 )
    {
      v9 = sub_1402E04F4(v8, v7, L"(NOT)", &v33, &v32, 1024);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v7 = v32;
      v8 = v33;
    }
  }
  if ( (v15 & 0x20000) != 0 )
  {
    v15 &= ~0x20000u;
    v14 += 26;
    if ( v14 <= a2 )
    {
      v9 = sub_1402E04F4(v8, v7, L"(IGNORE_CASE)", &v33, &v32, 1024);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v7 = v32;
      v8 = v33;
    }
  }
  if ( v15 )
    return (unsigned int)-1073741811;
  v16 = v14 + 2;
  if ( v16 <= a2 )
  {
    v9 = sub_1402E04F4(v8, v7, (const WCHAR *)qword_140876AF0, &v33, &v32, 1024);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v7 = v32;
    v8 = v33;
  }
  v17 = *a1 & 0xF000FFFF;
  if ( v17 > 4096 )
  {
    if ( v17 != 0x10000000 )
      return (unsigned int)-1073741811;
    v22 = L"(array_contains)";
  }
  else if ( v17 == 4096 )
  {
    v22 = L"(list_contains)";
  }
  else if ( v17 > 6 )
  {
    v23 = v17 - 7;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 != 1 )
              return (unsigned int)-1073741811;
            v22 = L"(contains)";
          }
          else
          {
            v22 = L"(ends_with)";
          }
        }
        else
        {
          v22 = L"(begins_with)";
        }
      }
      else
      {
        v22 = L"(|)";
      }
    }
    else
    {
      v22 = L"(&)";
    }
  }
  else if ( v17 == 6 )
  {
    v22 = L"(<=)";
  }
  else
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 != 1 )
              return (unsigned int)-1073741811;
            v22 = L"(>=)";
          }
          else
          {
            v22 = L"(<)";
          }
        }
        else
        {
          v22 = L"(>)";
        }
      }
      else
      {
        v22 = L"(==)";
      }
    }
    else
    {
      v22 = L"(Exists)";
    }
  }
  v27 = -1LL;
  do
    ++v27;
  while ( v22[v27] );
  v28 = v16 + 2 * v27;
  if ( v28 <= a2 )
  {
    v9 = sub_1402E04F4(v8, v7, v22, &v33, &v32, 1024);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v7 = v32;
    v8 = v33;
  }
  v9 = sub_140A30DE4((__int64)(a1 + 2), v7, v8, &v34);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -1073741789 )
  {
    v9 = 0;
    v29 = v34 + v28;
    v30 = v34 - 2LL;
    if ( v7 >= v30 )
    {
      v7 += 2LL - v34;
      v8 += v30 >> 1;
    }
    if ( v29 > a2 || (v9 = sub_1402E04F4(v8, v7, (const WCHAR *)qword_140876C60, &v33, &v32, 1024), v9 >= 0) )
    {
      if ( v35 )
        *v35 = v29;
      if ( v29 > a2 )
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v9;
}
