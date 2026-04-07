/*
 * XREFs of ??1?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x1800F0ECC
 * Callers:
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$0 @ 0x1800F0E80 (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$0.c)
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x1800F167C (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     ??_E?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z @ 0x1800F17A0 (--_E-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18006BA24 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::~OutputArchive<cereal::JSONOutputArchive,0>(
        __int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD **v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  _QWORD **v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  _QWORD **v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rsi

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
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x18uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 256), 0x18uLL);
  std::_Deallocate<16,0>(*(void **)(a1 + 200), (*(_QWORD *)(a1 + 208) - *(_QWORD *)(a1 + 200)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  v5 = *(_QWORD ***)(a1 + 184);
  *v5[1] = 0LL;
  v6 = *v5;
  if ( v6 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      std::_Deallocate<16,0>(v6, 0x20uLL);
      v6 = v7;
    }
    while ( v7 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 184), 0x20uLL);
  std::_Deallocate<16,0>(*(void **)(a1 + 128), (*(_QWORD *)(a1 + 136) - *(_QWORD *)(a1 + 128)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v8 = *(_QWORD ***)(a1 + 112);
  *v8[1] = 0LL;
  v9 = *v8;
  if ( v9 )
  {
    do
    {
      v10 = (_QWORD *)*v9;
      std::_Deallocate<16,0>(v9, 0x20uLL);
      v9 = v10;
    }
    while ( v10 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 112), 0x20uLL);
  std::_Deallocate<16,0>(*(void **)(a1 + 64), (*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v11 = *(_QWORD ***)(a1 + 48);
  *v11[1] = 0LL;
  v12 = *v11;
  if ( v12 )
  {
    do
    {
      v13 = (_QWORD *)*v12;
      std::_Deallocate<16,0>(v12, 0x28uLL);
      v12 = v13;
    }
    while ( v13 );
  }
  result = std::_Deallocate<16,0>(*(void **)(a1 + 48), 0x28uLL);
  v16 = *(_QWORD *)(a1 + 8);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 16);
    while ( v16 != v17 )
    {
      std::_Func_class<void,>::_Tidy(v16, v15);
      v16 += 64LL;
    }
    result = std::_Deallocate<16,0>(
               *(void **)(a1 + 8),
               (*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 8)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
