/*
 * XREFs of ?get_Shapes@Api@ShapeVisual@Composition@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@5@@Z @ 0x180081260
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::ShapeVisual::Api::get_Shapes(__int64 a1, volatile signed __int32 **a2)
{
  unsigned int v3; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rbx

  v3 = 0;
  *a2 = 0LL;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 328);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(a1 - 320) & 2) != 0 )
  {
    v6 = *(volatile signed __int32 **)(a1 - 8);
    v7 = 0LL;
    if ( v6 )
    {
      v7 = v6 + 40;
      if ( _InterlockedIncrement(v6 + 4) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 80LL))(v6);
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
