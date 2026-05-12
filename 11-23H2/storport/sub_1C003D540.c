/*
 * XREFs of sub_1C003D540 @ 0x1C003D540
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0019D54 @ 0x1C0019D54 (sub_1C0019D54.c)
 *     sub_1C0019ED0 @ 0x1C0019ED0 (sub_1C0019ED0.c)
 */

void __fastcall sub_1C003D540(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( !(unsigned int)sub_1C0019D54(v4) )
    sub_1C0019ED0(v4, 0LL);
}
