/*
 * XREFs of ?put_Offset@Api@CompositionRoundedRectangleGeometry@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x1800951F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionRoundedRectangleGeometry::Api::put_Offset(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int updated; // eax
  unsigned int v5; // edi
  int v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WCHAR **v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1 - 168;
  *(_QWORD *)v7 = a2;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 168 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v8[0] = v2 + 192;
    v8[1] = v7;
    v8[2] = v7;
    v10 = (WCHAR **)&Windows::UI::Composition::CompositionRoundedRectangleGeometry::sc_Offset;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
                (__int64 *)v2,
                (__int64)v8,
                &v10);
    v5 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionroundedrectanglegeometry.cpp",
        (const char *)(unsigned int)updated);
      DoStackCaptureDirect(v5, 0xF5u);
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
