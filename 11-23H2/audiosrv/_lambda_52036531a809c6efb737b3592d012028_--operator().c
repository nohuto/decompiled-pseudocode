/*
 * XREFs of _lambda_52036531a809c6efb737b3592d012028_::operator() @ 0x18006B260
 * Callers:
 *     wil::details::lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___::_lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___ @ 0x18006B0D8 (wil--details--lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___--_lambda_call__lambda_d5c2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z @ 0x18004B4D0 (-ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1cd5aad941324031a7770e11832089b3___ @ 0x18006AC08 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006AC08.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800D83BC (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_52036531a809c6efb737b3592d012028_::operator()(int **a1)
{
  int *v2; // rdx
  int *v3; // rdi
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // r9d
  int *v7; // r14
  __int64 v8; // r8
  int *v9; // r15
  _QWORD *v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // ebx
  __int64 v15[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v16; // [rsp+60h] [rbp-19h] BYREF
  __int64 v17; // [rsp+70h] [rbp-9h] BYREF
  __int128 v18; // [rsp+78h] [rbp-1h]
  char v19; // [rsp+88h] [rbp+Fh]
  unsigned __int64 v20; // [rsp+90h] [rbp+17h] BYREF
  int v21; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v15[0] = 0LL;
  v2 = *a1;
  v21 = **a1;
  v20 = 0LL;
  v3 = a1[1];
  v4 = (__int64 *)*((_QWORD *)v3 + 6);
  v5 = *v4;
  v6 = *v2;
  v7 = a1[3];
  v8 = *(_QWORD *)v7;
  v9 = a1[2];
  v10 = *(_QWORD **)v9;
  v16 = *(_OWORD *)(*(_QWORD *)v7 + 48LL);
  v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, _QWORD, int, unsigned __int64 *))(v5 + 56))(
          v4,
          *v10,
          &v16,
          *(unsigned int *)(v8 + 8),
          v6,
          &v20);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *(_QWORD *)&v16 = &v20;
    *((_QWORD *)&v16 + 1) = v3;
    v18 = v16;
    v19 = 1;
    v13 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, __int64, _DWORD, unsigned __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            *(_QWORD *)v9,
            *(_QWORD *)v7,
            2LL,
            0,
            &v20,
            0LL,
            0LL,
            v15);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids,
        (unsigned int)v13);
    }
    if ( v13 >= 0 )
    {
      ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(&v17, v15);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1cd5aad941324031a7770e11832089b3___(
        (__int64)&v16,
        *(_QWORD **)a1[4],
        *((_QWORD **)a1[4] + 1),
        &v17);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v16);
    }
    if ( v20 )
    {
      CAudioResourceManager::ReleaseSaDeviceResource((CAudioResourceManager *)(v3 + 2), &v20);
      v20 = 0LL;
    }
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB2B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v11);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v15);
  return v12;
}
