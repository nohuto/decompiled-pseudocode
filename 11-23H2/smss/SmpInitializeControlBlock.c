/*
 * XREFs of SmpInitializeControlBlock @ 0x140005F04
 * Callers:
 *     SmpAllocateControlBlock @ 0x140004110 (SmpAllocateControlBlock.c)
 * Callees:
 *     memset_0 @ 0x140014B4F (memset_0.c)
 */

__int64 __fastcall SmpInitializeControlBlock(void *a1, HANDLE SectionHandle)
{
  unsigned int v4; // r14d
  NTSTATUS v5; // edx
  __int64 v6; // rax
  void *v7; // rcx
  NTSTATUS v8; // edx
  __int64 v9; // rax
  NTSTATUS v10; // edx
  __int64 v11; // rax
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-9h] BYREF
  void *v14; // [rsp+60h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  void *EventHandle; // [rsp+D8h] [rbp+77h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp+7Fh] BYREF

  EventHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v4 = 0;
  v5 = NtMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         0LL,
         &ViewSize,
         ViewUnmap,
         0,
         4u);
  if ( v5 >= 0 )
  {
    ObjectAttributes.Attributes = 2;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
    if ( v8 < 0 )
    {
      v9 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      EventHandle = 0LL;
      SmpGlobalLog[2 * v9 + 2] = 324;
      SmpGlobalLog[2 * v9 + 3] = v8;
      *(_QWORD *)&SmpGlobalLog[2 * v9 + 4] = SectionHandle;
      goto LABEL_11;
    }
    v10 = NtCreateEvent(&v14, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
    if ( v10 < 0 )
    {
      v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v11 + 2] = 342;
      SmpGlobalLog[2 * v11 + 3] = v10;
      *(_QWORD *)&SmpGlobalLog[2 * v11 + 4] = SectionHandle;
      v7 = EventHandle;
      goto LABEL_9;
    }
    memset_0(a1, 0, 0x80uLL);
    v7 = 0LL;
    *((_QWORD *)a1 + 2) = BaseAddress;
    v4 = 1;
    *((_QWORD *)a1 + 4) = EventHandle;
    *((_QWORD *)a1 + 5) = v14;
    *((_QWORD *)a1 + 3) = SectionHandle;
    *((_DWORD *)a1 + 1) = 1;
    EventHandle = 0LL;
  }
  else
  {
    v6 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v6 + 2] = 301;
    SmpGlobalLog[2 * v6 + 3] = v5;
    *(_QWORD *)&SmpGlobalLog[2 * v6 + 4] = SectionHandle;
    v7 = EventHandle;
  }
  BaseAddress = 0LL;
LABEL_9:
  if ( v7 )
    NtClose(v7);
LABEL_11:
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  return v4;
}
