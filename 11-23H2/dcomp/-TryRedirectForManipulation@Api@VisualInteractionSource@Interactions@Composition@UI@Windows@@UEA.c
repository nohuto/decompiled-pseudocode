/*
 * XREFs of ?TryRedirectForManipulation@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAUIPointerPoint@Input@56@@Z @ 0x18011E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?TryRedirectForManipulation@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAUIPointerPoint@Input@45@@Z @ 0x1801622A8 (-TryRedirectForManipulation@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPE.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Api::TryRedirectForManipulation(
        Windows::UI::Composition::Interactions::VisualInteractionSource::Api *this,
        struct Windows::UI::Input::IPointerPoint *a2)
{
  Windows::UI::Composition::Interactions::VisualInteractionSource *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // eax

  v2 = (Windows::UI::Composition::Interactions::VisualInteractionSource::Api *)((char *)this - 128);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      v8 = Windows::UI::Composition::Interactions::VisualInteractionSource::TryRedirectForManipulation(v2, a2);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 1649;
      v7 = v8;
    }
    else
    {
      v5 = -2147024809;
      v6 = 1647;
      v7 = -2147024809;
    }
    DoStackCaptureDirect(v7, v6);
    goto LABEL_9;
  }
  v5 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
