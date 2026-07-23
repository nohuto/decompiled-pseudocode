/*
 * XREFs of WmipFindSMBiosStructure @ 0x1409DF90C
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x1405FBFE0 (WmipReadSMBiosSysInfo.c)
 *     WmipGetSMBiosEventlog @ 0x1409DFB48 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1409DFDC8 (WmipGetSysIds.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     MmMapIoSpaceEx @ 0x140335C40 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140335F60 (MmUnmapIoSpace.c)
 */

__int64 __fastcall WmipFindSMBiosStructure(char a1, _QWORD *a2, PVOID *a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  _WORD *i; // rcx
  int v15; // [rsp+20h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&WmipSMBiosLock, 1u);
  v9 = 0;
  v15 = 0;
  if ( WmipSMBiosTablePhysicalAddress )
  {
    v10 = MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
    *a3 = (PVOID)v10;
    if ( v10 )
    {
      *a4 = WmipSMBiosTableLength;
      v11 = *a3;
      goto LABEL_7;
    }
    v9 = -1073741670;
  }
  else
  {
    v9 = -1073741823;
  }
  v11 = 0LL;
  v15 = v9;
LABEL_7:
  if ( v9 < 0 )
  {
LABEL_20:
    ExReleaseResourceLite(&WmipSMBiosLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)v15;
  }
  *a2 = 0LL;
  v12 = &v11[(unsigned int)WmipSMBiosTableLength];
  v15 = -1073741823;
  while ( v11 < v12 )
  {
    if ( *v11 == a1 )
    {
      *a2 = v11;
      v15 = 0;
      break;
    }
    for ( i = &v11[(unsigned __int8)v11[1]]; *i && i < (_WORD *)v12; i = (_WORD *)((char *)i + 1) )
      ;
    v11 = i + 1;
  }
  if ( v15 < 0 )
  {
    if ( *a3 )
      MmUnmapIoSpace(*a3, (unsigned int)*a4);
    goto LABEL_20;
  }
  return (unsigned int)v15;
}
