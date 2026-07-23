/*
 * XREFs of NtCreatePrivateNamespace @ 0x1407C8B70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C8DD8 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1407C8F84 (ObpCaptureBoundaryDescriptor.c)
 *     ObpRegisterPrivateNamespace @ 0x1407C9420 (ObpRegisterPrivateNamespace.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  char PreviousMode; // si
  __int64 v8; // rcx
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rbx
  int v12; // eax
  _QWORD *v13; // r14
  unsigned __int64 v14; // rbx
  size_t v15; // r8
  __int64 v16; // rcx
  NTSTATUS inserted; // edi
  void *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  __int64 v27; // [rsp+60h] [rbp-28h] BYREF

  Object = 0LL;
  v27 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NamespaceHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)NamespaceHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    v10 = ObpVerifyCreatorAccessCheck(48LL);
    if ( v10 >= 0 )
    {
      v11 = (unsigned int)(MEMORY[0x18] + 392);
      if ( v11 < MEMORY[0x18] )
      {
        v10 = -1073741811;
      }
      else
      {
        v12 = ObCreateObjectEx(
                PreviousMode,
                ObpDirectoryObjectType,
                (__int64)ObjectAttributes,
                PreviousMode,
                v25,
                MEMORY[0x18] + 392,
                0,
                0,
                &Object,
                0LL);
        if ( v12 >= 0 )
        {
          v13 = Object;
          memset(Object, 0, (unsigned int)v11);
          v14 = ((unsigned __int64)v13 + 351) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v14 + 8) = v14;
          *(_QWORD *)v14 = v14;
          v15 = MEMORY[0x18];
          *(_QWORD *)(v14 + 24) = MEMORY[0x18];
          *(_QWORD *)(v14 + 16) = 0LL;
          *(_BYTE *)(v14 + 40) = MEMORY[0x28];
          memmove((void *)(v14 + 48), (const void *)0x30, v15);
          ExFreePoolWithTag(0LL, 0x534E624Fu);
          v13[37] = 0LL;
          *((_DWORD *)v13 + 85) = -1;
          *((_DWORD *)v13 + 84) = 1;
          if ( (*((_BYTE *)v13 - 22) & 2) != 0 )
            v16 = (__int64)v13 - ObpInfoMaskToOffset[*((_BYTE *)v13 - 22) & 3] - 48;
          else
            v16 = 0LL;
          if ( v16 )
          {
            inserted = -1073741773;
          }
          else
          {
            inserted = ObpRegisterPrivateNamespace(((unsigned __int64)v13 + 351) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( inserted >= 0 )
            {
              ObfReferenceObject(v13);
              inserted = ObInsertObjectEx((char *)v13, 0LL, DesiredAccess, 0, 0, 0LL, &v27);
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)CurrentServerSiloGlobals + 720, 0LL);
              if ( inserted < 0 )
              {
                v21 = *(_QWORD *)v14;
                v22 = *(_QWORD **)(v14 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) == v14 && *v22 == v14 )
                {
                  *v22 = v21;
                  *(_QWORD *)(v21 + 8) = v22;
LABEL_32:
                  --*((_DWORD *)CurrentServerSiloGlobals + 182);
                  ObfDereferenceObject(Object);
LABEL_16:
                  ExReleasePushLockEx((__int64 *)CurrentServerSiloGlobals + 90, 0LL);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  if ( inserted >= 0 )
                    *NamespaceHandle = (HANDLE)v27;
                  return inserted;
                }
              }
              else
              {
                if ( (v13[42] & 2) == 0 )
                {
                  v20 = Object;
                  *(_QWORD *)(v14 + 16) = Object;
                  v20[40] = v14;
                  goto LABEL_16;
                }
                v23 = *(_QWORD *)v14;
                v24 = *(_QWORD **)(v14 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) == v14 && *v24 == v14 )
                {
                  *v24 = v23;
                  *(_QWORD *)(v23 + 8) = v24;
                  goto LABEL_32;
                }
              }
              __fastfail(3u);
            }
          }
          ObfDereferenceObject(v13);
          return inserted;
        }
        v10 = v12;
      }
    }
    ExFreePoolWithTag(0LL, 0x534E624Fu);
    return v10;
  }
  return result;
}
