/*
 * XREFs of ?put_Offset@Api@CompositionClip@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x180093E00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 *     ?EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ @ 0x180072A0C (-EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionClip::Api::put_Offset(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // edi
  int updated; // eax
  __int64 *v7; // rcx
  int v8[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WCHAR **v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1 - 144;
  *(_QWORD *)v8 = a2;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 144 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*(_BYTE *)(v2 + 32) & 2) == 0 )
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_5;
  }
  if ( *(_QWORD *)(v2 + 160) )
  {
LABEL_8:
    v7 = *(__int64 **)(v2 + 160);
    v9[0] = v7 + 22;
    v9[1] = v8;
    v9[2] = v8;
    v11 = (WCHAR **)&Windows::UI::Composition::ComponentTransform2D::sc_Offset;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
                v7,
                (__int64)v9,
                &v11);
    v4 = updated;
    if ( updated >= 0 )
      goto LABEL_4;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x109,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionclip.cpp",
      (const char *)(unsigned int)updated);
    DoStackCaptureDirect(v4, 0x111u);
    goto LABEL_5;
  }
  if ( *(_QWORD *)v8 != Windows::UI::Composition::ComponentTransform2D::sc_defaultOffset )
  {
    updated = Windows::UI::Composition::CompositionClip::EnsureComponentTransform((Windows::UI::Composition::CompositionClip *)v2);
    v4 = updated;
    if ( updated < 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
LABEL_4:
  v4 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v4;
}
