/*
 * XREFs of ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x18009F2C0
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18002BE88 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18002C220 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180090BF8 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ??4?$ComPtr@UIMPCInputPostProcessor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputPostProcessor@@@Z @ 0x18009CDA4 (--4-$ComPtr@UIMPCInputPostProcessor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputPostProcessor@@@Z.c)
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18009DB00 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800A0FF4 (-UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 */

void __fastcall MPCHolographicInputManager::OnHitTestingStateChanged(MPCHolographicInputManager *this, char a2)
{
  __int64 *v2; // rdi
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax

  v2 = (__int64 *)((char *)this + 3376);
  if ( a2 )
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
    Microsoft::WRL::ComPtr<IMPCInputPostProcessor>::operator=(v2, (__int64)PostProcessor);
    MPCHolographicInputManager::Initialize3DComponents(this);
  }
  else
  {
    MPCHolographicInputManager::UnInitialize3DComponents(this);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v2);
  }
}
