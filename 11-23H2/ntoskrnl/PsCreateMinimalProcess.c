/*
 * XREFs of PsCreateMinimalProcess @ 0x1408531AC
 * Callers:
 *     SmFirstTimeInit @ 0x1407B7FF4 (SmFirstTimeInit.c)
 *     CmpInitializeRegistryProcess @ 0x14080ADAC (CmpInitializeRegistryProcess.c)
 *     PspCreateProcess @ 0x14085CA00 (PspCreateProcess.c)
 *     PspCreatePicoProcess @ 0x1409B56F0 (PspCreatePicoProcess.c)
 *     PspCreatePartitionSystemProcess @ 0x1409B6778 (PspCreatePartitionSystemProcess.c)
 *     VmCreateMemoryProcess @ 0x1409DC540 (VmCreateMemoryProcess.c)
 *     MiInitializeHotPatches @ 0x140B44AF8 (MiInitializeHotPatches.c)
 *     PspInitPhase1 @ 0x140B4D1F4 (PspInitPhase1.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140232340 (SepDeleteAccessState.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     MiDeleteProcessShadow @ 0x1402919BC (MiDeleteProcessShadow.c)
 *     KeKvaShadowingActive @ 0x14036A2A8 (KeKvaShadowingActive.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     PsAssignProcessToJobObject @ 0x14069FF70 (PsAssignProcessToJobObject.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     PspGetMemoryPartitionContext @ 0x1406B9150 (PspGetMemoryPartitionContext.c)
 *     PspInsertProcess @ 0x1406B9FD4 (PspInsertProcess.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     PspCreateObjectHandle @ 0x14073F9A0 (PspCreateObjectHandle.c)
 *     PspSetMinimalProcessName @ 0x1408534D4 (PspSetMinimalProcessName.c)
 *     DbgkCreateMinimalProcess @ 0x140853570 (DbgkCreateMinimalProcess.c)
 */

__int64 __fastcall PsCreateMinimalProcess(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        void *a5,
        int a6,
        char a7,
        __int64 a8,
        void *a9,
        __int64 a10,
        _QWORD *a11)
{
  void *v11; // r15
  unsigned int v14; // ebx
  int v15; // r12d
  int MemoryPartitionContext; // eax
  PVOID v17; // r14
  int inserted; // esi
  PVOID v19; // rax
  char *v20; // rdi
  char v21; // al
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  PVOID v24; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h] BYREF
  PVOID v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-58h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  _QWORD *v31; // [rsp+C0h] [rbp-40h]
  _BYTE v32[400]; // [rsp+D0h] [rbp-30h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v33; // [rsp+260h] [rbp+160h] BYREF

  v11 = a9;
  v28 = a10;
  v30 = a3;
  v29 = a2;
  v31 = a11;
  v26 = a5;
  v25 = (__int64)a9;
  v27 = 0LL;
  memset(&v33, 0, sizeof(v33));
  memset(v32, 0, sizeof(v32));
  v24 = 0LL;
  v14 = 0;
  Object = 0LL;
  if ( a5 )
    v14 = 1;
  else
    v26 = (PVOID)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  v15 = a6 | 0x800;
  MemoryPartitionContext = PspGetMemoryPartitionContext(a1, a6 | 0x800u, (__int64)&v25, a9 != 0LL, &v24);
  v17 = v24;
  inserted = MemoryPartitionContext;
  if ( MemoryPartitionContext >= 0 )
  {
    v19 = (PVOID)v28;
    if ( v24 )
      v19 = v24;
    inserted = PspAllocateProcess(a1, 0, 0LL, a4, 0, 0, 0LL, v26, v15, a7, 0LL, v14, v19, (__int64)&v27, &Object);
    if ( inserted < 0 )
    {
      Object = 0LL;
    }
    else
    {
      if ( a8 )
        *((_QWORD *)Object + 280) = a8;
      v20 = (char *)Object;
      if ( (*((_DWORD *)Object + 543) & 1) != 0 && !*((_QWORD *)Object + 280) && (unsigned int)KeKvaShadowingActive() )
      {
        v20[912] = 1;
        if ( !_interlockedbittestandset((volatile signed __int32 *)Object + 543, 0xEu) )
        {
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v33);
          if ( Object != PsInitialSystemProcess )
            MiDeleteProcessShadow((__int64)Object, 1);
          KiUnstackDetachProcess(&v33);
        }
        v11 = (void *)v25;
        v20 = (char *)Object;
        v17 = v24;
      }
      if ( v29 )
      {
        PspSetMinimalProcessName(v20, v29);
        v20 = (char *)Object;
      }
      memset(v32, 0, sizeof(v32));
      v21 = 1;
      if ( (_DWORD)v27 )
        v21 = 3;
      inserted = PspInsertProcess(v20, a1, 0x2000000, v15, 0LL, v21, v30, (PACCESS_STATE)v32);
      if ( inserted < 0 )
      {
        PspRundownSingleProcess((__int64)Object, 0);
      }
      else
      {
        v14 |= 4u;
        if ( !v11 || (inserted = PsAssignProcessToJobObject(v11, Object, 0LL), inserted >= 0) )
        {
          DbgkCreateMinimalProcess(Object);
          v14 |= 2u;
          *(_DWORD *)&v32[384] |= 0x200u;
          inserted = PspCreateObjectHandle(Object, (__int64)v32, (struct _OBJECT_TYPE *)PsProcessType);
          if ( inserted >= 0 )
          {
            v14 &= ~4u;
            *v31 = *(_QWORD *)&v32[392];
          }
        }
      }
    }
  }
  if ( (v14 & 2) != 0 )
  {
    SepDeleteAccessState((__int64)v32);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v32[32]);
  }
  if ( Object )
  {
    if ( v14 >= 4 )
      PsTerminateProcess((ULONG_PTR)Object);
    ObfDereferenceObjectWithTag(Object, 0x72437350u);
  }
  if ( v17 )
    ObfDereferenceObjectWithTag(v17, 0x624A7350u);
  if ( (v14 & 1) == 0 )
    ObfDereferenceObject(v26);
  return (unsigned int)inserted;
}
