/*
 * XREFs of ?CreateSpriteShape@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSpriteShape@345@@Z @ 0x18008B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$InitApiData@AEAY0CC@$$CBGAEAY0BC@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CC@$$CBGAEAY0BC@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x180065E64 (--$InitApiData@AEAY0CC@$$CBGAEAY0BC@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CC@$$CB.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CreateSpriteShape@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEAPEAVCompositionSpriteShape@234@@Z @ 0x18008BA98 (-CreateSpriteShape@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEA.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateSpriteShape(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct Windows::UI::Composition::ICompositionSpriteShape **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF
  const char *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( _InterlockedIncrement(&dword_1802208B4) == 1 )
  {
    v9 = 0LL;
    v8 = (Microsoft::WRL2::NestableRuntimeClass *)&dword_1802208B4;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[34],unsigned short const (&)[18],std::nullptr_t,long volatile *>(
      (__int64)this,
      L"CreateSpriteShape",
      &v9,
      (volatile int **)&v8);
  }
  *a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 176);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v4->SpinCount & 2) != 0 )
  {
    v8 = 0LL;
    v5 = Windows::UI::Composition::CompositorCommon::CreateSpriteShape(
           (Windows::UI::Composition::CompositorCommon *)v4,
           0LL,
           &v8);
    v6 = v5;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0x20FBu);
      if ( v8 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::ICompositionSpriteShape *)(((unsigned __int64)v8 + 192) & -(__int64)(v8 != 0LL));
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
