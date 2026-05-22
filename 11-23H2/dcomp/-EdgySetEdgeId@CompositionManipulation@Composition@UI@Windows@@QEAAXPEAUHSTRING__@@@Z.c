/*
 * XREFs of ?EdgySetEdgeId@CompositionManipulation@Composition@UI@Windows@@QEAAXPEAUHSTRING__@@@Z @ 0x1801612B8
 * Callers:
 *     ?RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVVisual@456@@Z @ 0x18013150C (-RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAAJ.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionManipulation::EdgySetEdgeId(
        Windows::UI::Composition::CompositionManipulation *this,
        HSTRING a2)
{
  PCWSTR StringRawBuffer; // r9
  int v5; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  UINT32 length; // [rsp+50h] [rbp+18h] BYREF

  if ( WindowsIsStringEmpty(a2) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      410LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtmanipulation.cpp",
      (const char *)0x80070057LL,
      v5);
  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
  if ( length > 0x3F )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      415LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtmanipulation.cpp",
      (const char *)0x80070057LL,
      v5);
  DirectComposition::CDevice::ResourceSetBufferProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    9,
    StringRawBuffer,
    2LL * length);
}
