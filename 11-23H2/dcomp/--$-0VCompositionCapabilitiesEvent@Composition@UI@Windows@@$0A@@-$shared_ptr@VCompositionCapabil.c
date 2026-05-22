/*
 * XREFs of ??$?0VCompositionCapabilitiesEvent@Composition@UI@Windows@@$0A@@?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@QEAA@PEAVCompositionCapabilitiesEvent@Composition@UI@Windows@@@Z @ 0x180068474
 * Callers:
 *     ?RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAJPEAUIDispatcherQueue@System@4@PEAVCompositionCapabilities@234@PEAUEventRegistrationToken@@@Z @ 0x180067EAC (-RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAJPEAUIDispatche.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = operator new(0x18uLL);
  if ( v4 )
  {
    v4[2] = a2;
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &std::_Ref_count<Windows::UI::Composition::CompositionCapabilitiesEvent>::`vftable';
  }
  a1[1] = v4;
  result = a1;
  *a1 = a2;
  return result;
}
