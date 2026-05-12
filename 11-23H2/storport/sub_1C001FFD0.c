/*
 * XREFs of sub_1C001FFD0 @ 0x1C001FFD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C001FFFC @ 0x1C001FFFC (sub_1C001FFFC.c)
 */

void __fastcall sub_1C001FFD0(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  _DWORD *v4; // rcx

  v4 = (_DWORD *)DeferredContext[8];
  if ( v4 && *v4 == 1094997074 && v4[22] != 5 )
    sub_1C001FFFC(v4, DeferredContext, SystemArgument1, SystemArgument2);
}
