/*
 * XREFs of ??1DeferredDirectSetCallback@CompObjectDiagnosticsPrincipal@@AEAA@XZ @ 0x18019C9B4
 * Callers:
 *     ?Release@DeferredDirectSetCallback@CompObjectDiagnosticsPrincipal@@UEAAKXZ @ 0x18019E240 (-Release@DeferredDirectSetCallback@CompObjectDiagnosticsPrincipal@@UEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback::~DeferredDirectSetCallback(
        CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  char *v3; // rdi
  unsigned int v4; // eax
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback::`vftable';
  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = (char *)v2 + 128;
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v2);
  }
  else
  {
    v3 = 0LL;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3), v3);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2147483629 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      244LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\CompObjectDiagnosticsPrincipal.h",
      (const char *)v4,
      v6);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 3);
  v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  }
}
