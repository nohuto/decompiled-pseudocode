/*
 * XREFs of ?TelemetrySetApplicationId@Api@InteropCompositor@Composition@UI@Windows@@UEAAJGPEBG@Z @ 0x18008AF50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::TelemetrySetApplicationId(
        Windows::UI::Composition::InteropCompositor::Api *this,
        unsigned __int16 a2,
        const unsigned __int16 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1232);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1232));
  if ( (v3->SpinCount & 2) != 0 )
  {
    v7 = (*((_QWORD *)this - 97) + 40LL) & -(__int64)(*((_QWORD *)this - 97) != 0LL);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, const unsigned __int16 *))(*(_QWORD *)v7 + 48LL))(v7, a2, a3);
    v9 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x65Au);
    else
      v9 = 0;
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v9;
}
