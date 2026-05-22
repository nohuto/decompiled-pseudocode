/*
 * XREFs of ??_GCompositionCapabilitiesEvent@Composition@UI@Windows@@QEAAPEAXI@Z @ 0x18008E3F0
 * Callers:
 *     ?_Destroy@?$_Ref_count@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@EEAAXXZ @ 0x18008E3D0 (-_Destroy@-$_Ref_count@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionCapabilitiesEvent *__fastcall Windows::UI::Composition::CompositionCapabilitiesEvent::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionCapabilitiesEvent *this,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)this;
  if ( v3 )
  {
    *(_QWORD *)this = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3, a2);
  }
  operator delete(this, 0x18uLL);
  return this;
}
