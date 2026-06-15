/*
 * XREFs of ??_ECCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x1400968E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *__fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::`vector deleting destructor'(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *this,
        char a2)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
