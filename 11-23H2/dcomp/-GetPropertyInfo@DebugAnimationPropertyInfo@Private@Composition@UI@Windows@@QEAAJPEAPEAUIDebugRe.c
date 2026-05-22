/*
 * XREFs of ?GetPropertyInfo@DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@QEAAJPEAPEAUIDebugReference@2345@PEA_KPEAPEAUHSTRING__@@PEAIPEAPEAUIInspectable@@PEAW4AnimationDebugPropertyInfoType@2345@@Z @ 0x1801A328C
 * Callers:
 *     ?GetPropertyInfo@Api@DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@UEAAJPEAPEAUIDebugReference@3456@PEA_KPEAPEAUHSTRING__@@PEAIPEAPEAUIInspectable@@PEAW4AnimationDebugPropertyInfoType@3456@@Z @ 0x1801A3160 (-GetPropertyInfo@Api@DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@UEAAJPEAPEAUIDeb.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::DebugAnimationPropertyInfo::GetPropertyInfo(
        Windows::UI::Composition::Private::DebugAnimationPropertyInfo *this,
        struct Windows::UI::Composition::Private::IDebugReference **a2,
        unsigned __int64 *a3,
        HSTRING *a4,
        unsigned int *a5,
        struct IInspectable **a6,
        enum Windows::UI::Composition::Private::AnimationDebugPropertyInfoType *a7)
{
  unsigned int *v9; // rax
  unsigned int v11; // r8d
  struct Windows::UI::Composition::Private::IDebugReference *v12; // rax
  Microsoft::WRL2::NestableRuntimeClass *v13; // rdi
  HRESULT v14; // eax
  int v15; // eax
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = *((_QWORD *)this + 19);
  v9 = a5;
  v11 = *((_DWORD *)this + 42);
  a5 = 0LL;
  *v9 = v11;
  *(_DWORD *)a7 = *((_DWORD *)this + 46);
  v12 = 0LL;
  v13 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 18);
  if ( v13 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&a5);
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v13);
    v12 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v13 + 40);
  }
  a5 = 0LL;
  *a2 = v12;
  v14 = WindowsDuplicateString(*((HSTRING *)this + 20), a4);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      84LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdebuganimationpropertyinfo.cpp",
      (const char *)(unsigned int)v14,
      v17);
  v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInspectable **))this + 22))(
          *((_QWORD *)this + 22),
          &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
          a6);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      85LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdebuganimationpropertyinfo.cpp",
      (const char *)(unsigned int)v15,
      v17);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&a5);
  return 0LL;
}
