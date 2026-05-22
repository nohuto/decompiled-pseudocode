/*
 * XREFs of ?NotifyToIsland_ActualSizeChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAXUfloat2@Numerics@Foundation@4@@Z @ 0x18006D690
 * Callers:
 *     ?ConnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@@Z @ 0x18006BCE4 (-ConnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV12.c)
 *     ?put_ActualSize@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18006D720 (-put_ActualSize@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5.c)
 *     ?Connection_5_CompleteIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVCompositionIslandSite@234@PEAV1234@@Z @ 0x18011206C (-Connection_5_CompleteIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVComposi.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandSite::NotifyToIsland_ActualSizeChanged(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  *(_QWORD *)(a1 + 160) = a2;
  if ( *(_DWORD *)(a1 + 180) )
  {
    v2 = *(_QWORD *)(a1 + 192);
    v3 = *(_QWORD *)(a1 + 224);
    v5 = v2;
    return CoreUICallSend(v3, &v5, 1LL, 6LL);
  }
  return result;
}
