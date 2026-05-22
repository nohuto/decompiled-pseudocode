/*
 * XREFs of ?StopAnimation@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180073FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Api::StopAnimation(
        Windows::UI::Composition::CompositionObject::Api *this,
        HSTRING a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  char *v3; // rdi
  int v5; // eax
  unsigned int v6; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  v3 = (char *)this - 40;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (v3[32] & 2) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(char *, HSTRING))(*(_QWORD *)v3 + 176LL))(v3, a2);
    v6 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x426u);
    else
      v6 = 0;
    Microsoft::WRL2::ContextSession::EndApiEntry(v2);
    return v6;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v2);
    return 2147483667LL;
  }
}
