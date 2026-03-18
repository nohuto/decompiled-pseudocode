/*
 * XREFs of ?PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z @ 0x1C0214A74
 * Callers:
 *     FreeSpb @ 0x1C00DCA08 (FreeSpb.c)
 * Callees:
 *     <none>
 */

void __fastcall PostSpbApc(struct _KAPC *a1, struct tagWND *a2, __int64 a3)
{
  char v6; // [rsp+30h] [rbp-18h]

  v6 = 0;
  KeInitializeApc(a1, KeGetCurrentThread(), 0LL, SpbApcRundown, SpbApcRundown, SpbApc, v6, 0LL);
  KeInsertQueueApc(a1, a2, a3, 0LL);
}
