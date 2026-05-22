/*
 * XREFs of ?MarkCached@ContextRuntimeClass@WRL2@Microsoft@@QEAAX_N@Z @ 0x180065324
 * Callers:
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?TrackReferenceForRedirectableProperty@ProxyObject@Composition@UI@Windows@@IEAAXIPEAV1234@@Z @ 0x18002E500 (-TrackReferenceForRedirectableProperty@ProxyObject@Composition@UI@Windows@@IEAAXIPEAV1234@@Z.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004DF00 (-ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimati.c)
 *     ?GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVExpressionAnimator@234@@Z @ 0x180054340 (-GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEA.c)
 *     ?Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x180064ED0 (-Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?TrackReference@ProxyObject@Composition@UI@Windows@@UEAAXI@Z @ 0x180079F10 (-TrackReference@ProxyObject@Composition@UI@Windows@@UEAAXI@Z.c)
 *     ?GetInteractionTrackerBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVInteractionTrackerBindingManager@Interactions@234@XZ @ 0x1801280F0 (-GetInteractionTrackerBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVInteractio.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextRuntimeClass::MarkCached(Microsoft::WRL2::ContextRuntimeClass *this, char a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v3 = *((_QWORD *)this + 3);
  if ( this == (Microsoft::WRL2::ContextRuntimeClass *)v3 )
    goto LABEL_22;
  v4 = *((_DWORD *)this + 8);
  if ( (v4 & 1) == 0 )
    goto LABEL_22;
  if ( !a2 )
  {
    v5 = v4 << 24;
    goto LABEL_6;
  }
  if ( (*(_BYTE *)(v3 + 32) & 1) == 0 )
LABEL_22:
    Microsoft::WRL2::FailFast::Unexpected("MarkCached preconditions");
  v5 = v4 << 24;
  if ( v5 < 0 )
    Microsoft::WRL2::FailFast::Unexpected("MarkCached double cached");
LABEL_6:
  v6 = v5 >> 31;
  if ( a2 )
  {
    if ( !v6 )
    {
      if ( !*((_DWORD *)this + 4) )
        Microsoft::WRL2::FailFast::Unexpected("MarkCache zero reference count");
      if ( *(int *)(*((_QWORD *)this + 3) + 16LL) <= 1 )
        Microsoft::WRL2::FailFast::Unexpected("MarkCache session reference count");
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(*((Microsoft::WRL2::NestableRuntimeClass **)this + 3));
      *((_DWORD *)this + 8) |= 0x80u;
    }
  }
  else
  {
    if ( !v6 )
      Microsoft::WRL2::FailFast::Unexpected("MarkCache unnecessary");
    if ( !v3 || (*(_BYTE *)(v3 + 32) & 0x10) == 0 )
      Microsoft::WRL2::FailFast::Unexpected("MarkCache session destroyed");
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 16));
    *((_DWORD *)this + 8) &= ~0x80u;
    _InterlockedIncrement((volatile signed __int32 *)this + 4);
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(this);
  }
}
