/*
 * XREFs of ?CreateRectangleClipWithSides@Api@CompositorCommon@Composition@UI@Windows@@UEAAJMMMMPEAPEAUIRectangleClip@345@@Z @ 0x1801265E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateRectangleClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMUVector2@Numerics@Foundation@4@000PEAPEAVRectangleClip@234@@Z @ 0x18006EA08 (-CreateRectangleClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMUVector2@Numerics@Foundat.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateRectangleClipWithSides(
        Windows::UI::Composition::CompositorCommon::Api *this,
        float a2,
        float a3,
        float a4,
        float a5,
        struct Windows::UI::Composition::IRectangleClip **a6)
{
  struct Windows::UI::Composition::IRectangleClip **v6; // rsi
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __m128d v11; // [rsp+28h] [rbp-60h]

  v6 = a6;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 192);
  *a6 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 192));
  if ( (v7->SpinCount & 2) != 0 )
  {
    a6 = 0LL;
    v11 = _mm_unpacklo_pd((__m128d)0LL, (__m128d)0LL);
    v9 = Windows::UI::Composition::CompositorCommon::CreateRectangleClip(
           (__int64)v7,
           a2,
           a3,
           a4,
           SLOBYTE(a5),
           SLOBYTE(v11.m128d_f64[0]),
           SLOBYTE(v11.m128d_f64[1]),
           SLOBYTE(v11.m128d_f64[0]),
           SLOBYTE(v11.m128d_f64[1]),
           &a6);
    v8 = v9;
    if ( v9 < 0 )
    {
      DoStackCaptureDirect(v9, 0x17ACu);
      if ( a6 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)a6);
    }
    else
    {
      *v6 = (struct Windows::UI::Composition::IRectangleClip *)((unsigned __int64)(a6 + 21) & -(__int64)(a6 != 0LL));
      v8 = 0;
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v8;
}
