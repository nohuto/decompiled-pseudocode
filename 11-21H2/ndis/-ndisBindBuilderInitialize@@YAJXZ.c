/*
 * XREFs of ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0153170
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C01530E0 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 *     ??0NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C010D614 (--0NdisBindBuilderGlobal@@QEAA@XZ.c)
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C0130614 (-ndisBindBuilderCleanup@@YAXXZ.c)
 *     ndisEnsureBindingInfoLoaded @ 0x1C0130A54 (ndisEnsureBindingInfoLoaded.c)
 *     ndisBindBuilderLoadSettings @ 0x1C01531F8 (ndisBindBuilderLoadSettings.c)
 */

__int64 ndisBindBuilderInitialize(void)
{
  NdisBindBuilderGlobal *PoolWithTag; // rax
  NdisBindBuilderGlobal *v1; // rbx
  unsigned int Settings; // ebx

  PoolWithTag = (NdisBindBuilderGlobal *)ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x4742444Eu);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
  {
    qword_1C00EC738 = 0LL;
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 0x68uLL);
  qword_1C00EC738 = NdisBindBuilderGlobal::NdisBindBuilderGlobal(v1);
  if ( !qword_1C00EC738 )
    return 3221225626LL;
  Settings = ndisBindBuilderLoadSettings();
  if ( !Settings )
  {
    if ( !*((_BYTE *)qword_1C00EC738 + 97) )
      return 0LL;
    Settings = ndisEnsureBindingInfoLoaded();
    if ( !Settings )
      return 0LL;
  }
  ndisBindBuilderCleanup();
  return Settings;
}
