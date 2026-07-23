/*
 * XREFs of sub_140A91368 @ 0x140A91368
 * Callers:
 *     sub_140A90FE0 @ 0x140A90FE0 (sub_140A90FE0.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     KeSetTimerEx @ 0x1403575C0 (KeSetTimerEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A914C4 @ 0x140A914C4 (sub_140A914C4.c)
 */

__int64 __fastcall sub_140A91368(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebp
  __int64 Pool2; // rax
  __int64 v11; // rsi
  struct _KTIMER *v12; // r15
  __int64 v13; // rdi
  void *v14; // rdi

  v8 = 1;
  Pool2 = ExAllocatePool2(64LL, 0xB0uLL, 0x64707249u);
  v11 = Pool2;
  if ( Pool2 )
  {
    v12 = (struct _KTIMER *)(Pool2 + 104);
    KeInitializeTimerEx((PKTIMER)(Pool2 + 104), SynchronizationTimer);
    *(_DWORD *)(a2 + 56) |= 0x10u;
    *(_QWORD *)(v11 + 32) = a5;
    *(_QWORD *)v11 = a2;
    *(_QWORD *)(v11 + 8) = a1;
    *(_QWORD *)(v11 + 24) = a4;
    *(_QWORD *)(v11 + 16) = a3;
    *(_BYTE *)(v11 + 172) = *(_BYTE *)(a2 + 185);
    v13 = *(_QWORD *)(a2 + 216);
    if ( v13 && (v14 = *(void **)(v13 + 40)) != 0LL )
      ObfReferenceObject(v14);
    else
      v14 = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      *(_DWORD *)(v11 + 168) = 2;
      KeInitializeDpc((PRKDPC)(v11 + 40), (PKDEFERRED_ROUTINE)sub_140A91350, (PVOID)v11);
      KeSetTimerEx(v12, (LARGE_INTEGER)-3000LL, 0, (PKDPC)(v11 + 40));
    }
    else
    {
      *(_DWORD *)(v11 + 168) = 1;
      KeSetTimerEx(v12, (LARGE_INTEGER)-3000LL, 0, 0LL);
      v8 = sub_140A914C4(v11);
      if ( !v8 )
      {
        KeCancelTimer(v12);
        ExFreePoolWithTag((PVOID)v11, 0);
        *(_DWORD *)(a2 + 56) &= ~0x10u;
        if ( v14 )
          ObfDereferenceObject(v14);
      }
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
