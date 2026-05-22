/*
 * XREFs of ?put_Condition@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013D910
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ??4?$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVExpressionAnimation@Composition@UI@Windows@@@Z @ 0x1800B6908 (--4-$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVExpres.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue::Api::put_Condition(
        Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue::Api *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx
  int v6; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    if ( a2 )
    {
      v8 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v8);
      v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
             (struct Microsoft::WRL2::ContextSession *)v2,
             a2,
             (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::ExpressionAnimation::s_InterfaceType,
             &v8);
      v5 = v6;
      if ( v6 < 0 )
      {
        DoStackCaptureDirect(v6, 0x9Bu);
      }
      else
      {
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::ExpressionAnimation>::operator=(
          (Microsoft::WRL2::NestableRuntimeClass **)this - 2,
          v8);
        v5 = 0;
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v8);
    }
    else
    {
      v5 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x98u);
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
