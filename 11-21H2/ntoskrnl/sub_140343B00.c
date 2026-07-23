/*
 * XREFs of sub_140343B00 @ 0x140343B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023B798 @ 0x14023B798 (sub_14023B798.c)
 *     sub_140304CE0 @ 0x140304CE0 (sub_140304CE0.c)
 *     sub_140343BA0 @ 0x140343BA0 (sub_140343BA0.c)
 *     sub_1405DD1A8 @ 0x1405DD1A8 (sub_1405DD1A8.c)
 *     sub_1405DD260 @ 0x1405DD260 (sub_1405DD260.c)
 *     sub_1405DD2E0 @ 0x1405DD2E0 (sub_1405DD2E0.c)
 */

void __fastcall sub_140343B00(
        struct _KDPC *Dpc,
        volatile __int32 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // bl
  __int64 v6; // rax

  v5 = _InterlockedExchange(DeferredContext + 8486, 0);
  if ( (v5 & 1) != 0 )
    sub_140304CE0((__int64)(DeferredContext + 8492), 0, 0);
  if ( (v5 & 2) != 0 )
    sub_1405DD2E0(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 4) != 0 )
  {
    v6 = *((_QWORD *)DeferredContext + 4247);
    if ( *(_BYTE *)(v6 + 124) )
    {
      *(_BYTE *)(v6 + 124) = 0;
      sub_14023B798((__int64)DeferredContext, 1);
    }
    sub_14023B798((__int64)DeferredContext, 0);
  }
  if ( (v5 & 8) != 0 )
    sub_1405DD1A8(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 0x10) != 0 )
    sub_1405DD260(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  if ( _InterlockedExchangeAdd(&dword_140C204B0, 0xFFFFFFFF) == 1 )
    sub_140343BA0(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
}
