/*
 * XREFs of VidSchiProcessSuspendContextCompletedDpc @ 0x1C00435F8
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00054C0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0038574 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0010BF0 (VidSchiSignalRegisteredEvent.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x1C003ED08 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0041394 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiProcessSuspendContextCompletedDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rbp
  struct _SLIST_ENTRY *v2; // rsi
  struct _SLIST_ENTRY *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r14
  _DWORD *v6; // rbx
  struct _SLIST_ENTRY *v7; // rcx
  _QWORD v8[4]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v9; // [rsp+50h] [rbp-28h]

  Next = ListEntry[2].Next;
  v2 = (struct _SLIST_ENTRY *)*((_QWORD *)&ListEntry[2].Next + 1);
  v3 = Next[1].Next;
  v4 = *((_QWORD *)&Next->Next + 1);
  v5 = *((_QWORD *)&v3[1].Next + 1);
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&v3[503], ListEntry);
  v9 = 256;
  v8[0] = v5 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v8);
  v6 = (_DWORD *)(*((_QWORD *)&v3[11].Next + 1) + 112LL * HIDWORD(v3[12].Next));
  memset(v6, 0, 0x70uLL);
  HIDWORD(v3[12].Next) = (HIDWORD(v3[12].Next) + 1) & (LODWORD(v3[12].Next) - 1);
  *v6 = 12;
  *((_QWORD *)v6 + 2) = Next;
  *(struct _SLIST_ENTRY *)(v6 + 6) = Next[10];
  *((_QWORD *)v6 + 5) = v2;
  v7 = (struct _SLIST_ENTRY *)*((_QWORD *)&Next[10].Next + 1);
  if ( v2 != v7 )
  {
    if ( v2 > Next[10].Next )
    {
      WdLogSingleEntry5(0LL, 281LL, 17LL, v2, v7, Next[10].Next);
      __debugbreak();
    }
    if ( v2 >= v7 )
    {
      _InterlockedExchange((volatile __int32 *)&v3[30].Next + 2, 1);
      _InterlockedIncrement64((volatile signed __int64 *)&v3[108]);
      *((_QWORD *)&Next[10].Next + 1) = v2;
      if ( v2 == Next[10].Next )
      {
        --*(_DWORD *)(v5 + 72);
        --*((_DWORD *)&v3[107].Next + 2);
        VidSchiCheckHwSchNodeProgress((struct _VIDSCH_NODE *)v3, 0);
        VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v4 + 168));
      }
    }
  }
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v8);
}
