/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800CEDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800D53B8 (--1MPCInputProviderBase@@UEAA@XZ.c)
 */

MPCInputProviderBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`scalar deleting destructor'(
        MPCInputProviderBase *a1,
        char a2)
{
  *((_DWORD *)a1 + 915) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
