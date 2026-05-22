/*
 * XREFs of ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004D61C
 * Callers:
 *     ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18003AE30 (-Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003AEC4 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003AF90 (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003B05C (-Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPE.c)
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003B138 (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x18003B214 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18003B2D8 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INVALIDATE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x180042600 (-Initialize@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessag.c)
 *     ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x18004D8A0 (-RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DD6E8 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DF030 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800E0DF0 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800E1EC0 (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800E3324 (-Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1.c)
 */

__int64 __fastcall RIMRawInputProvider::Initialize(RIMRawInputProvider *this, int a2)
{
  struct IMessageSession **v2; // r12
  int v5; // edi
  const char *v6; // r9
  struct IRawInputClient **v7; // rdi
  int (*v8)(void *, unsigned int, void *); // r8
  int v9; // r14d
  int (*v10)(void *, unsigned int, void *); // r8
  int (*v11)(void *, unsigned int, void *); // r8
  int (*v12)(void *, unsigned int, void *); // r8
  int (*v13)(void *, unsigned int, void *); // r8
  int (*v14)(void *, unsigned int, void *); // r8
  __int64 v15; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  int (*v19)(void *, unsigned int, void *); // r8
  int (*v20)(void *, unsigned int, void *); // r8
  void **v21; // r15
  int (*v22)(void *, unsigned int, void *); // r8
  int v23; // esi
  int (*v24)(void *, unsigned int, void *); // r8
  __int64 v25; // rdx
  int (*v26)(void *, unsigned int, void *); // r8
  _QWORD v27[8]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  void *v29; // [rsp+A0h] [rbp+30h] BYREF

  v29 = 0LL;
  v2 = (struct IMessageSession **)((char *)this + 32);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 4);
  v5 = CoreUICreate(v2);
  if ( v5 < 0 )
  {
    v17 = 90LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v7 = (struct IRawInputClient **)((char *)this + 24);
  if ( (a2 & 0x400) != 0 )
  {
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 6);
    v9 = AugmentedInputDeviceCollection::Create(*v7, &v29, (struct AugmentedInputDeviceCollection **)this + 6);
    if ( v9 < 0 )
    {
      v18 = 97LL;
      goto LABEL_30;
    }
    v9 = RIMRawInputProvider::RegisterWaitHandler(this, v29, v8, *((void **)this + 6));
    if ( v9 < 0 )
    {
      v18 = 102LL;
      goto LABEL_30;
    }
  }
  if ( (a2 & 0x2000) != 0 )
  {
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 7);
    v9 = SpatialRimDeviceCollection::Create(*v7, this, *v2, &v29, (struct SpatialRimDeviceCollection **)this + 7);
    if ( v9 < 0 )
    {
      v18 = 112LL;
      goto LABEL_30;
    }
    v9 = RIMRawInputProvider::RegisterWaitHandler(this, v29, v10, *((void **)this + 7));
    if ( v9 < 0 )
    {
      v18 = 117LL;
      goto LABEL_30;
    }
  }
  if ( (a2 & 0x80u) != 0 )
  {
    if ( IsEdition(253345LL) )
    {
      Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 5);
      v9 = MobileButtonDeviceCollection::Create(*v7, this, &v29, (struct MobileButtonDeviceCollection **)this + 5);
      if ( v9 < 0 )
      {
        v18 = 136LL;
        goto LABEL_30;
      }
      v9 = RIMRawInputProvider::RegisterWaitHandler(this, v29, v19, *((void **)this + 5));
      if ( v9 < 0 )
      {
        v18 = 141LL;
        goto LABEL_30;
      }
      Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 8);
      v9 = ConsumerControlDeviceCollection::Create(*v7, this, &v29, (struct ConsumerControlDeviceCollection **)this + 8);
      if ( v9 < 0 )
      {
        v18 = 147LL;
        goto LABEL_30;
      }
      v9 = RIMRawInputProvider::RegisterWaitHandler(this, v29, v20, *((void **)this + 8));
      if ( v9 < 0 )
      {
        v18 = 152LL;
        goto LABEL_30;
      }
    }
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 9);
    v9 = SystemControlDeviceCollection::Create(*v7, this, &v29, (struct SystemControlDeviceCollection **)this + 9);
    if ( v9 < 0 )
    {
      v18 = 159LL;
      goto LABEL_30;
    }
    v9 = RIMRawInputProvider::RegisterWaitHandler(this, v29, v11, *((void **)this + 9));
    if ( v9 < 0 )
    {
      v18 = 164LL;
      goto LABEL_30;
    }
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 15);
    v9 = CallControlDeviceCollection::Create(*v7, this, &v29, (struct CallControlDeviceCollection **)this + 15);
    if ( v9 < 0 )
    {
      v18 = 170LL;
      goto LABEL_30;
    }
    v9 = RIMRawInputProvider::RegisterWaitHandler(this, v29, v12, *((void **)this + 15));
    if ( v9 < 0 )
    {
      v18 = 175LL;
      goto LABEL_30;
    }
  }
  if ( (a2 & 0x800) != 0 )
  {
    v21 = (void **)((char *)this + 80);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 10);
    v9 = HeatDeviceCollection::Create(*v7, this, &v29, (struct HeatDeviceCollection **)this + 10);
    if ( v9 < 0 )
    {
      v18 = 184LL;
      goto LABEL_30;
    }
    v9 = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)*v21 + 48LL))(*v21, &v29);
    if ( v9 < 0 )
    {
      v18 = 191LL;
      goto LABEL_30;
    }
    v9 = RIMRawInputProvider::RegisterWaitHandler(this, v29, v22, *v21);
    if ( v9 < 0 )
    {
      v18 = 196LL;
      goto LABEL_30;
    }
  }
  if ( (a2 & 0x4000) != 0 )
  {
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 11);
    v9 = GazeDeviceCollection::Create(*v7, this, &v29, (struct GazeDeviceCollection **)this + 11);
    if ( v9 < 0 )
    {
      v18 = 205LL;
    }
    else
    {
      v9 = RIMRawInputProvider::RegisterWaitHandler(this, v29, v13, *((void **)this + 11));
      if ( v9 >= 0 )
        goto LABEL_18;
      v18 = 210LL;
    }
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
LABEL_18:
  if ( (a2 & 0x100000) == 0 )
    goto LABEL_19;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 13);
  v23 = DockDeviceCollection::Create(*v7, this, &v29, (struct DockDeviceCollection **)this + 13);
  if ( v23 >= 0 )
  {
    v23 = RIMRawInputProvider::RegisterWaitHandler(this, v29, v24, *((void **)this + 13));
    if ( v23 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 14);
      v23 = DockableDeviceCollection::Create(*v7, this, &v29, (struct DockableDeviceCollection **)this + 14);
      if ( v23 >= 0 )
      {
        v23 = RIMRawInputProvider::RegisterWaitHandler(this, v29, v26, *((void **)this + 14));
        if ( v23 >= 0 )
        {
LABEL_19:
          if ( !ISMScenarios::s_instance )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x1C,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
              v6);
          if ( *(_DWORD *)ISMScenarios::s_instance )
            return 0LL;
          Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 12);
          v5 = PenDeviceCollection::Create(*v7, this, &v29, (struct PenDeviceCollection **)this + 12);
          if ( v5 < 0 )
          {
            v17 = 244LL;
          }
          else
          {
            v5 = RIMRawInputProvider::RegisterWaitHandler(this, v29, v14, *((void **)this + 12));
            if ( v5 >= 0 )
            {
              v27[1] = this;
              v27[0] = off_1802038F0;
              v27[7] = v27;
              KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::Initialize(
                (_QWORD *)this + 16,
                v2,
                v15,
                (__int64)v27);
              return 0LL;
            }
            v17 = 249LL;
          }
          goto LABEL_27;
        }
        v25 = 235LL;
      }
      else
      {
        v25 = 230LL;
      }
    }
    else
    {
      v25 = 224LL;
    }
  }
  else
  {
    v25 = 219LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
    (const char *)(unsigned int)v23);
  return (unsigned int)v23;
}
