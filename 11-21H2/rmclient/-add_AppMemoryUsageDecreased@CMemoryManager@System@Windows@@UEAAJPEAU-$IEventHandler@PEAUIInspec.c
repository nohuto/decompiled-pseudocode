/*
 * XREFs of ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180002D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180003CF0 (-Add@-$AgileEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOpt.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180004620 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::add_AppMemoryUsageDecreased(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = Windows::System::CMemoryManager::Init();
  if ( (int)result >= 0 )
    return Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
             &Windows::System::CMemoryManager::s_levelDecreasedEvent,
             a2,
             a3);
  return result;
}
