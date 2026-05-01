/*
 * XREFs of ?CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z @ 0x180002A6C
 * Callers:
 *     CrmActivityWindowClosedReasonSubscribe @ 0x180002A60 (CrmActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1800050B8 (-CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

__int64 __fastcall CrmpActivityWindowClosedReasonSubscribe(
        struct _CRMP_ACTIVITY_CONTEXT *a1,
        void (*a2)(void *, void *, void *),
        void *a3)
{
  int v6; // esi
  CLIENT_CALL_RETURN v7; // rbx

  v6 = 1;
  v7.Pointer = NdrClientCall3(
                 (MIDL_STUBLESS_PROXY_INFO *)&stru_1800216E0,
                 8u,
                 0LL,
                 *((_QWORD *)a1 + 1),
                 *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL),
                 (char *)a1 + 88).Pointer;
  if ( SLODWORD(v7.Simple) >= 0 )
  {
    *((_QWORD *)a1 + 9) = a2;
    *((_QWORD *)a1 + 10) = a3;
    LODWORD(v7.Pointer) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD))RtlSubscribeWnfStateChangeNotification)(
                            (char *)a1 + 96,
                            *((_QWORD *)a1 + 11),
                            0LL,
                            CrmpActivityWindowClosedWNFCallback,
                            a1,
                            0LL,
                            0,
                            0,
                            v7.Pointer,
                            (CLIENT_CALL_RETURN)v7.Simple);
    if ( SLODWORD(v7.Simple) >= 0 )
    {
      v6 = 0;
      LODWORD(v7.Pointer) = 0;
    }
  }
  if ( v6 )
    CrmpActivityWindowClosedReasonUnsubscribe(a1);
  return LODWORD(v7.Pointer);
}
