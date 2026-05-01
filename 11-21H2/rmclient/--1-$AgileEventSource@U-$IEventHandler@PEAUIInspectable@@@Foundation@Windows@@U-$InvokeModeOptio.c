/*
 * XREFs of ??1?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18000A870
 * Callers:
 *     _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__ @ 0x180017010 (_dynamic_atexit_destructor_for__Windows--System--CMemoryManager--s_levelDecreasedEvent__.c)
 *     _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__ @ 0x180017030 (_dynamic_atexit_destructor_for__Windows--System--CMemoryManager--s_levelIncreasedEvent__.c)
 *     _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_limitChangeEvent__ @ 0x180017050 (_dynamic_atexit_destructor_for__Windows--System--CMemoryManager--s_limitChangeEvent__.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006990 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::~AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
             result,
             a2);
  }
  return result;
}
