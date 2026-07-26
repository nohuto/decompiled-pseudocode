/*
 * XREFs of ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0161738
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C01616A8 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     memset @ 0x1C0038580 (memset.c)
 *     ??0NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C011F6FC (--0NdisBindBuilderGlobal@@QEAA@XZ.c)
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C013C450 (-ndisBindBuilderCleanup@@YAXXZ.c)
 *     ndisEnsureBindingInfoLoaded @ 0x1C013C8D4 (ndisEnsureBindingInfoLoaded.c)
 *     ndisBindBuilderLoadSettings @ 0x1C0160358 (ndisBindBuilderLoadSettings.c)
 */

__int64 ndisBindBuilderInitialize(void)
{
  NdisBindBuilderGlobal *PoolWithTag; // rax
  NdisBindBuilderGlobal *v1; // rbx
  void *v2; // rcx
  unsigned int Settings; // ebx

  PoolWithTag = (NdisBindBuilderGlobal *)ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x4742444Eu);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
  {
    qword_1C00F5730 = 0LL;
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 0x68uLL);
  qword_1C00F5730 = NdisBindBuilderGlobal::NdisBindBuilderGlobal(v1);
  if ( !qword_1C00F5730 )
    return 3221225626LL;
  Settings = ndisBindBuilderLoadSettings(v2);
  if ( !Settings )
  {
    if ( !*((_BYTE *)qword_1C00F5730 + 97) )
      return 0LL;
    Settings = ndisEnsureBindingInfoLoaded();
    if ( !Settings )
      return 0LL;
  }
  ndisBindBuilderCleanup();
  return Settings;
}
