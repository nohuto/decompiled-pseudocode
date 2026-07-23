/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x14076E4C8
 * Callers:
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 * Callees:
 *     ObDereferenceObjectEx @ 0x1402A27E8 (ObDereferenceObjectEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x14073FE00 (ExMapHandleToPointer.c)
 */

void __fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  volatile signed __int64 *v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // rdx
  bool v9; // zf
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+20h] [rbp-18h]

  --*(_WORD *)(a1 + 486);
  v5 = (volatile signed __int64 *)ExMapHandleToPointer((unsigned int *)PspCidTable, a2);
  v11 = 0LL;
  v6 = (unsigned __int64)*v5 >> 1;
  *(_QWORD *)&v11 = *v5 & 0xFFFFFFFFFFFE0001uLL;
  *v5 = v11;
  v7 = (unsigned __int16)v6;
  v8 = PspCidTable;
  _InterlockedExchangeAdd64(v5, 1uLL);
  _InterlockedOr(v10, 0);
  if ( *(_QWORD *)(v8 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
  v9 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
  if ( v9 && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery();
  if ( v7 )
    ObDereferenceObjectEx(a3);
}
