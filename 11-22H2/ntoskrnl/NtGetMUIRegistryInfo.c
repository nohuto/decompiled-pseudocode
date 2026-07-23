/*
 * XREFs of NtGetMUIRegistryInfo @ 0x1407CAB20
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     MUIBugCheck @ 0x14060F594 (MUIBugCheck.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x14060F5BC (MigrateOOBELanguageToInstallationLanguage.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     PsCreateSystemThreadEx @ 0x140772B10 (PsCreateSystemThreadEx.c)
 *     MUIInitializeResourceLock @ 0x14085F71C (MUIInitializeResourceLock.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  __int64 v5; // r14
  __int64 v6; // rax
  ULONG v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v9; // rcx
  char v10; // bl
  NTSTATUS v11; // edi
  unsigned int Length; // [rsp+50h] [rbp-A8h]
  __int128 v14; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v15; // [rsp+68h] [rbp-90h]
  __int128 v16; // [rsp+78h] [rbp-80h]
  HANDLE Handle; // [rsp+88h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-68h] BYREF
  __int128 v19; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v20; // [rsp+B8h] [rbp-40h]
  __int128 v21; // [rsp+C8h] [rbp-30h]
  char v22; // [rsp+118h] [rbp+20h]

  v19 = 0LL;
  v20 = 0LL;
  *(_QWORD *)&v21 = 0LL;
  DWORD2(v21) = 0;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v22 = 0;
  if ( !KeGetCurrentThread()->PreviousMode || InitSafeBootMode )
    goto LABEL_46;
  if ( !DataSize )
  {
    if ( (Flags & 0xA) == 0 )
      goto LABEL_47;
    Length = 0;
    v5 = 0x7FFFFFFF0000LL;
    goto LABEL_11;
  }
  v5 = 0x7FFFFFFF0000LL;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)DataSize < 0x7FFFFFFF0000LL )
    v6 = (__int64)DataSize;
  Length = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
  {
LABEL_11:
    if ( Data )
      goto LABEL_47;
    goto LABEL_12;
  }
  if ( !Data )
    goto LABEL_47;
LABEL_12:
  v7 = 1;
  if ( Flags )
    v7 = Flags;
  if ( (v7 & 0xFFFFFFF4) != 0 )
    goto LABEL_47;
  if ( !MUIRegistryLock )
  {
    v11 = MUIInitializeResourceLock(&MUIRegistryLock);
    if ( (v11 & 0xC0000000) == 0xC0000000 )
      goto LABEL_27;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(MUIRegistryLock, 1u);
  v22 = 1;
  v9 = MUIRegistryInfo;
  if ( MUIRegistryInfo == (PVOID)-1LL )
  {
    if ( (v7 & 2) != 0 )
    {
      MUIRegistryInfo = 0LL;
      LODWORD(MUIRegistryInfoSize) = 0;
LABEL_45:
      v11 = 0;
      goto LABEL_27;
    }
LABEL_46:
    v11 = -1073741823;
    goto LABEL_27;
  }
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 2) != 0 )
    {
      if ( MUIRegistryInfo )
      {
        ExFreePoolWithTag(MUIRegistryInfo, 0);
        MUIRegistryInfo = 0LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        if ( (v7 & 8) != 0 )
          ++*(_DWORD *)(MmWriteableSharedUserData + 932);
      }
      goto LABEL_45;
    }
    if ( (v7 & 8) != 0 )
    {
      ++*(_DWORD *)(MmWriteableSharedUserData + 932);
      if ( v9 )
        v9[3] = MEMORY[0xFFFFF780000003A4];
      goto LABEL_45;
    }
LABEL_47:
    v11 = -1073741811;
    goto LABEL_27;
  }
  v10 = 0;
  if ( MUIRegistryInfo )
    goto LABEL_19;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  *(_QWORD *)&v14 = &Event;
  *((_QWORD *)&v14 + 1) = 0LL;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = (unsigned __int16)PsInstallUILanguageId;
  *(_QWORD *)&v16 = (unsigned __int16)PsMachineUILanguageId;
  DWORD2(v16) = -1073741823;
  LODWORD(v19) = 48;
  *((_QWORD *)&v19 + 1) = 0LL;
  DWORD2(v20) = 512;
  *(_QWORD *)&v20 = 0LL;
  v21 = 0LL;
  v11 = PsCreateSystemThreadEx(
          (__int64)&Handle,
          0x1FFFFF,
          &v19,
          0LL,
          0LL,
          (__int64)MUIRegistrySystemRoutine,
          (__int64)&v14,
          0LL,
          0LL);
  if ( v11 >= 0 )
  {
    ZwClose(Handle);
    v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( v11 >= 0 )
    {
      v11 = DWORD2(v16);
      if ( SDWORD2(v16) < 0 )
      {
LABEL_54:
        MUIRegistryInfo = (PVOID)-1LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        goto LABEL_27;
      }
      MUIRegistryInfo = (PVOID)*((_QWORD *)&v14 + 1);
      LODWORD(MUIRegistryInfoSize) = v15;
      if ( !DWORD1(v15) )
        MUIBugCheck(32770);
      if ( !HIDWORD(v15) )
      {
        if ( PsUILanguageComitted )
          MUIBugCheck(32769);
        MigrateOOBELanguageToInstallationLanguage();
      }
      if ( !DWORD1(v16) )
        PsMachineUILanguageId = PsInstallUILanguageId;
    }
  }
  if ( v11 < 0 )
    goto LABEL_54;
LABEL_19:
  if ( Length )
  {
    if ( Length < (unsigned int)MUIRegistryInfoSize )
    {
      v11 = -1073741789;
      goto LABEL_23;
    }
    v10 = 1;
  }
  v11 = 0;
LABEL_23:
  if ( (unsigned __int64)DataSize < 0x7FFFFFFF0000LL )
    v5 = (__int64)DataSize;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  *DataSize = MUIRegistryInfoSize;
  if ( v10 )
  {
    ProbeForWrite(Data, Length, 1u);
    memset(Data, 0, Length);
    memmove(Data, MUIRegistryInfo, (unsigned int)MUIRegistryInfoSize);
  }
LABEL_27:
  if ( v22 )
  {
    ExReleaseResourceLite(MUIRegistryLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v11;
}
