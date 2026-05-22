/*
 * XREFs of ??1?$ComPtr@VMPCHandProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1801C0838
 * Callers:
 *     ??$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801C0574 (--$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHandProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$2 @ 0x1801C0633 (_Microsoft--WRL--Details--MakeAndInitialize_MPCHandProcessor_IInputProcessor_InputP_ea_1801C0633.c)
 *     ??$MakeAndInitialize@VMPCHomeGestureProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801C0648 (--$MakeAndInitialize@VMPCHomeGestureProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreatePara.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHomeGestureProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x1801C0728 (_Microsoft--WRL--Details--MakeAndInitialize_MPCHomeGestureProcessor_IInputProcessor_ea_1801C0728.c)
 *     ??$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801C073C (--$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCVoiceProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x1801C0823 (_Microsoft--WRL--Details--MakeAndInitialize_MPCVoiceProcessor_IInputProcessor_Input_ea_1801C0823.c)
 *     ??$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801E8FC8 (--$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCSixDofProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$2 @ 0x1801E9087 (_Microsoft--WRL--Details--MakeAndInitialize_MPCSixDofProcessor_IInputProcessor_Inpu_ea_1801E9087.c)
 *     ??$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801F60AC (--$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCEyeGazeProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x1801F6193 (_Microsoft--WRL--Details--MakeAndInitialize_MPCEyeGazeProcessor_IInputProcessor_Inp_ea_1801F6193.c)
 *     ??$MakeAndInitialize@VMPCHeadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801F6600 (--$MakeAndInitialize@VMPCHeadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHeadProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x1801F66E8 (_Microsoft--WRL--Details--MakeAndInitialize_MPCHeadProcessor_IInputProcessor_InputP_ea_1801F66E8.c)
 *     ??$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801F6C20 (--$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCClickerProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x1801F6CDA (_Microsoft--WRL--Details--MakeAndInitialize_MPCClickerProcessor_IInputProcessor_Inp_ea_1801F6CDA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D0640 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPC_ea_1800D0640.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCHandProcessor>::~ComPtr<MPCHandProcessor>(__int64 *a1, volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release(
             result,
             a2);
  }
  return result;
}
