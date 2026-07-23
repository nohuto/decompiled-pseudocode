/*
 * XREFs of sub_140B18C50 @ 0x140B18C50
 * Callers:
 *     sub_140B18928 @ 0x140B18928 (sub_140B18928.c)
 * Callees:
 *     isspace @ 0x1403E1B20 (isspace.c)
 *     strchr @ 0x1403E2AA0 (strchr.c)
 *     strncpy_s @ 0x1403E7340 (strncpy_s.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140B18C50(_BYTE **a1, unsigned __int64 a2, __int64 a3)
{
  _BYTE *i; // rdi
  int v7; // eax
  const char *v8; // r15
  const char *v9; // rbx
  _BYTE *v10; // r13
  __int64 v11; // rbx
  char *Pool2; // rax
  char *v13; // rbp
  _BYTE *v14; // rbx
  _BYTE *v15; // rdi
  _BYTE *j; // rbx
  int v17; // ecx

  *(_BYTE *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  while ( 1 )
  {
    for ( i = *a1; (unsigned __int64)i < a2 && *i != 10 && isspace((unsigned __int8)*i); ++i )
      ;
    if ( (unsigned __int64)i >= a2 )
      goto LABEL_56;
    if ( *i == 59 || *i == 35 )
    {
      do
      {
        if ( *i == 10 )
          break;
        ++i;
      }
      while ( (unsigned __int64)i < a2 );
    }
    if ( (unsigned __int64)i >= a2 || (v7 = (char)*i, *i == 26) )
    {
LABEL_56:
      *(_DWORD *)a3 = 0;
      *(_QWORD *)(a3 + 8) = 0LL;
      goto LABEL_27;
    }
    switch ( v7 )
    {
      case 10:
        ++i;
        *(_DWORD *)a3 = 1;
LABEL_27:
        *a1 = i;
        return;
      case 34:
        v15 = i + 1;
        for ( j = v15; (unsigned __int64)j < a2; ++j )
        {
          if ( strchr(&asc_140B57878[6], (char)*j) )
            break;
        }
        if ( (unsigned __int64)j < a2 && *j == 34 )
        {
          *j = 0;
          v17 = 4;
          ++j;
          *(_QWORD *)(a3 + 8) = v15;
        }
        else
        {
          v17 = 7;
        }
        *(_DWORD *)a3 = v17;
        *a1 = j;
        return;
      case 44:
        ++i;
        *(_DWORD *)a3 = 6;
        goto LABEL_27;
      case 61:
        ++i;
        *(_DWORD *)a3 = 5;
        goto LABEL_27;
      case 91:
        ++i;
        *(_DWORD *)a3 = 2;
        goto LABEL_27;
    }
    if ( v7 != 92 )
      break;
    v14 = ++i;
    if ( (unsigned __int64)i < a2 )
    {
      do
      {
        if ( *v14 == 10 )
          break;
        if ( !isspace((unsigned __int8)*v14) )
          break;
        ++v14;
      }
      while ( (unsigned __int64)v14 < a2 );
    }
    if ( (*v14 == 59 || *v14 == 35) && (++i, v14 = i, (unsigned __int64)i < a2) )
    {
      while ( *v14 != 10 )
      {
        if ( (unsigned __int64)++v14 >= a2 )
          goto LABEL_39;
      }
    }
    else
    {
LABEL_39:
      if ( (unsigned __int64)v14 >= a2 )
      {
        *(_DWORD *)a3 = 7;
        goto LABEL_27;
      }
      if ( *v14 != 10 )
        goto LABEL_19;
    }
    *a1 = v14 + 1;
  }
  if ( v7 == 93 )
  {
    ++i;
    *(_DWORD *)a3 = 3;
    goto LABEL_27;
  }
LABEL_19:
  v8 = i;
  v9 = i;
  if ( (unsigned __int64)i < a2 )
  {
    v10 = i;
    do
    {
      v9 = v10;
      if ( strchr(asc_140B57878, (char)*i) )
        break;
      i = v10 + 1;
      v10 = i;
      v9 = i;
    }
    while ( (unsigned __int64)i < a2 );
    if ( v9 != v8 )
    {
      v11 = (unsigned int)((_DWORD)i - (_DWORD)v8);
      if ( (int)v11 + 1 >= (unsigned int)v11
        && (Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)(v11 + 1), 0x69704D43u), (v13 = Pool2) != 0LL) )
      {
        strncpy_s(Pool2, (unsigned int)(v11 + 1), v8, (unsigned int)v11);
        v13[v11] = 0;
        *(_DWORD *)a3 = 4;
        *(_QWORD *)(a3 + 8) = v13;
        *(_BYTE *)(a3 + 16) = 1;
      }
      else
      {
        *(_DWORD *)a3 = 8;
      }
      goto LABEL_27;
    }
  }
  *(_DWORD *)a3 = 7;
  *a1 = v9 + 1;
}
