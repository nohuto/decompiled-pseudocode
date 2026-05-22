/*
 * XREFs of ?get_PointerWheelConfig@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIInteractionSourceConfiguration@3456@@Z @ 0x18011E980
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?GetPointerWheelConfig@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAPEAVInteractionSourceConfiguration@2345@@Z @ 0x18011D994 (-GetPointerWheelConfig@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAPEAV.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Api::get_PointerWheelConfig(
        Windows::UI::Composition::Interactions::VisualInteractionSource::Api *this,
        struct Windows::UI::Composition::Interactions::IInteractionSourceConfiguration **a2)
{
  Windows::UI::Composition::Interactions::VisualInteractionSource *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  int PointerWheelConfig; // eax
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::Interactions::VisualInteractionSource::Api *)((char *)this - 144);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    PointerWheelConfig = Windows::UI::Composition::Interactions::VisualInteractionSource::GetPointerWheelConfig(v2, &v8);
    v5 = PointerWheelConfig;
    if ( PointerWheelConfig < 0 )
    {
      DoStackCaptureDirect(PointerWheelConfig, 0x699u);
      if ( v8 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::Interactions::IInteractionSourceConfiguration *)(((unsigned __int64)v8
                                                                                              + 128) & -(__int64)(v8 != 0LL));
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
