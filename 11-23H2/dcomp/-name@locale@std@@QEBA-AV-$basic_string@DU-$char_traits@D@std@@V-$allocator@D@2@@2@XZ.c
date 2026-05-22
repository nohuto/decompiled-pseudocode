/*
 * XREFs of ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18007D778
 * Callers:
 *     ?_Getcat@?$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18007D650 (-_Getcat@-$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ??$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@Z @ 0x18014E8B0 (--$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@-$basic_string@DU-$char_trai.c)
 */

_OWORD *__fastcall std::locale::name(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rcx
  _BYTE *v4; // rax
  __int64 v5; // r8
  size_t v6; // rbx
  _QWORD *v7; // rax
  int v8; // ebx
  int v9; // ecx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _QWORD v13[2]; // [rsp+28h] [rbp-48h] BYREF
  size_t v14; // [rsp+38h] [rbp-38h]
  unsigned __int64 v15; // [rsp+40h] [rbp-30h]
  _QWORD v16[3]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = (_BYTE *)std::_Yarn<char>::c_str(v2 + 40);
    v13[0] = 0LL;
    v14 = 0LL;
    v6 = -1LL;
    v15 = 15LL;
    do
      ++v6;
    while ( v4[v6] );
    if ( v6 > 0xF )
    {
      std::string::_Reallocate_for<_lambda_66f57f934f28d61049862f64df852ff0_,char const *>(v13, v6, v5, v4);
    }
    else
    {
      v14 = v6;
      memmove_0(v13, v4, v6);
      *((_BYTE *)v13 + v6) = 0;
    }
    v7 = v13;
    v8 = 1;
    v9 = 0;
  }
  else
  {
    v16[0] = 0LL;
    v7 = v16;
    v16[2] = 0LL;
    v8 = 0;
    v17 = 15LL;
    v9 = 2;
  }
  v10 = *(_OWORD *)v7;
  v11 = *((_OWORD *)v7 + 1);
  v7[2] = 0LL;
  v7[3] = 15LL;
  *(_BYTE *)v7 = 0;
  *a2 = v10;
  a2[1] = v11;
  if ( v9 && v17 >= 0x10 )
    std::_Deallocate<16,0>(v16[0], v17 + 1);
  if ( v8 && v15 >= 0x10 )
    std::_Deallocate<16,0>(v13[0], v15 + 1);
  return a2;
}
