/*
 * XREFs of NtCopyFileChunk @ 0x1406588A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     sub_1402AC840 @ 0x1402AC840 (sub_1402AC840.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     IoIs32bitProcess @ 0x1402DF4A0 (IoIs32bitProcess.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140417B94 @ 0x140417B94 (sub_140417B94.c)
 *     sub_140418218 @ 0x140418218 (sub_140418218.c)
 *     sub_1404182FC @ 0x1404182FC (sub_1404182FC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14071E230 @ 0x14071E230 (sub_14071E230.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtCopyFileChunk(
        HANDLE SourceHandle,
        HANDLE DestinationHandle,
        HANDLE EventHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG Length,
        PLARGE_INTEGER SourceOffset,
        PLARGE_INTEGER DestOffset,
        PULONG SourceKey,
        PULONG DestKey,
        ULONG Flags)
{
  struct _KEVENT *v11; // r14
  KPROCESSOR_MODE v12; // r12
  PLARGE_INTEGER v14; // r13
  __int64 v15; // rcx
  __int128 v16; // xmm6
  LONGLONG v17; // rdi
  char *Pool2; // rax
  char *v19; // rsi
  NTSTATUS v20; // edi
  __int64 v21; // rcx
  HANDLE v22; // rdx
  char *v23; // rcx
  PVOID *v24; // rdi
  int Object; // [rsp+20h] [rbp-108h]
  SIZE_T v26; // [rsp+30h] [rbp-F8h]
  NTSTATUS Status; // [rsp+70h] [rbp-B8h]
  char *v28; // [rsp+78h] [rbp-B0h]
  char v29; // [rsp+90h] [rbp-98h]
  LONGLONG QuadPart; // [rsp+98h] [rbp-90h]
  _DWORD v31[3]; // [rsp+A4h] [rbp-84h] BYREF
  POBJECT_HANDLE_INFORMATION v32; // [rsp+B0h] [rbp-78h]
  PIRP v33; // [rsp+B8h] [rbp-70h]
  struct _KEVENT Event; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v35; // [rsp+D8h] [rbp-50h]
  ULONG Flagsa; // [rsp+178h] [rbp+50h]

  v35 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v11 = 0LL;
  v33 = 0LL;
  v12 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( Flags )
    return -1073741811;
  if ( v12 )
  {
    v14 = SourceOffset;
    if ( ((unsigned __int8)SourceOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = 0x7FFFFFFF0000LL;
    QuadPart = SourceOffset->QuadPart;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v15 = (__int64)IoStatusBlock;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = *(_OWORD *)&IoStatusBlock->Status;
    v35 = *(_OWORD *)&IoStatusBlock->Status;
    v17 = QuadPart;
  }
  else
  {
    v14 = SourceOffset;
    v17 = SourceOffset->QuadPart;
    v16 = *(_OWORD *)&IoStatusBlock->Status;
    v35 = *(_OWORD *)&IoStatusBlock->Status;
  }
  Pool2 = (char *)ExAllocatePool2(67LL, Length + 72LL, 1883467593LL);
  v19 = Pool2;
  if ( Pool2 )
  {
    v28 = Pool2;
    memset(Pool2, 0, 0x48uLL);
    v19 += 72;
    *((_QWORD *)v28 + 8) = v17;
    v32 = (POBJECT_HANDLE_INFORMATION)(v28 + 56);
    v20 = sub_1402AC790(SourceHandle, 1u, v12, (PVOID *)v28 + 7, 0LL);
    if ( v20 < 0 )
      goto LABEL_40;
    v20 = sub_14071E230((ULONG_PTR)DestinationHandle);
    if ( v20 >= 0 && sub_1402AC840(*((_QWORD *)v28 + 6)) )
      v20 = -1073739504;
    if ( v20 < 0 )
      goto LABEL_40;
    v21 = *((_QWORD *)v28 + 6);
    Flagsa = *(_DWORD *)(v21 + 80) & 2;
    v29 = (*(_DWORD *)(v21 + 80) & 4) != 0;
    v22 = 0LL;
    if ( !Flagsa )
      v22 = EventHandle;
    v20 = sub_1404182FC(
            v21,
            (__int64)IoStatusBlock,
            (__int64)v19,
            Length,
            Object,
            (__int64)v32,
            (__int64)v22,
            (__int64)DestOffset,
            (__int64)DestKey,
            0,
            (__int64)(v28 + 32));
    if ( v20 >= 0 )
    {
      if ( Flagsa )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v23 = v28;
        *(_QWORD *)(*((_QWORD *)v28 + 4) + 80LL) = &Event;
        *(_DWORD *)(*((_QWORD *)v28 + 4) + 16LL) |= 4u;
        if ( EventHandle )
        {
          *(_QWORD *)&v31[1] = 0LL;
          v20 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, v12, (PVOID *)&v31[1], 0LL);
          v11 = *(struct _KEVENT **)&v31[1];
          if ( v20 < 0 )
            goto LABEL_40;
          KeResetEvent(*(PRKEVENT *)&v31[1]);
          v23 = v28;
        }
        v33 = (PIRP)*((_QWORD *)v23 + 4);
      }
      *(_OWORD *)&IoStatusBlock->Status = v16;
      v24 = (PVOID *)v32;
      ObfReferenceObject(*(PVOID *)v32);
      LODWORD(v26) = Length;
      v20 = sub_14073A450(
              *v24,
              (__int64)IoStatusBlock,
              v19,
              v26,
              (__int64)v14,
              (__int64)SourceKey,
              0LL,
              0LL,
              0x40000000,
              (__int64)v24);
      v19 = 0LL;
      if ( v20 >= 0 && Flagsa )
      {
        v20 = sub_140417B94(v33, v12, v29, &Event);
        if ( v20 >= 0 )
        {
          if ( v12 )
          {
            if ( IoIs32bitProcess(0LL) )
              Status = *(_DWORD *)(unsigned int)IoStatusBlock->Status;
            else
              Status = IoStatusBlock->Status;
            v20 = Status;
          }
          else if ( IoIs32bitProcess(0LL) )
          {
            v20 = *(_DWORD *)(unsigned int)IoStatusBlock->Status;
          }
          else
          {
            v20 = IoStatusBlock->Status;
          }
        }
        if ( v11 )
          KeSetEvent(v11, 0, 0);
      }
      else if ( v20 >= 0 )
      {
        v20 = 259;
      }
      goto LABEL_40;
    }
    *((_QWORD *)v28 + 6) = 0LL;
  }
  else
  {
    v20 = -1073741670;
  }
LABEL_40:
  if ( v19 )
    sub_140418218((__int64)v19, 1);
  if ( v11 )
    ObfDereferenceObject(v11);
  return v20;
}
