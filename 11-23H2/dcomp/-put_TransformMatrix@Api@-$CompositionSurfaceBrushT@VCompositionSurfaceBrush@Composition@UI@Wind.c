/*
 * XREFs of ?put_TransformMatrix@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Foundation@5@@Z @ 0x18004AE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18005C2EC (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@Compo.c)
 *     ?EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ @ 0x18006E764 (-EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::put_TransformMatrix(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edi
  int updated; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  void *v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = a1 - 160;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 160 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    v10 = 12041LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)v6);
    goto LABEL_8;
  }
  if ( !*(_QWORD *)(v2 + 288) )
  {
    v5 = *a2 - Windows::UI::Composition::ComponentTransform2D::sc_defaultTransformMatrix;
    if ( *a2 == Windows::UI::Composition::ComponentTransform2D::sc_defaultTransformMatrix )
    {
      v5 = a2[1] - qword_18021B7E8;
      if ( !v5 )
        v5 = a2[2] - qword_18021B7F0;
    }
    if ( !v5 )
      goto LABEL_7;
    updated = Windows::UI::Composition::CompositionSurfaceBrush::EnsureComponentTransform((Windows::UI::Composition::CompositionSurfaceBrush *)v2);
    v6 = updated;
    if ( updated < 0 )
      goto LABEL_13;
  }
  v9 = *(_QWORD *)(v2 + 288);
  v12[1] = a2;
  v12[2] = a2;
  v12[0] = v9 + 136;
  v11 = &Windows::UI::Composition::ComponentTransform2D::sc_TransformMatrix;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Matrix3x2>,Windows::UI::Composition::PropertyUpdateInfo>(
              v9,
              v12,
              &v11);
  v6 = updated;
  if ( updated < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x300,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
      (const char *)(unsigned int)updated);
    v10 = 12044LL;
    goto LABEL_14;
  }
LABEL_7:
  v6 = 0;
LABEL_8:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
