/*
 * XREFs of ?put_RotationAxis@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@@Z @ 0x180193660
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18007DED0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneModelTransform::Api::put_RotationAxis(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  int updated; // eax
  int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 128) & 2) != 0 )
  {
    v6 = *(_QWORD *)(a1 - 8);
    v10[1] = a2;
    v10[2] = a2;
    v10[0] = v6 + 252;
    *(_QWORD *)v9 = &Windows::UI::Composition::ComponentTransform3D::sc_RotationAxis;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector3>,Windows::UI::Composition::PropertyUpdateInfo>(
                v6,
                v10,
                (PVOID **)v9);
    v5 = updated;
    if ( updated >= 0 )
    {
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x134,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemodeltransform.cpp",
        (const char *)(unsigned int)updated);
      DoStackCaptureDirect(v5, 0x15Eu);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
