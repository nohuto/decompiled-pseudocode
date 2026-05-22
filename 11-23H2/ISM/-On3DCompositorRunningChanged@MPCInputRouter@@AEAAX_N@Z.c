/*
 * XREFs of ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x18010AAD0
 * Callers:
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x180041E60 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180041F08 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x1800A72B4 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ??4?$ComPtr@UIMPCInputPostProcessor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputPostProcessor@@@Z @ 0x1800B4318 (--4-$ComPtr@UIMPCInputPostProcessor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputPostProcessor@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180109C3C (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18010B108 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 */

void __fastcall MPCInputRouter::On3DCompositorRunningChanged(MPCInputRouter *this, char a2)
{
  __int64 *v2; // rdi
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9

  v2 = (__int64 *)((char *)this + 816);
  if ( a2 )
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
    Microsoft::WRL::ComPtr<IMPCInputPostProcessor>::operator=(v2, (__int64)PostProcessor);
    MPCInputRouter::Initialize3DComponents(this, v6, v7, v8);
  }
  else
  {
    MPCInputRouter::UnInitialize3DComponents(this);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v2);
  }
}
