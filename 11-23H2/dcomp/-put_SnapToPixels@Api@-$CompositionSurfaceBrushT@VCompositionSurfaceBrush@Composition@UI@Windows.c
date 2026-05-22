/*
 * XREFs of ?put_SnapToPixels@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJE@Z @ 0x18012C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@_N@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@_N@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006FE44 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@_N@Composition@UI@Windows@@VPropertyUpdateInfo.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::put_SnapToPixels(
        __int64 a1,
        char a2)
{
  Windows::UI::Composition::CompositionObject *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rdx
  int updated; // eax
  int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  bool *v10; // [rsp+28h] [rbp-20h]
  bool *v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v13; // [rsp+50h] [rbp+8h] BYREF
  PVOID *v14; // [rsp+60h] [rbp+18h] BYREF

  v2 = (Windows::UI::Composition::CompositionObject *)(a1 - 168);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 168 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    *(_QWORD *)v9 = (char *)v2 + 296;
    v10 = &v13;
    v13 = a2 != 0;
    v11 = &v13;
    v14 = (PVOID *)&Windows::UI::Composition::CompositionSurfaceBrush::sc_SnapToPixels;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<bool>,Windows::UI::Composition::PropertyUpdateInfo>(
                v2,
                (__int64)v9,
                &v14);
    v5 = updated;
    if ( updated >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
      (const char *)(unsigned int)updated);
    v6 = 12091LL;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    v6 = 12088LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
    (const char *)v5);
LABEL_7:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
