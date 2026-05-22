/*
 * XREFs of ?DebugProperty@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180138A80
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?CompareAnimationNames@@YAHPEAUHSTRING__@@PEBG@Z @ 0x18000C820 (-CompareAnimationNames@@YAHPEAUHSTRING__@@PEBG@Z.c)
 *     ?DebugProperty@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180147070 (-DebugProperty@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?DebugSourceProperties@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@I@Z @ 0x1801904E8 (-DebugSourceProperties@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompObjectDi.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::DebugProperty(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        HSTRING a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  unsigned int v7; // edx

  *((_BYTE *)this + 328) |= 4u;
  v4 = Windows::UI::Composition::ProxyObject::DebugProperty(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 2080;
    goto LABEL_18;
  }
  if ( !*((_QWORD *)this + 43) || (unsigned int)CompareAnimationNames(a2, L"InertiaModifier_SetX") )
  {
    if ( !*((_QWORD *)this + 44) || (unsigned int)CompareAnimationNames(a2, L"InertiaModifier_SetY") )
    {
      if ( !*((_QWORD *)this + 45) || (unsigned int)CompareAnimationNames(a2, L"InertiaModifier_SetScale") )
      {
        if ( !*((_QWORD *)this + 46) || (unsigned int)CompareAnimationNames(a2, L"InertiaModifier_SetXY") )
          goto LABEL_16;
        v6 = 3LL;
      }
      else
      {
        v6 = 2LL;
      }
    }
    else
    {
      v6 = 1LL;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v4 = Windows::UI::Composition::CompositionPropertyAnimator::DebugSourceProperties(
         *((Windows::UI::Composition::CompositionPropertyAnimator **)this + v6 + 43),
         0LL,
         0);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 2114;
LABEL_18:
    DoStackCaptureDirect(v4, v7);
    goto LABEL_19;
  }
LABEL_16:
  v5 = 0;
LABEL_19:
  *((_BYTE *)this + 328) &= ~4u;
  return v5;
}
