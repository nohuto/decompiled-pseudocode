/*
 * XREFs of ?CallbackThunk@?$KWorkItemBase@UBindEngine@Ndis@@V?$KWorkItem@UBindEngine@Ndis@@@@@@CAXPEAX@Z @ 0x1C0117900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KWorkItemBase<Ndis::BindEngine,KWorkItem<Ndis::BindEngine>>::CallbackThunk(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 40))(*(_QWORD *)(a1 + 32));
}
