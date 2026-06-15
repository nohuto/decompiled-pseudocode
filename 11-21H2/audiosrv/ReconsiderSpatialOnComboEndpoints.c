/*
 * XREFs of ReconsiderSpatialOnComboEndpoints @ 0x1800537D8
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800535CC (-OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_ab2348b23fbd360fe8da18a3127aa624__void_::_Do_call @ 0x18005DF50 (std--_Func_impl_no_alloc__lambda_ab2348b23fbd360fe8da18a3127aa624__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     EnableSpatialOnSpeakerEndpoint @ 0x180053958 (EnableSpatialOnSpeakerEndpoint.c)
 *     SearchForHeadphones @ 0x180053C20 (SearchForHeadphones.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     DisableSpatialOnInternalSpeakers @ 0x18014EAD0 (DisableSpatialOnInternalSpeakers.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ReconsiderSpatialOnComboEndpoints(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  int v7; // edi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // r9
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-30h]
  int v14[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v18; // [rsp+88h] [rbp+38h] BYREF

  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 24LL))(
         g_DeviceEnumerator,
         0LL,
         15LL,
         &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x109,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v6,
      v13);
  }
  else
  {
    if ( a2 == 3 )
    {
      DisableSpatialOnInternalSpeakers(a1, v15);
      goto LABEL_8;
    }
    *(_QWORD *)v14 = 0LL;
    v7 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
           g_pEndpointCharacteristicsCache,
           a3,
           1LL);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
      v16 = v8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = SearchForHeadphones(v15, &v18);
      v7 = v9;
      if ( v9 < 0 )
      {
        v12 = 284LL;
      }
      else if ( v18 )
      {
        v9 = EnableSpatialOnSpeakerEndpoint(a1, v8, L"HP", 0LL);
        v7 = v9;
        if ( v9 >= 0 )
          goto LABEL_7;
        v12 = 288LL;
      }
      else
      {
        LOBYTE(v10) = 1;
        v9 = EnableSpatialOnSpeakerEndpoint(a1, v8, L"No-HP", v10);
        v7 = v9;
        if ( v9 >= 0 )
        {
LABEL_7:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_8:
          v7 = 0;
          goto LABEL_9;
        }
        v12 = 293LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)v9,
        (int)v14);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v14);
  }
LABEL_9:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)v7;
}
