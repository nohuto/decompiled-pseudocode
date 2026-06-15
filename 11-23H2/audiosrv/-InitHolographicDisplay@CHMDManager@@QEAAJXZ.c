/*
 * XREFs of ?InitHolographicDisplay@CHMDManager@@QEAAJXZ @ 0x18010F7F4
 * Callers:
 *     s_CreateHolographicDisplay @ 0x18010FAA0 (s_CreateHolographicDisplay.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004AC60 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CHMDManager::InitHolographicDisplay(CHMDManager *this)
{
  int ActivationFactory; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, char *); // r14
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, char *); // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v17; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v17 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Graphics.Holographic.HolographicDisplay",
    0x30u,
    0x2Fu);
  ActivationFactory = RoGetActivationFactory(v19, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v17);
  v3 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v16 = 0LL;
    v4 = *v17;
    v16 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 64))(v17, &v16);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v8 = v16;
      if ( !v16 )
      {
        v3 = -2147418113;
        v7 = 2147549183LL;
        v6 = 42LL;
        goto LABEL_6;
      }
      v9 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 88LL);
      v10 = *((_QWORD *)this + 1);
      *((_QWORD *)this + 1) = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v5 = v9(v8, (char *)this + 8);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v11 = *((_QWORD *)this + 1);
        v12 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 96LL);
        v13 = *((_QWORD *)this + 2);
        *((_QWORD *)this + 2) = 0LL;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        v5 = v12(v11, (char *)this + 16);
        v3 = v5;
        if ( v5 >= 0 )
        {
          v14 = *(_QWORD *)this;
          *(_QWORD *)this = 0LL;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          v19 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"Windows.Perception.PerceptionTimestampHelper",
            0x2Du,
            0x2Cu);
          v5 = RoGetActivationFactory(v19, &GUID_47a611d4_a9df_4edc_855d_f4d339d967ac, this);
          v3 = v5;
          if ( v5 >= 0 )
          {
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
            v3 = 0;
            goto LABEL_22;
          }
          v6 = 47LL;
        }
        else
        {
          v6 = 45LL;
        }
      }
      else
      {
        v6 = 44LL;
      }
    }
    else
    {
      v6 = 41LL;
    }
    v7 = (unsigned int)v5;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
      (const char *)v7);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_22:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v17);
  return v3;
}
