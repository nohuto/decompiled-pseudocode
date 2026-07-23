/*
 * XREFs of CcSetAdditionalCacheAttributesEx @ 0x1402342F0
 * Callers:
 *     <none>
 * Callees:
 *     CcSetAdditionalCacheAttributes @ 0x140234410 (CcSetAdditionalCacheAttributes.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcSetAdditionalCacheAttributesEx(PFILE_OBJECT FileObject, int a2)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _DWORD *SharedCacheMap; // rbx
  BOOLEAN v5; // dl
  int v6; // eax
  int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  unsigned int v14; // eax
  int v15; // eax
  int v16; // edx
  unsigned int v17; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  bool v22; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SectionObjectPointer = FileObject->SectionObjectPointer;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0xC6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = (a2 & 2) != 0;
  if ( (SharedCacheMap[38] & 0x2000) == 0 )
    CcSetAdditionalCacheAttributes(FileObject, v5, (a2 & 4) != 0);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)SharedCacheMap + 66) + 704LL), &LockHandle);
  v6 = SharedCacheMap[38];
  v7 = v6 | 0x800000;
  v8 = v6 & 0xFF7FFFFF;
  if ( (a2 & 1) == 0 )
    v7 = v8;
  SharedCacheMap[38] = v7;
  if ( (a2 & 8) != 0 )
  {
    v9 = v7 | 0x4000000;
  }
  else
  {
    if ( (v7 & 0x4000000) != 0 )
      v7 |= 0x20000u;
    v9 = v7 & 0xFBFFFFFF;
  }
  v10 = v9 & 0xEFFFFFFF;
  v11 = v9 | 0x10000000;
  if ( (a2 & 0x10) == 0 )
    v11 = v10;
  v12 = v11;
  v13 = v11 | 0x8000000;
  v14 = v12 & 0xF7FFFFFF;
  if ( (a2 & 0x20) == 0 )
    v13 = v14;
  v15 = v13;
  v16 = v13 | 0x1000;
  v17 = v15 & 0xFFFFEFFF;
  if ( (a2 & 0x10000000) == 0 )
    v16 = v17;
  SharedCacheMap[38] = v16;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v22 = ((unsigned int)result & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= result;
        if ( v22 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
