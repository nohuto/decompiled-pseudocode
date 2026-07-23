/*
 * XREFs of sub_1403B6350 @ 0x1403B6350
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B63D0 @ 0x1403B63D0 (sub_1403B63D0.c)
 *     _local_unwind @ 0x1403E0F50 (_local_unwind.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14042BCD0 @ 0x14042BCD0 (sub_14042BCD0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1403B6350(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _DWORD v8[64]; // [rsp+0h] [rbp-128h] BYREF
  _DWORD *v9; // [rsp+100h] [rbp-28h]

  v9 = v8;
  memset(&v8[40], 0, 0x5DuLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v8[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v8[61] + 1) = SystemArgument1;
    *(_QWORD *)((char *)&v8[49] + 1) = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)((char *)&v8[51] + 1) = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    sub_14042BCD0(DeferredContext);
  }
  sub_1403B63D0(1LL);
}
