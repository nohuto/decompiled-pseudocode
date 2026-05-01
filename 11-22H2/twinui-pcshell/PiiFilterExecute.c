/*
 * XREFs of PiiFilterExecute @ 0x1807384B4
 * Callers:
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x1803E01B0 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 * Callees:
 *     _wcslwr @ 0x1801C7440 (_wcslwr.c)
 *     ?PiiFilterExecute_Ge@@YAJPEAG_K1PEBG@Z @ 0x180284D78 (-PiiFilterExecute_Ge@@YAJPEAG_K1PEBG@Z.c)
 *     Feature_AslPiiFilter_EmailAddresses__private_IsEnabledDeviceUsage @ 0x180284F90 (Feature_AslPiiFilter_EmailAddresses__private_IsEnabledDeviceUsage.c)
 *     ?GetValue@RtlNameValueArray@@QEBAPEBG_K@Z @ 0x180738380 (-GetValue@RtlNameValueArray@@QEBAPEBG_K@Z.c)
 *     ?ReplaceStringStartInPlace@@YAJPEAG_KPEBG1@Z @ 0x1807383C8 (-ReplaceStringStartInPlace@@YAJPEAG_KPEBG1@Z.c)
 *     AslPathClean @ 0x180738B7C (AslPathClean.c)
 */

__int64 __fastcall PiiFilterExecute(unsigned __int16 *a1, __int64 a2, unsigned __int64 *a3, unsigned __int16 *a4)
{
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // r14d
  unsigned __int64 v11; // rbp
  const wchar_t **v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  const wchar_t *v15; // rdx
  size_t v16; // rdi
  const unsigned __int16 *Value; // rax
  wchar_t *i; // rax
  wchar_t *v19; // rdi
  wchar_t *v20; // rax
  char *v21; // rdi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned int v24; // r14d
  unsigned __int64 v25; // rdi
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rbp
  const unsigned __int16 *v30; // rdi
  const wchar_t *v31; // r9
  unsigned __int16 *v32; // rax
  unsigned __int16 v33; // cx
  int v34; // edx

  if ( (unsigned int)Feature_AslPiiFilter_EmailAddresses__private_IsEnabledDeviceUsage() )
    return PiiFilterExecute_Ge(a1, v7, a3, a4);
  result = AslPathClean(a4, a1);
  if ( (int)result < 0 )
  {
LABEL_45:
    *a1 = 0;
    return result;
  }
  wcslwr(a1);
  v9 = a3[2];
  v10 = 0;
  if ( v9 )
  {
    v11 = 0LL;
    do
    {
      v12 = 0LL;
      if ( v11 < v9 )
      {
        v13 = a3[1] * v11;
        if ( !is_mul_ok(a3[1], v11) || (v14 = a3[5], v12 = (const wchar_t **)(v14 + v13), v14 + v13 < v14) )
          v12 = 0LL;
      }
      v15 = *v12;
      v16 = -1LL;
      do
        ++v16;
      while ( v15[v16] );
      if ( !wcsncmp(a1, v15, v16) && (a1[v16] == 92 || !a1[v16]) )
      {
        Value = RtlNameValueArray::GetValue((RtlNameValueArray *)a3, v11);
        result = ReplaceStringStartInPlace(a1, 0x104uLL, Value, v16);
        if ( (int)result < 0 )
          goto LABEL_45;
      }
      v9 = a3[2];
      v11 = ++v10;
    }
    while ( v10 < v9 );
  }
  for ( i = wcsstr(a1, L"\\users\\"); i; i = wcsstr(a1, L"\\users\\") )
  {
    v19 = i + 7;
    v20 = wcschr(i + 7, 0x5Cu);
    v21 = (char *)(v19 - 1);
    if ( v20 )
    {
      v22 = (unsigned __int64)((char *)v20 - v21 + 1) >> 1;
      if ( v21 > (char *)v20 )
        v22 = 0LL;
      if ( v22 )
      {
        while ( v22 )
        {
          *(_WORD *)v21 = 120;
          v21 += 2;
          --v22;
        }
      }
    }
    else
    {
      while ( *(_WORD *)v21 )
      {
        *(_WORD *)v21 = 120;
        v21 += 2;
      }
    }
  }
  v23 = a3[8];
  v24 = 0;
  if ( v23 )
  {
    v25 = 0LL;
    do
    {
      v26 = 0LL;
      if ( v25 < v23 )
      {
        v27 = a3[7] * v25;
        if ( !is_mul_ok(a3[7], v25) || (v28 = a3[11], v26 = (_QWORD *)(v28 + v27), v28 + v27 < v28) )
          v26 = 0LL;
      }
      v29 = -1LL;
      do
        ++v29;
      while ( *(_WORD *)(*v26 + 2 * v29) );
      v30 = RtlNameValueArray::GetValue((RtlNameValueArray *)(a3 + 6), v25);
      v32 = wcsstr(a1, v31);
      if ( v32 )
      {
        result = ReplaceStringStartInPlace(v32, 260 - (a1 - v32), v30, v29);
        if ( (int)result < 0 )
          goto LABEL_45;
      }
      v23 = a3[8];
      v25 = ++v24;
    }
    while ( v24 < v23 );
  }
  if ( (unsigned __int16)(*a1 - 97) <= 0x19u && a1[1] == 58 )
  {
    v33 = a1[2];
    v34 = 0;
    while ( v33 )
    {
      a1[v34++] = v33;
      v33 = a1[v34 + 2];
    }
    a1[v34] = 0;
  }
  return 0LL;
}
