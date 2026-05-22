/*
 * XREFs of ?CreateSurface@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z @ 0x180008140
 * Callers:
 *     ?CreateSurface@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z @ 0x1800ABF90 (-CreateSurface@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA.c)
 *     ?CreateSurface@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z @ 0x1800ABFB0 (-CreateSurface@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJIIW4DXGI_FORMAT@@W4DXGI_ALP.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateSurface(
        Windows::UI::Composition::InteropCompositor::Api *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum DXGI_ALPHA_MODE a5,
        struct IDCompositionSurface **a6)
{
  Microsoft::WRL2::ContextSession *v6; // rdi
  int v11; // eax
  unsigned int v12; // ebx

  v6 = (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1200);
  Microsoft::WRL2::ContextSession::BeginApiEntry((Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1200));
  if ( (*((_BYTE *)v6 + 32) & 2) != 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, enum DXGI_ALPHA_MODE, struct IDCompositionSurface **))(**((_QWORD **)this - 93) + 64LL))(
            *((_QWORD *)this - 93),
            a2,
            a3,
            a4,
            a5,
            a6);
    v12 = v11;
    if ( v11 < 0 )
      DoStackCaptureDirect(v11, 0x1EAu);
    else
      v12 = 0;
  }
  else
  {
    v12 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v12;
}
