/*
 * XREFs of ??_GCSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z @ 0x180129EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues *__fastcall CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues::`scalar deleting destructor'(
        CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues *this,
        char a2)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum SarmErrorEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
