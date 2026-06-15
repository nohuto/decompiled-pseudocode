/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCBtAudioResourceManagerBase@@UISessionInternalEvents@@UIEndpointCustomFormatHandler@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800F5750
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800F54C0 (--1CBtAudioResourceManagerBase@@QEAA@XZ.c)
 */

CBtAudioResourceManagerBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase,ISessionInternalEvents,IEndpointCustomFormatHandler>::`scalar deleting destructor'(
        CBtAudioResourceManagerBase *a1,
        char a2)
{
  *((_DWORD *)a1 + 59) = -1073741823;
  CBtAudioResourceManagerBase::~CBtAudioResourceManagerBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
