/*
 * XREFs of ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014EBA0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5c58fd4b847bc5da4c1ca9421a6d5c12__long_CEndpointCharacteristics___::_Do_call @ 0x18010E600 (std--_Func_impl_no_alloc__lambda_5c58fd4b847bc5da4c1ca9421a6d5c12__long_CEndpointCh_ea_18010E600.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180023BF4 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x18004AA0C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_5633c08dc3eb87d401f8469e9bff1b6c___ @ 0x18014A2FC (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--share_ea_18014A2FC.c)
 *     _lambda_133ffca213661c0098953024967f868b_::operator() @ 0x18014A938 (_lambda_133ffca213661c0098953024967f868b_--operator().c)
 *     ?ClearEffectPackDeviceIdFromFxPropStore@CEndpointCharacteristics@@AEAAXPEAU_GUID@@I@Z @ 0x18014B388 (-ClearEffectPackDeviceIdFromFxPropStore@CEndpointCharacteristics@@AEAAXPEAU_GUID@@I@Z.c)
 *     ?ClearEffectPackPropertyKeyIfApplicable@CEndpointCharacteristics@@AEAAXU_GUID@@AEBU_tagpropertykey@@@Z @ 0x18014B514 (-ClearEffectPackPropertyKeyIfApplicable@CEndpointCharacteristics@@AEAAXU_GUID@@AEBU_tagpropertyk.c)
 *     ?DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ @ 0x18014BDA8 (-DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ.c)
 *     ?EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ @ 0x18014BE2C (-EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CEndpointCharacteristics::RemoveEffectPack(CEndpointCharacteristics *this, struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  char *v5; // r15
  __int64 v6; // r14
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // esi
  unsigned int v12; // ebx
  unsigned int v13; // [rsp+20h] [rbp-98h] BYREF
  __int64 v14; // [rsp+28h] [rbp-90h] BYREF
  std::_Ref_count_base *v15; // [rsp+30h] [rbp-88h]
  _OWORD v16[2]; // [rsp+38h] [rbp-80h] BYREF
  char v17; // [rsp+58h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+60h] [rbp-58h]
  struct _GUID v19; // [rsp+70h] [rbp-48h] BYREF
  __int128 v20; // [rsp+80h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v13 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 288);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  v18 = v4;
  v5 = (char *)this + 352;
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v14, (_QWORD *)this + 44);
  *(_QWORD *)&v19.Data1 = this;
  *(_QWORD *)v19.Data4 = a2;
  *(_QWORD *)&v20 = &v14;
  *((_QWORD *)&v20 + 1) = &v13;
  v16[0] = v19;
  v16[1] = v20;
  v17 = 1;
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_5633c08dc3eb87d401f8469e9bff1b6c___(
    (__int64 **)&v19,
    *((__int64 **)this + 41),
    *((__int64 **)this + 42),
    a2);
  v6 = *(_QWORD *)&v19.Data1;
  if ( *(_QWORD *)&v19.Data1 != *((_QWORD *)this + 42) )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(*(__int64 *)&v19.Data1, *((_QWORD *)this + 42));
    *((_QWORD *)this + 42) = v6;
  }
  if ( *(_QWORD *)v5 )
  {
    v19 = *(struct _GUID *)*(_QWORD *)(*(_QWORD *)v5 + 1272LL);
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&v19.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&v19.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)v19.Data4;
    if ( !v7 )
    {
      v19 = *(struct _GUID *)*(_QWORD *)(v14 + 1272);
      CEndpointCharacteristics::ClearEffectPackPropertyKeyIfApplicable(
        this,
        &v19,
        &PKEY_AudioEndpoint_UserSelectedEffectPack);
      v19 = *(struct _GUID *)*(_QWORD *)(v14 + 1272);
      CEndpointCharacteristics::ClearEffectPackPropertyKeyIfApplicable(
        this,
        &v19,
        &PKEY_AudioEndpoint_LastSetEffectPack);
      v8 = CEndpointCharacteristics::DetermineCurrentEffectPack(this);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x575,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v8);
      v9 = CEndpointCharacteristics::EnsureRwFxPropertyStoreExists(this);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x579,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v9);
        v17 = 0;
        lambda_133ffca213661c0098953024967f868b_::operator()((__int64)v16);
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
        if ( v4 )
          LeaveCriticalSection(v4);
        return v10;
      }
      CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
        this,
        *(struct _GUID **)(*(_QWORD *)(v14 + 1272) + 1320LL),
        *(_DWORD *)(*(_QWORD *)(v14 + 1272) + 1312LL));
      CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
        this,
        *(struct _GUID **)(*(_QWORD *)(v14 + 1272) + 1352LL),
        *(_DWORD *)(*(_QWORD *)(v14 + 1272) + 1344LL));
      CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
        this,
        *(struct _GUID **)(*(_QWORD *)(v14 + 1272) + 1384LL),
        *(_DWORD *)(*(_QWORD *)(v14 + 1272) + 1376LL));
      CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
        this,
        *(struct _GUID **)(*(_QWORD *)(v14 + 1272) + 1416LL),
        *(_DWORD *)(*(_QWORD *)(v14 + 1272) + 1408LL));
      CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
        this,
        *(struct _GUID **)(*(_QWORD *)(v14 + 1272) + 1448LL),
        *(_DWORD *)(*(_QWORD *)(v14 + 1272) + 1440LL));
      CEndpointCharacteristics::DisconnectStreamsOnEndpoint(this);
    }
  }
  v12 = v13;
  v17 = 0;
  lambda_133ffca213661c0098953024967f868b_::operator()((__int64)v16);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v12;
}
