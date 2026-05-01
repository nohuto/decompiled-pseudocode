/*
 * XREFs of ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180048890
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1800488E4 (LookUpTableFlushComplete.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     LookUpTableFlushPartial @ 0x18008FCE0 (LookUpTableFlushPartial.c)
 */

void __fastcall TlgAggregateInternalRegisteredProviderEtwCallback(
        const struct _GUID *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        _QWORD *a7)
{
  void (__fastcall *v8)(const struct _GUID *, _QWORD, __int64, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD); // rax

  v8 = (void (__fastcall *)(const struct _GUID *, _QWORD, __int64, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD))a7[39];
  if ( v8 )
    v8(a1, a2, a3, a4, a5, a6, a7[40]);
  if ( a2 == 1 )
  {
    LookUpTableFlushComplete(a7);
  }
  else if ( a2 == 2 )
  {
    LookUpTableFlushPartial(a7);
  }
}
