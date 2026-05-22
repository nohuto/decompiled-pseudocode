/*
 * XREFs of ?NotifyVisualUpdated_Callback@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAVVisual@234@MAEBUVector2@Numerics@Foundation@4@AEBUVector3@784@2@Z @ 0x1800873DC
 * Callers:
 *     ?Message_ContextUpdated@Visual@Composition@UI@Windows@@QEAAJMPEAUVector2@Numerics@Foundation@4@PEAUVector3@674@1@Z @ 0x180087300 (-Message_ContextUpdated@Visual@Composition@UI@Windows@@QEAAJMPEAUVector2@Numerics@Foundation@4@P.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnchor::NotifyVisualUpdated_Callback(
        Windows::UI::Composition::CompositionAnchor *this,
        struct Windows::UI::Composition::Visual *a2,
        float a3,
        const struct Windows::Foundation::Numerics::Vector2 *a4,
        const struct Windows::Foundation::Numerics::Vector3 *a5,
        const struct Windows::Foundation::Numerics::Vector3 *a6)
{
  int v7; // ecx
  int v8; // ecx

  if ( a2 != *((struct Windows::UI::Composition::Visual **)this + 18) )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  *((float *)this + 38) = (float)(int)(float)((float)(a3 + 0.025) / 0.050000001) * 0.050000001;
  *(_QWORD *)((char *)this + 156) = *(_QWORD *)a4;
  v7 = *((_DWORD *)a5 + 2);
  *(_QWORD *)((char *)this + 164) = *(_QWORD *)a5;
  *((_DWORD *)this + 43) = v7;
  v8 = *((_DWORD *)a6 + 2);
  *((_QWORD *)this + 22) = *(_QWORD *)a6;
  *((_DWORD *)this + 46) = v8;
  *((_BYTE *)this + 188) = 1;
  Windows::UI::Composition::CompositionAnchor::NotifyListeners_Callback(this);
}
