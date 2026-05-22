/*
 * XREFs of ?CreateDwmChannel@CDevice@DirectComposition@@QEAAJPEAUIDwmChannelProvider@@@Z @ 0x1800FF8B8
 * Callers:
 *     ?DCompositionCreateDwmDevice@CDevice@DirectComposition@@SAJAEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@@@Z @ 0x1800FF9B0 (-DCompositionCreateDwmDevice@CDevice@DirectComposition@@SAJAEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@.c)
 *     ?RuntimeClassInitialize@InteropDwmCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@@Z @ 0x18015BCDC (-RuntimeClassInitialize@InteropDwmCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInt.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateDwmChannel(
        DirectComposition::CDevice *this,
        struct IDwmChannelProvider *a2)
{
  FARPROC ProcAddress; // rax
  HMODULE LibraryW; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ProcAddress = (FARPROC)qword_180220CE8;
  if ( !qword_180220CE8 )
  {
    LibraryW = LoadLibraryW(L"dwmcore.dll");
    if ( LibraryW )
    {
      ProcAddress = GetProcAddress(LibraryW, "MilCompositionEngine_CreateChannel");
      qword_180220CE8 = (__int64)ProcAddress;
    }
    else
    {
      ProcAddress = (FARPROC)qword_180220CE8;
    }
    if ( !ProcAddress )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        218LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\dll\\globaldevice.cpp",
        v6);
  }
  return ((__int64 (__fastcall *)(struct IDwmChannelProvider *, char *))ProcAddress)(a2, (char *)this + 88);
}
