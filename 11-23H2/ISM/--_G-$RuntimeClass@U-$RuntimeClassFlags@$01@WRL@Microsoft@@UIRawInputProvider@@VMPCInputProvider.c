/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801E3370
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@W7EAAPEAXI@Z @ 0x18006B0F0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProvider.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800C5548 (--1MPCInputProviderBase@@UEAA@XZ.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[917] = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase((MPCInputProviderBase *)(a1 + 2));
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
