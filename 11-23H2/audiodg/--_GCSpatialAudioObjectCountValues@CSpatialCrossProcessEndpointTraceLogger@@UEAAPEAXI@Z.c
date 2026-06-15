/*
 * XREFs of ??_GCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x14009B850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues *__fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues::`scalar deleting destructor'(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues *this,
        char a2)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum SpatialObjectCountTypes,unsigned int>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
