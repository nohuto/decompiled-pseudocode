/*
 * XREFs of ??1?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x180043484
 * Callers:
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x180043324 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$0 @ 0x1800659CC (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$0.c)
 *     ??_E?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z @ 0x1800F3760 (--_E-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18009BCFC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::~OutputArchive<cereal::JSONOutputArchive,0>(
        __int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rcx
  _QWORD **v4; // rcx
  _QWORD *v5; // rcx
  _QWORD **v6; // rcx
  _QWORD *v7; // rcx
  _QWORD **v8; // rcx
  _QWORD *v9; // rcx
  __int64 result; // rax
  char *v11; // rbx
  _QWORD *v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // rbx
  char *v16; // rsi

  std::_Deallocate<16,0>(*(void **)(a1 + 272), (*(_QWORD *)(a1 + 280) - *(_QWORD *)(a1 + 272)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  v2 = *(_QWORD ***)(a1 + 256);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( v3 )
  {
    do
    {
      v12 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x18uLL);
      v3 = v12;
    }
    while ( v12 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 256), 0x18uLL);
  std::_Deallocate<16,0>(*(void **)(a1 + 200), (*(_QWORD *)(a1 + 208) - *(_QWORD *)(a1 + 200)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  v4 = *(_QWORD ***)(a1 + 184);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( v5 )
  {
    do
    {
      v13 = (_QWORD *)*v5;
      std::_Deallocate<16,0>(v5, 0x20uLL);
      v5 = v13;
    }
    while ( v13 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 184), 0x20uLL);
  std::_Deallocate<16,0>(*(void **)(a1 + 128), (*(_QWORD *)(a1 + 136) - *(_QWORD *)(a1 + 128)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v6 = *(_QWORD ***)(a1 + 112);
  *v6[1] = 0LL;
  v7 = *v6;
  if ( v7 )
  {
    do
    {
      v14 = (_QWORD *)*v7;
      std::_Deallocate<16,0>(v7, 0x20uLL);
      v7 = v14;
    }
    while ( v14 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 112), 0x20uLL);
  std::_Deallocate<16,0>(*(void **)(a1 + 64), (*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v8 = *(_QWORD ***)(a1 + 48);
  *v8[1] = 0LL;
  v9 = *v8;
  if ( v9 )
  {
    do
    {
      v15 = (_QWORD *)*v9;
      std::_Deallocate<16,0>(v9, 0x28uLL);
      v9 = v15;
    }
    while ( v15 );
  }
  result = std::_Deallocate<16,0>(*(void **)(a1 + 48), 0x28uLL);
  v11 = *(char **)(a1 + 8);
  if ( v11 )
  {
    v16 = *(char **)(a1 + 16);
    if ( v11 != v16 )
    {
      do
      {
        std::_Func_class<void,>::_Tidy(v11);
        v11 += 64;
      }
      while ( v11 != v16 );
      v11 = *(char **)(a1 + 8);
    }
    result = std::_Deallocate<16,0>(v11, (*(_QWORD *)(a1 + 24) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
