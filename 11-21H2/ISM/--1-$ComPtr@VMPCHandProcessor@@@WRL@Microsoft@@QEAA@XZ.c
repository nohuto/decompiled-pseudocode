/*
 * XREFs of ??1?$ComPtr@VMPCHandProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x180194924
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHandProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$2 @ 0x180194739 (_Microsoft--WRL--Details--MakeAndInitialize_MPCHandProcessor_IInputProcessor_InputP_ea_180194739.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHomeGestureProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x180194822 (_Microsoft--WRL--Details--MakeAndInitialize_MPCHomeGestureProcessor_IInputProcessor_ea_180194822.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCVoiceProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x180194911 (_Microsoft--WRL--Details--MakeAndInitialize_MPCVoiceProcessor_IInputProcessor_Input_ea_180194911.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCSixDofProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$2 @ 0x1801BD505 (_Microsoft--WRL--Details--MakeAndInitialize_MPCSixDofProcessor_IInputProcessor_Inpu_ea_1801BD505.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCEyeGazeProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x1801CA439 (_Microsoft--WRL--Details--MakeAndInitialize_MPCEyeGazeProcessor_IInputProcessor_Inp_ea_1801CA439.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHeadProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x1801CA97E (_Microsoft--WRL--Details--MakeAndInitialize_MPCHeadProcessor_IInputProcessor_InputP_ea_1801CA97E.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCClickerProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x1801CAF60 (_Microsoft--WRL--Details--MakeAndInitialize_MPCClickerProcessor_IInputProcessor_Inp_ea_1801CAF60.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A8340 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPC_ea_1800A8340.c)
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
