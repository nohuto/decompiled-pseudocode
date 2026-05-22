/*
 * XREFs of ?get_Brush@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z @ 0x180077480
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::SpriteVisual::Api::get_Brush(
        Windows::UI::Composition::SpriteVisual::Api *this,
        struct Windows::UI::Composition::ICompositionBrush **a2)
{
  struct Windows::UI::Composition::ICompositionBrush *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  volatile signed __int32 *v6; // rcx

  v3 = 0LL;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 36);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 280) & 2) != 0 )
  {
    v6 = (volatile signed __int32 *)*((_QWORD *)this + 3);
    if ( v6 )
    {
      v3 = (struct Windows::UI::Composition::ICompositionBrush *)(v6 + 34);
      if ( _InterlockedIncrement(v6 + 4) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 80LL))(v6);
    }
    *a2 = v3;
    Microsoft::WRL2::ContextSession::EndApiEntry(v5);
    return 0LL;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v5);
    return 2147483667LL;
  }
}
