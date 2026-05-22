/*
 * XREFs of ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18002A2EC
 * Callers:
 *     ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18002A230 (-Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x18002A520 (-RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INVALIDATE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18002A570 (-Initialize@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessag.c)
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18002A788 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x18002AA1C (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18002AB0C (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18002AD20 (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18002AEA0 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PenIdentity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002E284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PenIdentity@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800C4628 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800C5DF0 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800C7450 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800C8510 (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800C9C84 (-Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1.c)
 */

__int64 __fastcall RIMRawInputProvider::Initialize(RIMRawInputProvider *this, int a2)
{
  struct IMessageSession **v2; // r15
  __int64 v5; // rdx
  int v6; // esi
  const char *v7; // r9
  int (*v8)(void *, unsigned int, void *); // r8
  int (*v9)(void *, unsigned int, void *); // r8
  int (*v10)(void *, unsigned int, void *); // r8
  int (*v11)(void *, unsigned int, void *); // r8
  int v12; // edi
  int (*v13)(void *, unsigned int, void *); // r8
  __int64 v14; // r8
  __int64 v16; // rdx
  int (*v17)(void *, unsigned int, void *); // r8
  int (*v18)(void *, unsigned int, void *); // r8
  void **v19; // r14
  int (*v20)(void *, unsigned int, void *); // r8
  int (*v21)(void *, unsigned int, void *); // r8
  __int64 v22; // rdx
  int (*v23)(void *, unsigned int, void *); // r8
  int v24; // [rsp+20h] [rbp-50h]
  _QWORD v25[8]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  void *v27; // [rsp+A0h] [rbp+30h] BYREF

  v27 = 0LL;
  v2 = (struct IMessageSession **)((char *)this + 32);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 4);
  v6 = CoreUICreate(v2);
  if ( v6 < 0 )
  {
    v16 = 87LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)(unsigned int)v6,
      v24);
    return (unsigned int)v6;
  }
  if ( (a2 & 0x400) != 0 )
  {
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 6);
    v6 = AugmentedInputDeviceCollection::Create(
           *((struct IRawInputClient **)this + 3),
           &v27,
           (struct AugmentedInputDeviceCollection **)this + 6);
    if ( v6 < 0 )
    {
      v16 = 94LL;
      goto LABEL_25;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v27, v8, *((void **)this + 6));
    if ( v6 < 0 )
    {
      v16 = 99LL;
      goto LABEL_25;
    }
  }
  if ( (a2 & 0x2000) != 0 )
  {
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 7);
    v6 = SpatialRimDeviceCollection::Create(
           *((struct IRawInputClient **)this + 3),
           this,
           *v2,
           &v27,
           (struct SpatialRimDeviceCollection **)this + 7);
    if ( v6 < 0 )
    {
      v16 = 109LL;
      goto LABEL_25;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v27, v9, *((void **)this + 7));
    if ( v6 < 0 )
    {
      v16 = 114LL;
      goto LABEL_25;
    }
  }
  if ( (a2 & 0x80u) != 0 )
  {
    if ( IsEdition(0x3DDA1uLL) )
    {
      Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 5);
      v6 = MobileButtonDeviceCollection::Create(
             *((struct IRawInputClient **)this + 3),
             this,
             &v27,
             (struct MobileButtonDeviceCollection **)this + 5);
      if ( v6 < 0 )
      {
        v16 = 133LL;
        goto LABEL_25;
      }
      v6 = RIMRawInputProvider::RegisterWaitHandler(this, v27, v17, *((void **)this + 5));
      if ( v6 < 0 )
      {
        v16 = 138LL;
        goto LABEL_25;
      }
      Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 8);
      v6 = ConsumerControlDeviceCollection::Create(
             *((struct IRawInputClient **)this + 3),
             this,
             &v27,
             (struct ConsumerControlDeviceCollection **)this + 8);
      if ( v6 < 0 )
      {
        v16 = 144LL;
        goto LABEL_25;
      }
      v6 = RIMRawInputProvider::RegisterWaitHandler(this, v27, v18, *((void **)this + 8));
      if ( v6 < 0 )
      {
        v16 = 149LL;
        goto LABEL_25;
      }
    }
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 9);
    v6 = SystemControlDeviceCollection::Create(
           *((struct IRawInputClient **)this + 3),
           this,
           &v27,
           (struct SystemControlDeviceCollection **)this + 9);
    if ( v6 < 0 )
    {
      v16 = 156LL;
      goto LABEL_25;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v27, v10, *((void **)this + 9));
    if ( v6 < 0 )
    {
      v16 = 161LL;
      goto LABEL_25;
    }
  }
  if ( (a2 & 0x800) != 0 )
  {
    v19 = (void **)((char *)this + 80);
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 10);
    v6 = HeatDeviceCollection::Create(
           *((struct IRawInputClient **)this + 3),
           this,
           &v27,
           (struct HeatDeviceCollection **)this + 10);
    if ( v6 < 0 )
    {
      v16 = 170LL;
      goto LABEL_25;
    }
    v6 = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)*v19 + 48LL))(*v19, &v27);
    if ( v6 < 0 )
    {
      v16 = 177LL;
      goto LABEL_25;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v27, v20, *v19);
    if ( v6 < 0 )
    {
      v16 = 182LL;
      goto LABEL_25;
    }
  }
  if ( (a2 & 0x4000) == 0 )
    goto LABEL_16;
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 11);
  v6 = GazeDeviceCollection::Create(
         *((struct IRawInputClient **)this + 3),
         this,
         &v27,
         (struct GazeDeviceCollection **)this + 11);
  if ( v6 < 0 )
  {
    v16 = 191LL;
    goto LABEL_25;
  }
  v6 = RIMRawInputProvider::RegisterWaitHandler(this, v27, v11, *((void **)this + 11));
  if ( v6 < 0 )
  {
    v16 = 196LL;
    goto LABEL_25;
  }
LABEL_16:
  if ( (a2 & 0x100000) == 0 )
    goto LABEL_17;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 13);
  v12 = DockDeviceCollection::Create(
          *((struct IRawInputClient **)this + 3),
          this,
          &v27,
          (struct DockDeviceCollection **)this + 13);
  if ( v12 >= 0 )
  {
    v12 = RIMRawInputProvider::RegisterWaitHandler(this, v27, v21, *((void **)this + 13));
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 14);
      v12 = DockableDeviceCollection::Create(
              *((struct IRawInputClient **)this + 3),
              this,
              &v27,
              (struct DockableDeviceCollection **)this + 14);
      if ( v12 >= 0 )
      {
        v12 = RIMRawInputProvider::RegisterWaitHandler(this, v27, v23, *((void **)this + 14));
        if ( v12 >= 0 )
        {
LABEL_17:
          if ( !ISMScenarios::s_instance )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x1C,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
              v7);
          if ( *(_DWORD *)ISMScenarios::s_instance )
            return 0LL;
          LOBYTE(v5) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenIdentity>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_PenIdentity>::GetImpl'::`2'::impl,
            v5);
          Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 12);
          v12 = PenDeviceCollection::Create(
                  *((struct IRawInputClient **)this + 3),
                  this,
                  &v27,
                  (struct PenDeviceCollection **)this + 12);
          if ( v12 < 0 )
          {
            v22 = 232LL;
          }
          else
          {
            v12 = RIMRawInputProvider::RegisterWaitHandler(this, v27, v13, *((void **)this + 12));
            if ( v12 >= 0 )
            {
              v25[1] = this;
              v25[0] = off_1801E4530;
              v25[7] = v25;
              KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::Initialize((char *)this + 120, v2, v14, v25);
              return 0LL;
            }
            v22 = 237LL;
          }
          goto LABEL_50;
        }
        v22 = 221LL;
      }
      else
      {
        v22 = 216LL;
      }
    }
    else
    {
      v22 = 210LL;
    }
  }
  else
  {
    v22 = 205LL;
  }
LABEL_50:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
    (const char *)(unsigned int)v12,
    v24);
  return (unsigned int)v12;
}
