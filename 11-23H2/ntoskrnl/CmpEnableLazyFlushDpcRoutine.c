/*
 * XREFs of CmpEnableLazyFlushDpcRoutine @ 0x1403C6C20
 * Callers:
 *     <none>
 * Callees:
 *     CmpEnableLazyFlush @ 0x1403B4A38 (CmpEnableLazyFlush.c)
 *     _local_unwind @ 0x1403D96F0 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine4 @ 0x14042BBE0 (KiCustomAccessRoutine4.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall CmpEnableLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _DWORD v8[56]; // [rsp+0h] [rbp-108h] BYREF
  _DWORD *v9; // [rsp+E0h] [rbp-28h]

  v9 = v8;
  memset(&v8[32], 0, 0x5DuLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v8[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v8[53] + 1) = SystemArgument1;
    *(_QWORD *)((char *)&v8[41] + 1) = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)((char *)&v8[43] + 1) = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine4(DeferredContext);
  }
  CmpEnableLazyFlush(1);
}
