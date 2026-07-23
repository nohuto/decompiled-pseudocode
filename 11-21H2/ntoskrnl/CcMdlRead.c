/*
 * XREFs of CcMdlRead @ 0x1407085F0
 * Callers:
 *     FsRtlMdlReadDev @ 0x14092DA90 (FsRtlMdlReadDev.c)
 * Callees:
 *     sub_14023C5D4 @ 0x14023C5D4 (sub_14023C5D4.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     sub_14029CB9C @ 0x14029CB9C (sub_14029CB9C.c)
 *     CcScheduleReadAheadEx @ 0x14029CC10 (CcScheduleReadAheadEx.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 *     sub_140329430 @ 0x140329430 (sub_140329430.c)
 *     sub_140329470 @ 0x140329470 (sub_140329470.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
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
  __int64 v10; // rbx
  ULONG v11; // esi
  void *v12; // rax
  ULONG v13; // r12d
  struct _MDL *Mdl; // rax
  PMDL v15; // rax
  struct _MDL *Next; // rcx
  unsigned int v17; // [rsp+54h] [rbp-94h]
  ULONG v18; // [rsp+58h] [rbp-90h] BYREF
  _DWORD v19[3]; // [rsp+5Ch] [rbp-8Ch] BYREF
  PVOID P; // [rsp+68h] [rbp-80h] BYREF
  struct _MDL *v21; // [rsp+70h] [rbp-78h]
  __int64 v22; // [rsp+78h] [rbp-70h]
  int v23[2]; // [rsp+80h] [rbp-68h] BYREF
  _DWORD *v24; // [rsp+88h] [rbp-60h]
  _DWORD *v25; // [rsp+90h] [rbp-58h]
  void *v26; // [rsp+98h] [rbp-50h]
  PMDL i; // [rsp+A0h] [rbp-48h]
  _DWORD *v28; // [rsp+A8h] [rbp-40h]

  v21 = 0LL;
  v19[1] = Length;
  v17 = 0;
  P = 0LL;
  v19[0] = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v24 = SharedCacheMap;
  PrivateCacheMap = FileObject->PrivateCacheMap;
  v25 = PrivateCacheMap;
  v28 = PrivateCacheMap;
  if ( (*PrivateCacheMap & 0x20000) != 0 )
    CcScheduleReadAheadEx(FileObject);
  __incgsdword(0x8464u);
  *((_DWORD *)KeGetCurrentThread() + 359) = 0;
  *(LARGE_INTEGER *)v23 = *FileOffset;
  v10 = *(_QWORD *)v23;
  v22 = *(_QWORD *)v23;
  v11 = Length;
  while ( v11 )
  {
    v18 = 0;
    v12 = (void *)sub_140328180((__int64)SharedCacheMap, v10, (__int64 **)&P, &v18, 0, 0);
    v26 = v12;
    if ( (SharedCacheMap[38] & 8) == 0 )
    {
      sub_140329470((int)FileObject, v23, v11, 1, v19, P, (*PrivateCacheMap >> 18) & 7, 0LL, 0LL);
      v12 = v26;
    }
    v13 = v18;
    if ( v18 > v11 )
      v13 = v11;
    v18 = v13;
    v10 = v22 + v13;
    v22 = v10;
    Mdl = IoAllocateMdl(v12, v13, 0, 0, 0LL);
    v21 = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, 0, IoReadAccess);
    sub_140329430((__int64)P);
    P = 0LL;
    v15 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v15->Next;
        if ( !v15->Next )
          break;
        v15 = v15->Next;
      }
      v15->Next = v21;
    }
    else
    {
      *MdlChain = v21;
    }
    v21 = 0LL;
    *(_QWORD *)v23 = v10;
    v17 += v13;
    v11 -= v13;
    PrivateCacheMap = v25;
  }
  __addgsdword(0x84A0u, *((_DWORD *)KeGetCurrentThread() + 359));
  if ( (*PrivateCacheMap & 0x20000) == 0 && v19[0] )
    CcScheduleReadAheadEx(FileObject);
  sub_14029CB9C((__int64)FileObject, (__int64 *)FileOffset, Length);
  if ( (SharedCacheMap[38] & 8) != 0 )
    sub_14023C5D4((__int64)SharedCacheMap, 8, 0);
  IoStatus->Status = 0;
  IoStatus->Information = v17;
}
