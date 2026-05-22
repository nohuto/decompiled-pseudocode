/*
 * XREFs of ?OnPeerConnected@MPCManagerConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z @ 0x1800BC8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerConnection::OnPeerConnected(
        MPCManagerConnection *this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  struct Microsoft::Bamo::BamoPrincipal *v4; // rcx

  *a3 = 1;
  v4 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 31);
  *a4 = v4;
  (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoPrincipal *, struct MPCManagerBamo_AutoBamos::BamoPeer *))v4)(
    v4,
    a2);
  return 0LL;
}
