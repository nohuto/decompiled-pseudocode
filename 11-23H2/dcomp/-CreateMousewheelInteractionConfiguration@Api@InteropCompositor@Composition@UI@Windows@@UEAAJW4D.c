/*
 * XREFs of ?CreateMousewheelInteractionConfiguration@Api@InteropCompositor@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_MOUSEWHEEL@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z @ 0x18015D530
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateMousewheelInteractionConfiguration(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax

  v3 = a1 - 1216;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 1216));
  if ( (*(_BYTE *)(v3 + 32) & 2) != 0 )
  {
    v8 = (*(_QWORD *)(a1 - 760) + 16LL) & -(__int64)(*(_QWORD *)(a1 - 760) != 0LL);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 544LL))(v8, a2, a3);
    v7 = v9;
    if ( v9 < 0 )
      DoStackCaptureDirect(v9, 0x4B1u);
    else
      v7 = 0;
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v7;
}
