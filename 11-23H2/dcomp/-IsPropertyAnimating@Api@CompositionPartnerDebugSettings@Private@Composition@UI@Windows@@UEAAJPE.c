/*
 * XREFs of ?IsPropertyAnimating@Api@CompositionPartnerDebugSettings@Private@Composition@UI@Windows@@UEAAJPEAUICompositionObject@456@PEAUHSTRING__@@PEAE@Z @ 0x18012F940
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionPartnerDebugSettings::Api::IsPropertyAnimating(
        Windows::UI::Composition::Private::CompositionPartnerDebugSettings::Api *this,
        struct Windows::UI::Composition::ICompositionObject *a2,
        HSTRING a3,
        unsigned __int8 *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v8; // edi
  unsigned int v9; // edx

  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 96) & 2) != 0 )
  {
    v8 = 0;
    if ( a2 )
    {
      if ( a4 )
      {
        *a4 = 0;
        Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(
          *((Windows::UI::Composition::CompositorCommon **)this - 13),
          1);
        *a4 = 0;
        goto LABEL_9;
      }
      v9 = 94;
    }
    else
    {
      v9 = 93;
    }
    v8 = -2147024809;
    DoStackCaptureDirect(-2147024809, v9);
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v8;
}
