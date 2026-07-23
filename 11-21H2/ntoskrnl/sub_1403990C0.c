/*
 * XREFs of sub_1403990C0 @ 0x1403990C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403AAA10 @ 0x1403AAA10 (sub_1403AAA10.c)
 *     sub_1403D2BFC @ 0x1403D2BFC (sub_1403D2BFC.c)
 */

void __fastcall sub_1403990C0(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(DeferredContext + 172);
  if ( DeferredContext[128] )
    sub_1403D2BFC(v4, DeferredContext, SystemArgument1, SystemArgument2);
  else
    sub_1403AAA10(v4, DeferredContext, SystemArgument1, SystemArgument2);
}
