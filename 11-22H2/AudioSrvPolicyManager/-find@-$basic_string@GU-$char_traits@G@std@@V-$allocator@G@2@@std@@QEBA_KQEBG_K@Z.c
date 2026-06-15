/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x1800440AC
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180043290 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180008FE0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

__int64 __fastcall std::wstring::find(_QWORD *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // r10
  _QWORD *v3; // r11
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  _WORD *v6; // rcx
  char *v7; // rdi
  _WORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r11

  v1 = -1LL;
  v2 = 0LL;
  v3 = a1;
  do
    ++v1;
  while ( aP[v1] );
  v4 = a1[2];
  if ( a1[3] >= 8uLL )
    v3 = (_QWORD *)*a1;
  if ( v1 > v4 )
    return -1LL;
  v5 = v4 - v1;
  if ( v1 )
  {
    v6 = v3;
    v7 = (char *)v3 + 2 * v5 + 2;
    while ( 1 )
    {
      v8 = v6;
      v9 = v7 - (char *)v6;
      v10 = v2;
      v11 = v9 >> 1;
      if ( v11 )
      {
        while ( *v8 != 95 )
        {
          if ( v11 == 1 )
            goto LABEL_13;
          --v11;
          ++v8;
        }
        v10 = (__int64)v8;
      }
LABEL_13:
      if ( !v10 )
        return -1LL;
      if ( !(unsigned int)std::_WChar_traits<unsigned short>::compare(v10, L"_p", v1) )
        return (v12 - v13) >> 1;
      v6 = (_WORD *)(v12 + 2);
    }
  }
  return v2;
}
