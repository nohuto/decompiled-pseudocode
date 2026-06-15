/*
 * XREFs of ReconsiderSpatialOnComboEndpoints @ 0x18001F818
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18003685C (-OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_ab2348b23fbd360fe8da18a3127aa624__void_::_Do_call @ 0x18004BAE0 (std--_Func_impl_no_alloc__lambda_ab2348b23fbd360fe8da18a3127aa624__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     SearchForHeadphones @ 0x18001FC40 (SearchForHeadphones.c)
 *     EnableSpatialOnSpeakerEndpoint @ 0x180020000 (EnableSpatialOnSpeakerEndpoint.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     DisableSpatialOnInternalSpeakers @ 0x180155E30 (DisableSpatialOnInternalSpeakers.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ReconsiderSpatialOnComboEndpoints(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  __int64 v9; // r9
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  int v14[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v17; // [rsp+88h] [rbp+38h] BYREF

  v15[0] = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64, __int64 *))g_DeviceEnumerator->lpVtbl->EnumAudioEndpoints)(
         g_DeviceEnumerator,
         0LL,
         15LL,
         v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v6,
      v12);
    goto LABEL_9;
  }
  if ( a2 == 3 )
  {
    DisableSpatialOnInternalSpeakers(a1, v15[0]);
    goto LABEL_8;
  }
  *(_QWORD *)v14 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a3,
         1LL);
  if ( v7 < 0 )
  {
LABEL_14:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v14);
    goto LABEL_9;
  }
  v13 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>(*(_QWORD *)v14 + 40LL, &v13);
  v8 = SearchForHeadphones(v15[0], &v17);
  v7 = v8;
  if ( v8 < 0 )
  {
    v11 = 281LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v8,
      (int)v14);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
    goto LABEL_14;
  }
  if ( v17 )
  {
    v8 = EnableSpatialOnSpeakerEndpoint(a1, v13, L"HP", 0LL);
    v7 = v8;
    if ( v8 >= 0 )
      goto LABEL_7;
    v11 = 285LL;
    goto LABEL_13;
  }
  LOBYTE(v9) = 1;
  v8 = EnableSpatialOnSpeakerEndpoint(a1, v13, L"No-HP", v9);
  v7 = v8;
  if ( v8 < 0 )
  {
    v11 = 290LL;
    goto LABEL_13;
  }
LABEL_7:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v14);
LABEL_8:
  v7 = 0;
LABEL_9:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v15);
  return (unsigned int)v7;
}
