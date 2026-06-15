/*
 * XREFs of ??1CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x14002F008
 * Callers:
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$3 @ 0x140034839 (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::~CCrossProcessEndpointGlitchValues(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *this)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
}
