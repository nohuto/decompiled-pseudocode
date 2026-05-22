/*
 * XREFs of ?CreateDataSourceReader@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJ_K0PEAPEAUIDataSourceReader@Private@345@@Z @ 0x180125980
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VDataSourceReader@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEA_KAEA_K@Details@WRL2@Microsoft@@YAJPEAPEAVDataSourceReader@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEA_K2@Z @ 0x180120C38 (--$MakeAndInitialize2@VDataSourceReader@Private@Composition@UI@Windows@@V12345@PEAVCompositor@34.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::XUCPrivate::CreateDataSourceReader(
        Windows::UI::Composition::CompositorCommon::XUCPrivate *this,
        __int64 a2,
        unsigned __int64 a3,
        struct Windows::UI::Composition::Private::IDataSourceReader **a4)
{
  struct Windows::UI::Composition::Compositor *v4; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  struct Windows::UI::Composition::Compositor *v12; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Windows::UI::Composition::CompositionObject *v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = (Windows::UI::Composition::CompositorCommon::XUCPrivate *)((char *)this - 216);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 216));
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    v14 = 0LL;
    v15 = a3;
    *(_QWORD *)v11 = a2;
    v12 = v4;
    v9 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::DataSourceReader,Windows::UI::Composition::Private::DataSourceReader,Windows::UI::Composition::Compositor *,unsigned __int64 &,unsigned __int64 &>(
           &v14,
           &v12,
           (unsigned __int64 *)v11,
           &v15);
    v8 = v9;
    if ( v9 >= 0 )
    {
      *a4 = (struct Windows::UI::Composition::Private::IDataSourceReader *)(((unsigned __int64)v14 + 136) & ((unsigned __int128)-(__int128)(unsigned __int64)v14 >> 64));
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1505,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
      DoStackCaptureDirect(v8, 0x1C5Cu);
    }
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v4);
  return v8;
}
