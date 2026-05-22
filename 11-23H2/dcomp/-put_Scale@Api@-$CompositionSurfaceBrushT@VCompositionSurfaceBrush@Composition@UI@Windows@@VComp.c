/*
 * XREFs of ?put_Scale@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18008B860
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 *     ?EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ @ 0x18006E764 (-EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::put_Scale(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // edi
  __int64 v6; // rdx
  int updated; // eax
  __int64 *v8; // rcx
  int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WCHAR **v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1 - 160;
  *(_QWORD *)v9 = a2;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 160 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*(_BYTE *)(v2 + 32) & 2) == 0 )
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    v6 = 11995LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)v4);
    goto LABEL_5;
  }
  if ( *(_QWORD *)(v2 + 288) )
    goto LABEL_8;
  if ( *(_QWORD *)v9 != Windows::UI::Composition::ComponentTransform2D::sc_defaultScale )
  {
    updated = Windows::UI::Composition::CompositionSurfaceBrush::EnsureComponentTransform((Windows::UI::Composition::CompositionSurfaceBrush *)v2);
    v4 = updated;
    if ( updated < 0 )
    {
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2FF,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
        (const char *)(unsigned int)updated);
      v6 = 11998LL;
      goto LABEL_10;
    }
LABEL_8:
    v8 = *(__int64 **)(v2 + 288);
    v10[0] = v8 + 23;
    v10[1] = v9;
    v10[2] = v9;
    v12 = (WCHAR **)&Windows::UI::Composition::ComponentTransform2D::sc_Scale;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
                v8,
                (__int64)v10,
                &v12);
    v4 = updated;
    if ( updated >= 0 )
      goto LABEL_4;
    goto LABEL_9;
  }
LABEL_4:
  v4 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v4;
}
