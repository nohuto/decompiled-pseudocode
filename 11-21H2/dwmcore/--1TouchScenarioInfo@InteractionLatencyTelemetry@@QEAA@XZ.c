/*
 * XREFs of ??1TouchScenarioInfo@InteractionLatencyTelemetry@@QEAA@XZ @ 0x1801ADDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180061A30 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall InteractionLatencyTelemetry::TouchScenarioInfo::~TouchScenarioInfo(
        InteractionLatencyTelemetry::TouchScenarioInfo *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 6);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 2);
}
