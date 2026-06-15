/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x18003D7B4
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18003C4AC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find(char *a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  char *v3; // r8
  unsigned __int64 v4; // rcx
  char *v5; // rsi
  char *i; // rcx
  char *v7; // r10
  __int64 v8; // r9
  char *v9; // rcx
  unsigned __int16 v10; // r9
  unsigned __int64 v11; // r11
  const wchar_t *v12; // r10
  bool v13; // cc
  wchar_t v14; // r9

  v1 = -1LL;
  result = 0LL;
  v3 = a1;
  do
    ++v1;
  while ( aP[v1] );
  v4 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(char **)v3;
  if ( v1 <= v4 )
  {
    if ( !v1 )
      return result;
    v5 = &v3[2 * (v4 - v1) + 2];
    for ( i = v3; ; i = v9 + 2 )
    {
      v7 = 0LL;
      v8 = (v5 - i) >> 1;
      if ( v8 )
      {
        while ( *(_WORD *)i != 95 )
        {
          if ( v8 == 1 )
            goto LABEL_14;
          --v8;
          i += 2;
        }
        v7 = i;
      }
LABEL_14:
      v9 = v7;
      if ( !v7 )
        break;
      v10 = *(_WORD *)v7;
      v11 = v1;
      v12 = L"_p";
      if ( v10 >= 0x5Fu )
      {
        v13 = v10 == 95;
        while ( v13 )
        {
          if ( v11 == 1 )
            return (v9 - v3) >> 1;
          ++v12;
          --v11;
          v14 = *(const wchar_t *)((char *)v12 + v9 - (char *)L"_p");
          v13 = v14 <= *v12;
          if ( v14 < *v12 )
            break;
        }
      }
    }
  }
  return -1LL;
}
