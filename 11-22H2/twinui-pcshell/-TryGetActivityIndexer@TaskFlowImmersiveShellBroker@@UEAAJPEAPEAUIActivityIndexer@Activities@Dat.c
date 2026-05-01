/*
 * XREFs of ?TryGetActivityIndexer@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIActivityIndexer@Activities@Data@Internal@Windows@@@Z @ 0x1804A20A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::TryGetActivityIndexer(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::Internal::Data::Activities::IActivityIndexer **a2)
{
  struct Windows::Internal::Data::Activities::IActivityIndexer *v2; // rcx

  *a2 = 0LL;
  v2 = (struct Windows::Internal::Data::Activities::IActivityIndexer *)*((_QWORD *)this + 33);
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct Windows::Internal::Data::Activities::IActivityIndexer *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return 0LL;
}
