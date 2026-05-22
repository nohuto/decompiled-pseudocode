/*
 * XREFs of ?NotifyFromAnchor_Updated_Callback@Private@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAUICompositionAnchorPrivate@1345@@Z @ 0x18006AF60
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyFromAnchor_Updated_Callback@CompositionIsland@Composition@UI@Windows@@IEAAXMUfloat3@Numerics@Foundation@4@@Z @ 0x18006AFA8 (-NotifyFromAnchor_Updated_Callback@CompositionIsland@Composition@UI@Windows@@IEAAXMUfloat3@Numer.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualTreeIsland::Private::NotifyFromAnchor_Updated_Callback(
        Windows::UI::Composition::VisualTreeIsland::Private *this,
        struct Windows::UI::Composition::Private::ICompositionAnchorPrivate *a2)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v2 = *((_QWORD *)this + 3);
  v3 = *(_DWORD *)(v2 + 184);
  v5 = *(_QWORD *)(v2 + 176);
  v6 = v3;
  Windows::UI::Composition::CompositionIsland::NotifyFromAnchor_Updated_Callback((char *)this - 528, v2, &v5);
  return 0LL;
}
