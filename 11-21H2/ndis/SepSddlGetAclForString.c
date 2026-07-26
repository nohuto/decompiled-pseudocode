/*
 * XREFs of SepSddlGetAclForString @ 0x1C0136854
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1C0136768 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1C0136668 (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1C0136BD8 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C0136CB0 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x1C0136D4C (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *Str1, _QWORD *a2, wchar_t **a3)
{
  wchar_t *v5; // rbx
  unsigned int SidForString; // edi
  unsigned int v7; // esi
  wchar_t *v8; // rax
  __int64 v10; // rax
  wchar_t *v11; // rax
  wchar_t *v12; // rcx
  int i; // r8d
  unsigned int v14; // edx
  _QWORD *PoolWithTag; // rax
  __int16 v16; // si
  unsigned int v17; // r12d
  _WORD *v18; // rax
  _WORD *v19; // r15
  int v20; // r13d
  unsigned int v21; // r15d
  int v22; // r12d
  bool v23; // zf
  wchar_t *j; // rbx
  wchar_t v25; // ax
  wchar_t *v26; // rax
  wchar_t *v27; // rcx
  __int64 v28; // rdx
  _WORD *v29; // rbx
  _WORD *v30; // rax
  _WORD *v31; // [rsp+A0h] [rbp+48h] BYREF
  int v32; // [rsp+A8h] [rbp+50h]
  int v33; // [rsp+B0h] [rbp+58h]
  wchar_t *v34; // [rsp+B8h] [rbp+60h] BYREF

  *a2 = 0LL;
  v5 = Str1;
  v32 = 0;
  SidForString = 0;
  v34 = 0LL;
  v7 = 0;
  v8 = wcschr(Str1, 0x3Au);
  *a3 = v8;
  if ( v8 == v5 )
    return 3221225485LL;
  if ( v8 )
  {
    v11 = v8 - 1;
  }
  else
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v5[v10] );
    v11 = &v5[v10];
  }
  *a3 = v11;
  v12 = v5;
  for ( i = 0; v12 < v11; ++v12 )
  {
    if ( *v12 == 59 )
    {
      ++v7;
    }
    else if ( *v12 != 32 )
    {
      i = 1;
    }
  }
  v14 = v7 / 5;
  LODWORD(v31) = v7 / 5;
  if ( v7 != 5 * (v7 / 5) || !v7 && i )
    return (unsigned int)-1073741811;
  if ( !v14 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 524290LL;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v16 = 8;
  v17 = 48 * v14 + 8;
  if ( v17 > 0xFFFF )
    v17 = 0xFFFF;
  v18 = ExAllocatePoolWithTag(PagedPool, v17, 0x6C416553u);
  *a2 = v18;
  v19 = v18;
  if ( !v18 )
    return (unsigned int)-1073741670;
  v33 = 8;
  memset(v18, 0, v17);
  *v19 = 2;
  v19[1] = v17;
  v20 = 0;
  *((_DWORD *)v19 + 1) = 0;
  v21 = (unsigned int)v31;
  if ( (_DWORD)v31 )
  {
    while ( 1 )
    {
      v22 = 0;
      LODWORD(v31) = 0;
      while ( *v5 == 32 )
        ++v5;
      if ( *v5 == 40 )
      {
        v23 = v5[1] == 32;
        ++v5;
        if ( v23 )
        {
          do
            ++v5;
          while ( *v5 == 32 );
        }
      }
      if ( _wcsnicmp(v5, L"A", 1uLL) )
        break;
      for ( j = v5 + 2; *j == 32; ++j )
        ;
      if ( *j != 59 )
        break;
      do
        v25 = *++j;
      while ( *j == 32 );
      for ( ; v25 != 59; v25 = *v26 )
      {
        if ( v25 == 32 )
        {
          do
            ++j;
          while ( *j == 32 );
        }
        if ( (unsigned int)SepSddlLookupAccessMaskInTable(j) )
        {
          v22 |= v32;
          v26 = v34;
          LODWORD(v31) = v22;
        }
        else
        {
          SepSddlParseWideStringUlong(j, &v34, &v31);
          v26 = v34;
          if ( v34 == j )
            goto LABEL_67;
          v22 = (int)v31;
        }
        j = v26;
      }
      v27 = j + 1;
      v28 = 2LL;
      do
      {
        while ( *v27 == 32 )
          ++v27;
        if ( *v27 != 59 )
          SidForString = -1073741811;
        ++v27;
        --v28;
      }
      while ( v28 );
      if ( SidForString )
        goto LABEL_68;
      while ( *v27 == 32 )
        ++v27;
      v31 = 0LL;
      SidForString = SepSddlGetSidForString(v27);
      if ( SidForString )
      {
LABEL_64:
        v16 = v33;
        goto LABEL_65;
      }
      v29 = v31;
      if ( !v31 )
        goto LABEL_57;
      while ( *v29 == 32 )
        ++v29;
      if ( *v29 != 41 )
      {
LABEL_57:
        SidForString = -1073741705;
        goto LABEL_68;
      }
      v5 = v29 + 1;
      if ( *v5 == 40 )
        ++v5;
      if ( ++v20 >= v21 )
        goto LABEL_64;
    }
LABEL_67:
    SidForString = -1073741811;
LABEL_68:
    v30 = (_WORD *)*a2;
  }
  else
  {
LABEL_65:
    v30 = (_WORD *)*a2;
    if ( !SidForString )
    {
      v30[1] = v16;
      return SidForString;
    }
  }
  ExFreePoolWithTag(v30, 0);
  *a2 = 0LL;
  return SidForString;
}
