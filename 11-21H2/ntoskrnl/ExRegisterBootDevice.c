/*
 * XREFs of ExRegisterBootDevice @ 0x14063A090
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExRegisterBootDevice(__int64 a1, _QWORD *a2)
{
  NTSTATUS v4; // ebx
  _DWORD *PoolWithTag; // rsi
  void *v6; // rcx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+B0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+48h] BYREF

  ThreadHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v4 = 0;
  KeWaitForSingleObject(&stru_140C15840, Executive, 0, 0, 0LL);
  if ( !qword_140C157E0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, sub_14063A300, 0LL);
    if ( v4 >= 0 )
    {
      Object = 0LL;
      v4 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      qword_140C157E0 = (PKTHREAD)Object;
      ZwClose(ThreadHandle);
      KeSetPriorityThread(qword_140C157E0, 31);
    }
  }
  KeSetEvent(&stru_140C15840, 0, 0);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)a1 == 1 && *(_QWORD *)(a1 + 8) && !*(_DWORD *)(a1 + 4) && *(_QWORD *)(a1 + 24) )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x504E4442u);
      if ( PoolWithTag )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
        v6 = *(void **)(a1 + 16);
        if ( v6 )
          ObfReferenceObjectWithTag(v6, 0x746C6644u);
        memset(PoolWithTag, 0, 0x40uLL);
        *PoolWithTag = 1347306562;
        *(_OWORD *)(PoolWithTag + 6) = *(_OWORD *)a1;
        *(_OWORD *)(PoolWithTag + 10) = *(_OWORD *)(a1 + 16);
        *((_QWORD *)PoolWithTag + 7) = *(_QWORD *)(a1 + 32);
        v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C15800);
        v8 = (_QWORD *)qword_140C157F8;
        v9 = PoolWithTag + 2;
        if ( *(__int64 **)qword_140C157F8 != &qword_140C157F0 )
          __fastfail(3u);
        *v9 = &qword_140C157F0;
        *((_QWORD *)PoolWithTag + 2) = v8;
        *v8 = v9;
        qword_140C157F8 = (__int64)(PoolWithTag + 2);
        KeReleaseSpinLockFromDpcLevel(&qword_140C15800);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v12 = *((_QWORD *)CurrentPrcb + 4375);
              v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
              *(_DWORD *)(v12 + 20) &= v13;
              if ( v14 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v7);
        *a2 = PoolWithTag;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v4;
}
