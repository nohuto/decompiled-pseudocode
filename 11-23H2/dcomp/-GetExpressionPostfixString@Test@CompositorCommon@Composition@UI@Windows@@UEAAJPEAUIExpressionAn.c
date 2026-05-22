/*
 * XREFs of ?GetExpressionPostfixString@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@345@PEAG_K@Z @ 0x180127D90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ?ToString@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAG_K@Z @ 0x180163690 (-ToString@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAG_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Test::GetExpressionPostfixString(
        struct _RTL_CRITICAL_SECTION *this,
        struct IUnknown *a2,
        unsigned __int16 *a3,
        unsigned __int64 a4)
{
  struct Microsoft::WRL2::ContextSession *v4; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct Microsoft::WRL2::ContextSession *)&this[-9];
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 9);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    if ( !a2 )
    {
      v8 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x1F1Au);
      goto LABEL_12;
    }
    v9 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           v4,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::ExpressionAnimation::s_InterfaceType,
           &v12);
    v8 = v9;
    if ( v9 < 0 )
    {
      v10 = 7968;
    }
    else
    {
      v9 = Windows::UI::Composition::ExpressionAnimationBuilder::ToString(
             (struct Microsoft::WRL2::ContextRuntimeClass *)((char *)v12 + 360),
             a3,
             a4);
      v8 = v9;
      if ( v9 >= 0 )
      {
        v8 = 0;
LABEL_11:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v12);
        goto LABEL_12;
      }
      v10 = 7970;
    }
    DoStackCaptureDirect(v9, v10);
    goto LABEL_11;
  }
  v8 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_12:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v4);
  return v8;
}
