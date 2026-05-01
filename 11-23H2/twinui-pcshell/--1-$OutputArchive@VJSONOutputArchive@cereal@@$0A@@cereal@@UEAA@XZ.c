/*
 * XREFs of ??1?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x1804168E0
 * Callers:
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$0 @ 0x1802B9FFC (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$0.c)
 *     ??_E?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z @ 0x180417980 (--_E-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::~OutputArchive<cereal::JSONOutputArchive,0>(
        __int64 a1)
{
  void *v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  void *v6; // rcx
  __int64 v7; // rdx
  _QWORD **v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  void *v11; // rcx
  __int64 v12; // rdx
  _QWORD **v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rbx
  void *v16; // rcx
  __int64 v17; // rdx
  _QWORD **v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rsi
  unsigned __int64 v24; // [rsp+50h] [rbp+30h] BYREF
  void *v25; // [rsp+58h] [rbp+38h] BYREF

  v2 = *(void **)(a1 + 272);
  v25 = v2;
  v24 = (*(_QWORD *)(a1 + 280) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v24 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v25, &v24);
    v2 = v25;
  }
  operator delete(v2);
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  v3 = *(_QWORD ***)(a1 + 256);
  *v3[1] = 0LL;
  v4 = *v3;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v4, 0x18uLL);
      v4 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 256), 0x18uLL);
  v6 = *(void **)(a1 + 200);
  v7 = *(_QWORD *)(a1 + 208) - (_QWORD)v6;
  v25 = v6;
  v24 = v7 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v7 & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v25, &v24);
    v6 = v25;
  }
  operator delete(v6);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  v8 = *(_QWORD ***)(a1 + 184);
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
  std::_Deallocate<16,0>(*(void **)(a1 + 184), 0x20uLL);
  v11 = *(void **)(a1 + 128);
  v12 = *(_QWORD *)(a1 + 136) - (_QWORD)v11;
  v25 = v11;
  v24 = v12 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v12 & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v25, &v24);
    v11 = v25;
  }
  operator delete(v11);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v13 = *(_QWORD ***)(a1 + 112);
  *v13[1] = 0LL;
  v14 = *v13;
  if ( v14 )
  {
    do
    {
      v15 = (_QWORD *)*v14;
      std::_Deallocate<16,0>(v14, 0x20uLL);
      v14 = v15;
    }
    while ( v15 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 112), 0x20uLL);
  v16 = *(void **)(a1 + 64);
  v17 = *(_QWORD *)(a1 + 72) - (_QWORD)v16;
  v25 = v16;
  v24 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v17 & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v25, &v24);
    v16 = v25;
  }
  operator delete(v16);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v18 = *(_QWORD ***)(a1 + 48);
  *v18[1] = 0LL;
  v19 = *v18;
  if ( v19 )
  {
    do
    {
      v20 = (_QWORD *)*v19;
      std::_Deallocate<16,0>(v19, 0x28uLL);
      v19 = v20;
    }
    while ( v20 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 48), 0x28uLL);
  v22 = *(_QWORD *)(a1 + 8);
  if ( v22 )
  {
    v23 = *(_QWORD *)(a1 + 16);
    while ( v22 != v23 )
    {
      std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
        v22,
        v21);
      v22 += 64LL;
    }
    std::_Deallocate<16,0>(*(void **)(a1 + 8), (*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 8)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
