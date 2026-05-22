/*
 * XREFs of ?CreatePenInteractionConfiguration@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_INTERACTION_TYPE_PEN@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z @ 0x18015D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreatePenInteractionConfiguration(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax

  v5 = a1 - 1216;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 1216));
  if ( (*(_BYTE *)(v5 + 32) & 2) != 0 )
  {
    v11 = (*(_QWORD *)(a1 - 760) + 16LL) & -(__int64)(*(_QWORD *)(a1 - 760) != 0LL);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v11 + 328LL))(
            v11,
            a2,
            a3,
            a4,
            a5);
    v10 = v12;
    if ( v12 < 0 )
      DoStackCaptureDirect(v12, 0x497u);
    else
      v10 = 0;
  }
  else
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v5);
  return v10;
}
