/*
 * XREFs of ?CreateEffectGroup@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionEffectGroup@@@Z @ 0x180010000
 * Callers:
 *     ?CreateEffectGroup@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionEffectGroup@@@Z @ 0x1800ABCB0 (-CreateEffectGroup@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionEffec.c)
 *     ?CreateEffectGroup@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositionEffectGroup@@@Z @ 0x1800ABCD0 (-CreateEffectGroup@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositionEff.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateEffectGroup(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct IDCompositionEffectGroup **a2)
{
  Microsoft::WRL2::ContextSession *v2; // rdi
  int v5; // eax
  unsigned int v6; // ebx

  v2 = (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1200);
  Microsoft::WRL2::ContextSession::BeginApiEntry((Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1200));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct IDCompositionEffectGroup **))(**((_QWORD **)this - 93) + 184LL))(
           *((_QWORD *)this - 93),
           a2);
    v6 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x2A9u);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
