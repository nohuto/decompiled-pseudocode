/*
 * XREFs of ?CreateAnimationPropertyInfo@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIAnimationPropertyInfo@345@@Z @ 0x180124C70
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VAnimationPropertyInfo@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAnimationPropertyInfo@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18001EEE8 (--$MakeAndInitialize2@VAnimationPropertyInfo@Composition@UI@Windows@@V1234@PEAVCompositor@234@@D.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateAnimationPropertyInfo(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct Windows::UI::Composition::IAnimationPropertyInfo **a2)
{
  struct Windows::UI::Composition::Compositor *v2; // rsi
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Windows::UI::Composition::CompositionObject *v11; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 *v12; // [rsp+48h] [rbp+10h] BYREF
  struct Windows::UI::Composition::Compositor *v13; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositorCommon::Api *)((char *)this - 192);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 192));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v12 = 0LL;
    v11 = 0LL;
    v13 = v2;
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::AnimationPropertyInfo,Windows::UI::Composition::AnimationPropertyInfo,Windows::UI::Composition::Compositor *>(
           &v11,
           &v13);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v7 = (volatile signed __int32 *)v11;
      v11 = 0LL;
      v4 = 0;
      v12 = v7;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x151D,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v5);
      v7 = 0LL;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
      (volatile signed __int32 **)&v11,
      v6);
    if ( v4 < 0 )
    {
      DoStackCaptureDirect(v4, 0x21DDu);
    }
    else
    {
      v12 = 0LL;
      *a2 = (struct Windows::UI::Composition::IAnimationPropertyInfo *)((unsigned __int64)(v7 + 32) & -(__int64)(v7 != 0LL));
      v4 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v12, v8);
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return (unsigned int)v4;
}
