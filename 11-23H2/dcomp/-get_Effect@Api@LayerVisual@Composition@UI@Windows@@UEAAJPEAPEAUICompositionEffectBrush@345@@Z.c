/*
 * XREFs of ?get_Effect@Api@LayerVisual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionEffectBrush@345@@Z @ 0x180094DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::LayerVisual::Api::get_Effect(
        Windows::UI::Composition::LayerVisual::Api *this,
        struct Windows::UI::Composition::ICompositionEffectBrush **a2)
{
  unsigned int v3; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v6; // rcx
  struct Windows::UI::Composition::ICompositionEffectBrush *v7; // rbx

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 36);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 280) & 2) != 0 )
  {
    v6 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 5);
    v7 = 0LL;
    if ( v6 )
    {
      v7 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v6 + 152);
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v6);
    }
    *a2 = v7;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
