/*
 * XREFs of ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041C68
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18003F8DC (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Create@MPCManager@@SAXXZ @ 0x180041AC8 (-Create@MPCManager@@SAXXZ.c)
 *     std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___ @ 0x180041B4C (std--call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___.c)
 *     std::call_once__lambda_a6dafc035b20d634b29ec3c0443d964a___ @ 0x180041BE0 (std--call_once__lambda_a6dafc035b20d634b29ec3c0443d964a___.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800428A8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     _MPCMouseProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800823FB (_MPCMouseProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     std::call_once__lambda_810dcc79efb0a72353c94b2711027391___ @ 0x1800BABA8 (std--call_once__lambda_810dcc79efb0a72353c94b2711027391___.c)
 *     _std::call_once__lambda_810dcc79efb0a72353c94b2711027391____::_1_::dtor$0 @ 0x1800BAC31 (_std--call_once__lambda_810dcc79efb0a72353c94b2711027391____--_1_--dtor$0.c)
 *     std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30___ @ 0x1800BC188 (std--call_once__lambda_e877c53153750a022a5d5eb128b5cc30___.c)
 *     _std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30____::_1_::dtor$0 @ 0x1800BC236 (_std--call_once__lambda_e877c53153750a022a5d5eb128b5cc30____--_1_--dtor$0.c)
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800CF4B0 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     _MPCHandProcessor::Initialize3DComponents_::_1_::dtor$3 @ 0x1800CF72E (_MPCHandProcessor--Initialize3DComponents_--_1_--dtor$3.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800D0734 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     _MPCHandProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800D0830 (_MPCHandProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     std::call_once__lambda_a860493e5708769190ef41fba30dc41a___ @ 0x1800E0E34 (std--call_once__lambda_a860493e5708769190ef41fba30dc41a___.c)
 *     _std::call_once__lambda_a860493e5708769190ef41fba30dc41a____::_1_::dtor$0 @ 0x1800E0EEF (_std--call_once__lambda_a860493e5708769190ef41fba30dc41a____--_1_--dtor$0.c)
 *     std::call_once__lambda_ebc94a938681f7b1550f88ebc61e0745___ @ 0x1801D0150 (std--call_once__lambda_ebc94a938681f7b1550f88ebc61e0745___.c)
 *     _std::call_once__lambda_ebc94a938681f7b1550f88ebc61e0745____::_1_::dtor$0 @ 0x1801D01D9 (_std--call_once__lambda_ebc94a938681f7b1550f88ebc61e0745____--_1_--dtor$0.c)
 *     ?RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801E88C0 (-RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     _MPCVoiceProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801E898C (_MPCVoiceProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___ @ 0x1801E96D0 (std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___.c)
 *     _std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308____::_1_::dtor$0 @ 0x1801E97A5 (_std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308____--_1_--dtor$0.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801EB510 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     _MPCSixDofProcessor::Initialize3DComponents_::_1_::dtor$9 @ 0x1801EB9CB (_MPCSixDofProcessor--Initialize3DComponents_--_1_--dtor$9.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801EDA08 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     _MPCSixDofProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801EDAB3 (_MPCSixDofProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801F0BF0 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     _MPCGamepadProcessor::Initialize3DComponents_::_1_::dtor$3 @ 0x1801F0DBB (_MPCGamepadProcessor--Initialize3DComponents_--_1_--dtor$3.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801F2530 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     _MPCGamepadProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801F26E2 (_MPCGamepadProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     std::call_once__lambda_8c4ed463577f4da5b58359432c7ff390___ @ 0x1801F61A8 (std--call_once__lambda_8c4ed463577f4da5b58359432c7ff390___.c)
 *     _std::call_once__lambda_8c4ed463577f4da5b58359432c7ff390____::_1_::dtor$0 @ 0x1801F6253 (_std--call_once__lambda_8c4ed463577f4da5b58359432c7ff390____--_1_--dtor$0.c)
 *     std::call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___ @ 0x1801F66FC (std--call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___.c)
 *     _std::call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b____::_1_::dtor$0 @ 0x1801F67A7 (_std--call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b____--_1_--dtor$0.c)
 *     ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801F7CB4 (-RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     _MPCClickerProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801F7D9A (_MPCClickerProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Init_once_completer::~_Init_once_completer(std::_Init_once_completer *this)
{
  if ( !InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL) )
    abort();
}
