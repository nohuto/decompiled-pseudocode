/*
 * XREFs of ??1?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x18018D488
 * Callers:
 *     ??1JSONInputArchive@cereal@@UEAA@XZ @ 0x18018D35C (--1JSONInputArchive@cereal@@UEAA@XZ.c)
 *     _cereal::JSONInputArchive::JSONInputArchive_::_1_::dtor$0 @ 0x1802C4582 (_cereal--JSONInputArchive--JSONInputArchive_--_1_--dtor$0.c)
 *     ??_G?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z @ 0x180417940 (--_G-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::~InputArchive<cereal::JSONInputArchive,0>(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rcx
  _QWORD **v4; // rcx
  _QWORD *v5; // rbx
  _QWORD **v6; // rcx
  _QWORD *v7; // rbx
  void *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  _QWORD **v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rsi
  _QWORD *v16; // rbx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rsi
  void *v19; // rcx
  unsigned __int64 v20; // rdx
  std::_Ref_count_base *v21; // rcx
  _QWORD *v22; // rsi
  _QWORD *v23; // rbx
  unsigned __int64 v24; // [rsp+50h] [rbp+30h] BYREF
  void *v25; // [rsp+58h] [rbp+38h] BYREF

  std::_Deallocate<16,0>(*(void **)(a1 + 256), (*(_QWORD *)(a1 + 264) - *(_QWORD *)(a1 + 256)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  v2 = *(_QWORD ***)(a1 + 240);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( v3 )
  {
    do
    {
      v16 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v16;
    }
    while ( v16 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 240), 0x20uLL);
  std::_Deallocate<16,0>(*(void **)(a1 + 192), (*(_QWORD *)(a1 + 200) - *(_QWORD *)(a1 + 192)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v4 = *(_QWORD ***)(a1 + 176);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( *v4 )
  {
    do
    {
      v17 = v5[6];
      v18 = (_QWORD *)*v5;
      if ( v17 >= 0x10 )
      {
        v19 = (void *)v5[3];
        v20 = v17 + 1;
        v24 = v20;
        v25 = v19;
        if ( v20 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v25, &v24);
          v20 = v24;
          v19 = v25;
        }
        operator delete(v19, v20);
      }
      v5[5] = 0LL;
      v5[6] = 15LL;
      *((_BYTE *)v5 + 24) = 0;
      std::_Deallocate<16,0>(v5, 0x38uLL);
      v5 = v18;
    }
    while ( v18 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 176), 0x38uLL);
  std::_Deallocate<16,0>(*(void **)(a1 + 128), (*(_QWORD *)(a1 + 136) - *(_QWORD *)(a1 + 128)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v6 = *(_QWORD ***)(a1 + 112);
  *v6[1] = 0LL;
  v7 = *v6;
  if ( *v6 )
  {
    do
    {
      v21 = (std::_Ref_count_base *)v7[4];
      v22 = (_QWORD *)*v7;
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      std::_Deallocate<16,0>(v7, 0x28uLL);
      v7 = v22;
    }
    while ( v22 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 112), 0x28uLL);
  v8 = *(void **)(a1 + 64);
  v9 = *(_QWORD *)(a1 + 72) - (_QWORD)v8;
  v25 = v8;
  v10 = v9 & 0xFFFFFFFFFFFFFFF8uLL;
  v24 = v10;
  if ( v10 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v25, &v24);
    v10 = v24;
    v8 = v25;
  }
  operator delete(v8, v10);
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
      v23 = (_QWORD *)*v12;
      std::_Deallocate<16,0>(v12, 0x28uLL);
      v12 = v23;
    }
    while ( v23 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 48), 0x28uLL);
  v14 = *(_QWORD *)(a1 + 8);
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 16);
    while ( v14 != v15 )
    {
      std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
        v14,
        v13);
      v14 += 64LL;
    }
    std::_Deallocate<16,0>(*(void **)(a1 + 8), (*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 8)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
