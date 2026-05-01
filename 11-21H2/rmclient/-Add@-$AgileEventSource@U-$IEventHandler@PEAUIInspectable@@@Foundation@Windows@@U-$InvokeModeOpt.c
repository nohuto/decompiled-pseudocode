/*
 * XREFs of ?Add@?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180003CF0
 * Callers:
 *     ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180002D60 (-add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180003860 (-add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 * Callees:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180003D90 (-AddInternal@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeMode.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180004140 (--$CreateAgileHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180008EC8 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft.c)
 */

__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v8 = 0LL;
  v6 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<IInspectable *>>(a2, &v8);
  if ( v6 >= 0 )
  {
    if ( v8 )
      v6 = Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             a1,
             v8,
             *(_QWORD *)(*(_QWORD *)a2 + 24LL),
             a3);
    else
      v6 = -2147024809;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v8);
  return (unsigned int)v6;
}
