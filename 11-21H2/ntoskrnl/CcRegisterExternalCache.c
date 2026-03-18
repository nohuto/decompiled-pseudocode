/*
 * XREFs of CcRegisterExternalCache @ 0x1403A12A0
 * Callers:
 *     <none>
 * Callees:
 *     CcAddExternalCacheInternal @ 0x1403A1330 (CcAddExternalCacheInternal.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CcAddExternalCacheToVolume @ 0x14053A314 (CcAddExternalCacheToVolume.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcRegisterExternalCache(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi
  bool v7; // zf

  v2 = 0;
  if ( !CcInitializationComplete )
    KeBugCheckEx(0x34u, 0x1DF3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x40uLL, 0x43456343u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = CcEnablePerVolumeLazyWriter == 1;
    *PoolWithTag = a1;
    if ( v7 )
      CcAddExternalCacheToVolume(PoolWithTag);
    else
      CcAddExternalCacheInternal(PoolWithTag, &CcExternalCacheList);
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
