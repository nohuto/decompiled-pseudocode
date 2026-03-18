/*
 * XREFs of ObQueryNameStringMode @ 0x1407103B0
 * Callers:
 *     SepQueryNameString @ 0x140696CCC (SepQueryNameString.c)
 *     IopGraftName @ 0x1406B9FD4 (IopGraftName.c)
 *     EtwpEnumerateAddressSpace @ 0x1406F6CA4 (EtwpEnumerateAddressSpace.c)
 *     PspInitializeFullProcessImageName @ 0x14070F3A8 (PspInitializeFullProcessImageName.c)
 *     ObQueryNameString @ 0x14070F640 (ObQueryNameString.c)
 *     IopQueryNameInternal @ 0x14070F744 (IopQueryNameInternal.c)
 *     NtQueryObject @ 0x14070FD80 (NtQueryObject.c)
 *     AstLogDeviceCreated @ 0x1407112A4 (AstLogDeviceCreated.c)
 *     CmpQueryNameString @ 0x140742C78 (CmpQueryNameString.c)
 *     IoRegisterDeviceInterface @ 0x140769AD0 (IoRegisterDeviceInterface.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     ObpParseSymbolicLinkEx @ 0x140784700 (ObpParseSymbolicLinkEx.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     PiControlGetDeviceStack @ 0x1407F1CDC (PiControlGetDeviceStack.c)
 *     PnpBuildCmResourceList @ 0x14082071C (PnpBuildCmResourceList.c)
 *     MmGetFileNameForAddress @ 0x140881A9A (MmGetFileNameForAddress.c)
 *     IopGetRelatedFileName @ 0x1409342B0 (IopGetRelatedFileName.c)
 *     IopRaiseHardError @ 0x140934B80 (IopRaiseHardError.c)
 *     AlpcpGetPortNameInformation @ 0x140966EA8 (AlpcpGetPortNameInformation.c)
 *     MmGetFileNameForSection @ 0x14096B158 (MmGetFileNameForSection.c)
 *     ObGetObjectInformation @ 0x140984994 (ObGetObjectInformation.c)
 *     SmKmFileInfoGetPath @ 0x1409D59E8 (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1409D71F0 (SmKmStoreFileOpenVolume.c)
 *     EtwpTraceHandle @ 0x1409E3B48 (EtwpTraceHandle.c)
 * Callees:
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1402A0E90 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall ObQueryNameStringMode(char *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  unsigned int v5; // r12d
  signed __int64 *v8; // rbx
  unsigned __int64 v9; // rdx
  char *v10; // rdi
  __int64 (__fastcall *v11)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char); // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  char *v14; // rax
  void **v15; // rax
  void *v16; // rdi
  unsigned int v17; // edx
  char *v18; // rcx
  char *v19; // rdi
  char *v20; // rdi
  _WORD *v21; // rcx
  size_t v22; // r8
  char *v23; // rcx
  char *v24; // rdi
  __int64 v25; // r12
  char *v26; // rdi
  size_t v27; // r8
  int v28; // edi
  _WORD *v29; // rdx
  char v30; // [rsp+40h] [rbp-C8h]
  char v31; // [rsp+41h] [rbp-C7h]
  int v32; // [rsp+44h] [rbp-C4h]
  unsigned int v33; // [rsp+48h] [rbp-C0h]
  char *Object; // [rsp+50h] [rbp-B8h]
  unsigned int v35; // [rsp+58h] [rbp-B0h]
  _WORD *v36; // [rsp+60h] [rbp-A8h]
  _WORD *v37; // [rsp+68h] [rbp-A0h]
  char *v38; // [rsp+70h] [rbp-98h]
  char *v39; // [rsp+70h] [rbp-98h]
  char *v40; // [rsp+70h] [rbp-98h]
  signed __int64 *BugCheckParameter2; // [rsp+78h] [rbp-90h]
  signed __int64 *BugCheckParameter2a; // [rsp+78h] [rbp-90h]
  char *v43; // [rsp+80h] [rbp-88h]
  void **v44; // [rsp+88h] [rbp-80h]
  char *v45; // [rsp+90h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *v47; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *v48; // [rsp+C0h] [rbp-48h]
  struct _KTHREAD *v49; // [rsp+C8h] [rbp-40h]

  v5 = a3;
  v30 = 1;
  v31 = 0;
  v35 = 0;
  Object = 0LL;
  v32 = -1073741823;
  v8 = (signed __int64 *)(a1 - 48);
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  if ( (*(a1 - 22) & 2) != 0 )
    v10 = (char *)v8 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v10 = 0LL;
  v44 = (void **)v10;
  v11 = *(__int64 (__fastcall **)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char))(ObTypeIndexTable[v9] + 160);
  if ( v11 )
  {
    if ( v10 && *((_WORD *)v10 + 4) )
      LOBYTE(v9) = 1;
    else
      v9 = 0LL;
    v32 = v11(a1, v9, a2, a3, a4, a5);
LABEL_7:
    if ( v32 >= 0 )
LABEL_8:
      *(_DWORD *)(a2 + 4) = 0;
    return (unsigned int)v32;
  }
  CurrentSilo = PsGetCurrentSilo();
  v14 = (char *)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
  v43 = v14;
  while ( v10 )
  {
    if ( a1 != v14 && a1 != ObpRootDirectoryObject )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 2), 0LL);
      v15 = v44;
      v16 = *v44;
      v38 = (char *)*v44;
      if ( *v44 )
      {
        ObfReferenceObject(v16);
        Object = (char *)v16;
        v15 = v44;
      }
      v33 = *((unsigned __int16 *)v15 + 4) + 2;
      if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 + 2);
      KeAbPostRelease((ULONG_PTR)(v8 + 2));
      KeLeaveCriticalRegion();
      v17 = v33;
      v18 = v38;
      while ( v18 != v43 && v18 != ObpRootDirectoryObject && v18 && (*((_DWORD *)v18 + 84) & 0x20) == 0 )
      {
        v47 = KeGetCurrentThread();
        --v47->KernelApcDisable;
        v19 = v18 - 48;
        BugCheckParameter2 = (signed __int64 *)(v18 - 32);
        ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
        if ( (v19[26] & 2) == 0 || (v20 = &v19[-ObpInfoMaskToOffset[v19[26] & 3]]) == 0LL || !*(_QWORD *)v20 )
        {
          if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(BugCheckParameter2);
          KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
          KeLeaveCriticalRegion();
          v17 = v33 + 8;
          break;
        }
        v33 += 2 + *((unsigned __int16 *)v20 + 4);
        v39 = *(char **)v20;
        ObfReferenceObject(*(PVOID *)v20);
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(BugCheckParameter2);
        KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(Object);
        v18 = v39;
        Object = v39;
        v17 = v33;
        if ( v33 > 0xFFFF )
          goto LABEL_37;
      }
      if ( v17 <= 0xFFFF )
        goto LABEL_31;
LABEL_37:
      v32 = -1073741562;
      goto LABEL_33;
    }
    v17 = 2;
LABEL_31:
    v35 = v17 + 18;
    *a4 = v17 + 18;
    if ( v5 < v17 + 18 )
    {
      v32 = -1073741820;
LABEL_33:
      v30 = 0;
    }
    if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    if ( !v30 )
      goto LABEL_7;
    if ( (*((_BYTE *)v8 + 26) & 2) != 0 )
      v10 = (char *)v8 - ObpInfoMaskToOffset[*((_BYTE *)v8 + 26) & 3];
    else
      v10 = 0LL;
    v44 = (void **)v10;
    if ( v10 )
    {
      v21 = (_WORD *)(a2 + v35 - 2LL);
      *v21 = 0;
      if ( a1 == v43 || a1 == ObpRootDirectoryObject )
      {
LABEL_67:
        *(v21 - 1) = 92;
        v28 = (unsigned __int16)(a2 + v35 - ((_WORD)v21 - 2));
        *(_WORD *)(a2 + 2) = v28;
        *(_WORD *)a2 = a2 + v35 - (_WORD)v21;
        *(_QWORD *)(a2 + 8) = a2 + 16;
        if ( (_WORD *)(a2 + 16) != v21 - 1 )
        {
          memmove((void *)(a2 + 16), v21 - 1, (unsigned __int16)(a2 + v35 - ((_WORD)v21 - 2)));
          *a4 = v28 + 16;
        }
      }
      else
      {
        v22 = *((unsigned __int16 *)v10 + 4);
        v23 = (char *)v21 - v22;
        v36 = v23;
        if ( (unsigned __int64)v23 <= a2 + 16 )
        {
          v31 = 1;
        }
        else
        {
          memmove(v23, *((const void **)v10 + 2), v22);
          v48 = KeGetCurrentThread();
          --v48->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 2), 0LL);
          v24 = *(char **)v10;
          v40 = v24;
          if ( v24 )
          {
            ObfReferenceObject(v24);
            Object = v24;
          }
          if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v8 + 2);
          KeAbPostRelease((ULONG_PTR)(v8 + 2));
          KeLeaveCriticalRegion();
          while ( 1 )
          {
            if ( v40 == v43 || v40 == ObpRootDirectoryObject || !v40 || (*((_DWORD *)v40 + 84) & 0x20) != 0 )
            {
              v21 = v36;
LABEL_66:
              v5 = a3;
              goto LABEL_67;
            }
            v37 = v36 - 1;
            *(v36 - 1) = 92;
            v45 = v40 - 48;
            if ( (*(v40 - 22) & 2) != 0 )
              v25 = (__int64)&v40[-ObpInfoMaskToOffset[*(v40 - 22) & 3] - 48];
            else
              v25 = 0LL;
            v49 = KeGetCurrentThread();
            --v49->KernelApcDisable;
            BugCheckParameter2a = (signed __int64 *)(v45 + 16);
            ExAcquirePushLockSharedEx((ULONG_PTR)(v45 + 16), 0LL);
            if ( !v25 || !*(_QWORD *)v25 )
            {
              if ( _InterlockedCompareExchange64(BugCheckParameter2a, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(BugCheckParameter2a);
              KeAbPostRelease((ULONG_PTR)BugCheckParameter2a);
              KeLeaveCriticalRegion();
              v21 = v36 - 4;
              v29 = v36 - 4;
              if ( (unsigned __int64)(v36 - 4) < a2 + 16 )
              {
                v21 = (_WORD *)(a2 + 16);
                v29 = (_WORD *)(a2 + 16);
              }
              *(_DWORD *)v21 = *(_DWORD *)L"...";
              v21[2] = asc_14086C4B0[2];
              if ( v29 == (_WORD *)(a2 + 16) )
                v21 = v29 + 1;
              goto LABEL_66;
            }
            ObfDereferenceObject(Object);
            v26 = *(char **)v25;
            v40 = *(char **)v25;
            ObfReferenceObject(*(PVOID *)v25);
            Object = v26;
            v27 = *(unsigned __int16 *)(v25 + 8);
            v36 = (_WORD *)((char *)v37 - v27);
            if ( (unsigned __int64)v37 - v27 <= a2 + 16 )
              break;
            memmove((char *)v37 - v27, *(const void **)(v25 + 16), v27);
            if ( _InterlockedCompareExchange64(BugCheckParameter2a, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(BugCheckParameter2a);
            KeAbPostRelease((ULONG_PTR)BugCheckParameter2a);
            KeLeaveCriticalRegion();
          }
          v31 = 1;
          if ( _InterlockedCompareExchange64(BugCheckParameter2a, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(BugCheckParameter2a);
          KeAbPostRelease((ULONG_PTR)BugCheckParameter2a);
          KeLeaveCriticalRegion();
          v5 = a3;
        }
      }
      if ( Object )
        ObfDereferenceObject(Object);
      if ( !v31 )
        goto LABEL_83;
      if ( (*((_BYTE *)v8 + 26) & 2) != 0 )
        v10 = (char *)v8 - ObpInfoMaskToOffset[*((_BYTE *)v8 + 26) & 3];
      else
        v10 = 0LL;
      v44 = (void **)v10;
      v31 = 0;
    }
    v14 = v43;
  }
  *a4 = 16;
  if ( v5 >= 0x10 )
  {
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
LABEL_83:
    v32 = 0;
    goto LABEL_8;
  }
  return (unsigned int)-1073741820;
}
