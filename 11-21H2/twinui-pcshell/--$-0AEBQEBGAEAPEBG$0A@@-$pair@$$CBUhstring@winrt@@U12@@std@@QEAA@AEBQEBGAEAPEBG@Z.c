/*
 * XREFs of ??$?0AEBQEBGAEAPEBG$0A@@?$pair@$$CBUhstring@winrt@@U12@@std@@QEAA@AEBQEBGAEAPEBG@Z @ 0x18000A4F4
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z @ 0x18000A170 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::pair<winrt::hstring const,winrt::hstring>::pair<winrt::hstring const,winrt::hstring>(
        __int64 a1,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3)
{
  winrt::hstring::hstring((winrt::hstring *)a1, *a2);
  winrt::hstring::hstring((winrt::hstring *)(a1 + 8), *a3);
  return a1;
}
