/*
 * XREFs of sub_140248EF0 @ 0x140248EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140248EF0(struct _KDPC *Dpc, _DWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  int v5; // ebx

  v5 = ((unsigned __int8)(*DeferredContext >> 10) - 1) & 1;
  if ( v5 != DeferredContext[82] )
  {
    sub_14042A5E0(
      &DeferredContext[32 * (unsigned __int64)(((unsigned __int8)(*DeferredContext >> 10) - 1) & 1) + 1],
      128LL);
    DeferredContext[82] = v5;
  }
}
