/*
 * XREFs of ??_ECSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x14009B890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues *__fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues::`vector deleting destructor'(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues *this,
        char a2)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum SpatialCpErrorEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
