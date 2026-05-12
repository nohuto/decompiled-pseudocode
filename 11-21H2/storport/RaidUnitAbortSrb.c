/*
 * XREFs of RaidUnitAbortSrb @ 0x1C0054338
 * Callers:
 *     StorTickEventQueue @ 0x1C0013B30 (StorTickEventQueue.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C000B570 (RaUnitAcquireRemoveLock.c)
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0021AA0 (StorBuildSynchronousScsiRequest.c)
 */

__int64 __fastcall RaidUnitAbortSrb(__int64 a1, __int64 a2)
{
  __int64 v5; // rbp
  _WORD *Srb; // rbx
  _QWORD *Pool; // rax
  __int64 v8; // r8
  void *v9; // r14
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  char v13; // al
  PIRP v14; // rax
  __int64 v15; // r8
  IRP *v16; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STATUS_BLOCK v18; // [rsp+20h] [rbp-18h] BYREF

  v18 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 24);
  Srb = (_WORD *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x10u, *(_BYTE *)(v5 + 442), 0);
  if ( !Srb )
    return 3221225495LL;
  Pool = (_QWORD *)RaidAllocatePool(64LL, 8LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  v9 = Pool;
  if ( !Pool )
  {
LABEL_16:
    ExFreePoolWithTag(Srb, 0x72536152u);
    return 3221225495LL;
  }
  *Pool = a2;
  if ( *(_BYTE *)(v5 + 442) == 1 )
  {
    v10 = *((unsigned int *)Srb + 13);
    *((_DWORD *)Srb + 5) = 16;
    *((_BYTE *)Srb + v10 + 8) = *(_BYTE *)(a1 + 96);
    *((_BYTE *)Srb + v10 + 9) = *(_BYTE *)(a1 + 97);
    *((_BYTE *)Srb + v10 + 10) = *(_BYTE *)(a1 + 98);
    v11 = 10;
    *((_DWORD *)Srb + 8) = -1;
    *((_QWORD *)Srb + 10) = 0LL;
    *((_DWORD *)Srb + 6) = 524562;
    *((_QWORD *)Srb + 8) = Pool;
    *((_DWORD *)Srb + 15) = 8;
    if ( *(_BYTE *)(a1 + 3232) )
    {
      if ( *(_DWORD *)(a1 + 3252) < 0xAu )
        v11 = *(_DWORD *)(a1 + 3252);
    }
    *((_DWORD *)Srb + 10) = v11;
    Srb[19] = 33;
  }
  else
  {
    *((_BYTE *)Srb + 2) = 16;
    *Srb = 88;
    v12 = 10;
    *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 96);
    *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 97);
    v13 = *(_BYTE *)(a1 + 98);
    *((_QWORD *)Srb + 6) = 0LL;
    *((_BYTE *)Srb + 7) = v13;
    *((_DWORD *)Srb + 3) = 524562;
    *((_BYTE *)Srb + 8) = -1;
    *((_QWORD *)Srb + 3) = v9;
    *((_DWORD *)Srb + 4) = 8;
    if ( *(_BYTE *)(a1 + 3232) && *(_DWORD *)(a1 + 3252) < 0xAu )
      v12 = *(_DWORD *)(a1 + 3252);
    *((_DWORD *)Srb + 5) = v12;
    *((_BYTE *)Srb + 9) = 33;
  }
  v14 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, v8, &v18);
  v16 = v14;
  if ( !v14 )
  {
    ExFreePoolWithTag(v9, 0x72536152u);
    goto LABEL_16;
  }
  CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
  LOBYTE(v15) = 1;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RaidUnitAbortSrbCompletion;
  CurrentStackLocation[-1].Context = Srb;
  CurrentStackLocation[-1].Control = -32;
  RaUnitAcquireRemoveLock(a1, (__int64)v16, v15);
  v16->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v16);
  return 259LL;
}
