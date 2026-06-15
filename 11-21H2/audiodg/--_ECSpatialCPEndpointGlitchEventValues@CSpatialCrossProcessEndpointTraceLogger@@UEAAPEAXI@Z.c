/*
 * XREFs of ??_ECSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x14008F690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues *__fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues::`vector deleting destructor'(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues *this,
        char a2)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum SpatialCpGlitchEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
