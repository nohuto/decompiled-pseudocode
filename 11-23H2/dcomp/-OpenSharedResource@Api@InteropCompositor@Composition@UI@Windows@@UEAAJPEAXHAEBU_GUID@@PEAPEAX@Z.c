/*
 * XREFs of ?OpenSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXHAEBU_GUID@@PEAPEAX@Z @ 0x180089C80
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::OpenSharedResource(
        Windows::UI::Composition::InteropCompositor::Api *this,
        void *a2,
        unsigned int a3,
        const struct _GUID *a4,
        void **a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1216);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1216));
  if ( (v5->SpinCount & 2) != 0 )
  {
    v10 = (*((_QWORD *)this - 95) + 16LL) & -(__int64)(*((_QWORD *)this - 95) != 0LL);
    v11 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, const struct _GUID *, void **))(*(_QWORD *)v10 + 344LL))(
            v10,
            a2,
            a3,
            a4,
            a5);
    v12 = v11;
    if ( v11 < 0 )
      DoStackCaptureDirect(v11, 0x4C0u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v12;
}
