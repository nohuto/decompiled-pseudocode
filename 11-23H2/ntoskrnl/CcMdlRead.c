/*
 * XREFs of CcMdlRead @ 0x14073EB90
 * Callers:
 *     FsRtlMdlReadDev @ 0x14093D550 (FsRtlMdlReadDev.c)
 * Callees:
 *     IoAllocateMdl @ 0x14022E3B0 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x140238860 (MmProbeAndLockPages.c)
 *     CcFetchDataForRead @ 0x140262550 (CcFetchDataForRead.c)
 *     CcFreeVirtualAddress @ 0x140262710 (CcFreeVirtualAddress.c)
 *     CcGetVirtualAddress @ 0x140265080 (CcGetVirtualAddress.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     CcUpdateReadHistory @ 0x1402BDFB8 (CcUpdateReadHistory.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     CcScheduleReadAheadEx @ 0x140329230 (CcScheduleReadAheadEx.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14034C4D4 (CcUpdateSharedCacheMapFlag.c)
 */

void __stdcall CcMdlRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  _DWORD *SharedCacheMap; // r13
  _DWORD *PrivateCacheMap; // r12
  LONGLONG QuadPart; // rbx
  ULONG v11; // esi
  ULONG v12; // r12d
  struct _MDL *Mdl; // rax
  PMDL v14; // rax
  struct _MDL *Next; // rcx
  unsigned int v16; // [rsp+54h] [rbp-94h]
  ULONG v17; // [rsp+58h] [rbp-90h] BYREF
  _DWORD v18[3]; // [rsp+5Ch] [rbp-8Ch] BYREF
  _QWORD *v19; // [rsp+68h] [rbp-80h] BYREF
  struct _MDL *v20; // [rsp+70h] [rbp-78h]
  _QWORD v21[2]; // [rsp+78h] [rbp-70h] BYREF
  _DWORD *v22; // [rsp+88h] [rbp-60h]
  PVOID VirtualAddress; // [rsp+90h] [rbp-58h]
  PMDL i; // [rsp+98h] [rbp-50h]
  _DWORD *v25; // [rsp+A0h] [rbp-48h]

  v20 = 0LL;
  v18[1] = Length;
  v16 = 0;
  v19 = 0LL;
  v18[0] = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v21[1] = SharedCacheMap;
  PrivateCacheMap = FileObject->PrivateCacheMap;
  v22 = PrivateCacheMap;
  v25 = PrivateCacheMap;
  if ( (*PrivateCacheMap & 0x20000) != 0 )
    CcScheduleReadAheadEx(FileObject);
  __incgsdword(0x8464u);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  QuadPart = FileOffset->QuadPart;
  v21[0] = FileOffset->QuadPart;
  v11 = Length;
  while ( v11 )
  {
    v17 = 0;
    VirtualAddress = (PVOID)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, (__int64 *)&v19, &v17, 0, 0);
    if ( (SharedCacheMap[38] & 8) == 0 )
      CcFetchDataForRead((int)FileObject, v21, v11, 1, v18, v19, (*PrivateCacheMap >> 18) & 7, 0LL, 0LL);
    v12 = v17;
    if ( v17 > v11 )
      v12 = v11;
    v17 = v12;
    QuadPart += v12;
    Mdl = IoAllocateMdl(VirtualAddress, v12, 0, 0, 0LL);
    v20 = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, 0, IoReadAccess);
    CcFreeVirtualAddress((__int64)v19);
    v19 = 0LL;
    v14 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v14->Next;
        if ( !v14->Next )
          break;
        v14 = v14->Next;
      }
      v14->Next = v20;
    }
    else
    {
      *MdlChain = v20;
    }
    v20 = 0LL;
    v21[0] = QuadPart;
    v16 += v12;
    v11 -= v12;
    PrivateCacheMap = v22;
  }
  __addgsdword(0x84A0u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( (*PrivateCacheMap & 0x20000) == 0 && v18[0] )
    CcScheduleReadAheadEx(FileObject);
  CcUpdateReadHistory((__int64)FileObject, (__int64 *)FileOffset, Length);
  if ( (SharedCacheMap[38] & 8) != 0 )
    CcUpdateSharedCacheMapFlag((__int64)SharedCacheMap, 8, 0);
  IoStatus->Status = 0;
  IoStatus->Information = v16;
}
