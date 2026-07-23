/*
 * XREFs of MiLoadHotPatchForUserSid @ 0x140A385A8
 * Callers:
 *     NtManageHotPatch @ 0x1407D41C0 (NtManageHotPatch.c)
 * Callees:
 *     RtlLengthSid @ 0x140227B50 (RtlLengthSid.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     RtlAvlInsertNodeEx @ 0x140288350 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     RtlHashBytes2 @ 0x14041A7F4 (RtlHashBytes2.c)
 *     RtlCopySid @ 0x140715180 (RtlCopySid.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     MiAllocateHotPatchRecord @ 0x140A34A48 (MiAllocateHotPatchRecord.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140A368E4 (MiCompareUserSidHotPatchNodes.c)
 *     MiHotPatchAllProcesses @ 0x140A376B8 (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x140A37DF0 (MiInsertHotPatchRecord.c)
 *     MiOpenHotPatchFile @ 0x140A3A600 (MiOpenHotPatchFile.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadHotPatchForUserSid(const void **a1, void *a2, int *a3)
{
  int v6; // ebx
  _DWORD *HotPatchRecord; // r15
  struct _KTHREAD *CurrentThread; // rdi
  ULONG v9; // r13d
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  signed __int8 v13; // cf
  __int64 v14; // rbx
  _QWORD *v15; // rbx
  bool v16; // r14
  int v17; // eax
  _QWORD *v18; // rax
  _QWORD *Pool; // rax
  unsigned __int64 v20; // rbp
  bool v21; // zf
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  __int128 v24; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+20h] BYREF

  Handle = 0LL;
  Object = 0LL;
  v24 = 0LL;
  v6 = MiOpenHotPatchFile((_DWORD)a1, 1, 0, (unsigned int)&Handle, (__int64)&Object, 0LL, (__int64)a3);
  if ( v6 < 0 )
    goto LABEL_29;
  HotPatchRecord = MiAllocateHotPatchRecord(*a3, a3[1], a1);
  if ( !HotPatchRecord )
  {
    v6 = -1073741670;
    goto LABEL_29;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = RtlLengthSid(a2);
  *(_QWORD *)&v24 = RtlHashBytes2((const unsigned __int8 *)a2, v9, v10, v11);
  *((_QWORD *)&v24 + 1) = a2;
  --CurrentThread->SpecialApcDisable;
  v12 = KeAbPreAcquire((__int64)&xmmword_140C69848, 0LL);
  v13 = _interlockedbittestandset64((volatile signed __int32 *)&xmmword_140C69848, 0LL);
  v14 = v12;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx(&xmmword_140C69848, v12, (__int64)&xmmword_140C69848);
  if ( v14 )
    *(_BYTE *)(v14 + 18) = 1;
  v15 = (_QWORD *)qword_140C69828;
  v16 = 0;
  if ( !qword_140C69828 )
    goto LABEL_12;
  while ( 1 )
  {
    v17 = MiCompareUserSidHotPatchNodes(&v24, (__int64)v15);
    if ( v17 > 0 )
      break;
    if ( v17 >= 0 )
      goto LABEL_23;
    v18 = (_QWORD *)*v15;
    if ( !*v15 )
      goto LABEL_12;
LABEL_21:
    v15 = v18;
  }
  v18 = (_QWORD *)v15[1];
  if ( v18 )
    goto LABEL_21;
  v16 = 1;
LABEL_12:
  Pool = MiAllocatePool(256, v9 + 40, 0x73486D4Du);
  v20 = (unsigned __int64)Pool;
  if ( Pool )
  {
    Pool[3] = 0LL;
    Pool[4] = v24;
    RtlCopySid(v9, Pool + 5, a2);
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C69828, (unsigned __int64)v15, v16, v20);
    v15 = (_QWORD *)v20;
LABEL_23:
    MiInsertHotPatchRecord(v15 + 3, (unsigned __int64)HotPatchRecord, 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_140C69848, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&xmmword_140C69848);
    KeAbPostRelease((ULONG_PTR)&xmmword_140C69848);
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    MiHotPatchAllProcesses(*a3, a3[1]);
    v6 = 0;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_140C69848, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&xmmword_140C69848);
    KeAbPostRelease((ULONG_PTR)&xmmword_140C69848);
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v6 = -1073741670;
    ExFreePoolWithTag(HotPatchRecord, 0);
  }
LABEL_29:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v6;
}
