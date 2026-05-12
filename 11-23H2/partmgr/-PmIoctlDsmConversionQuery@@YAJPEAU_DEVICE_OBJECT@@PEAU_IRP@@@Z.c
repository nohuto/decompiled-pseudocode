/*
 * XREFs of ?PmIoctlDsmConversionQuery@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001E800
 * Callers:
 *     PmIoctlDsm @ 0x1C001D9C0 (PmIoctlDsm.c)
 * Callees:
 *     memset @ 0x1C000BA40 (memset.c)
 */

__int64 __fastcall PmIoctlDsmConversionQuery(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  struct _IRP *MasterIrp; // rsi
  unsigned int v3; // ebx
  struct _KMUTANT *DeviceExtension; // rbp
  __int128 v6; // xmm6
  size_t Length; // r13
  __int64 v8; // rdi
  char v9; // al
  struct _KMUTANT *v10; // rcx
  unsigned __int64 p_MutantListEntry; // rdx
  __int64 v12; // rdi
  char v13; // al

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  DeviceExtension = (struct _KMUTANT *)a1->DeviceExtension;
  v6 = 0LL;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( (MasterIrp->AssociatedIrp.IrpCount & 0xFFFFFFF0) == 0x10 )
  {
    v8 = *(&MasterIrp->Flags + 1);
    KeWaitForSingleObject(&DeviceExtension[1], Executive, 0, 0, 0LL);
    v9 = 0;
    v10 = *(struct _KMUTANT **)&DeviceExtension[16].Header.Lock;
    p_MutantListEntry = 0LL;
    if ( v10 != &DeviceExtension[16] )
    {
      while ( 1 )
      {
        p_MutantListEntry = (unsigned __int64)&v10[-3].MutantListEntry;
        if ( v10->MutantListEntry.Blink == *(struct _LIST_ENTRY **)((char *)&MasterIrp->Type + v8)
          && *(PMDL *)(p_MutantListEntry + 184) == *(PMDL *)((char *)&MasterIrp->MdlAddress + v8) )
        {
          break;
        }
        v10 = *(struct _KMUTANT **)&v10->Header.Lock;
        if ( v10 == &DeviceExtension[16] )
        {
          v12 = 0LL;
          goto LABEL_8;
        }
      }
      v9 = 1;
    }
    v13 = -v9;
    v12 = p_MutantListEntry & -(__int64)(v13 != 0);
    if ( v12 )
      v6 = *(_OWORD *)((p_MutantListEntry & -(__int64)(v13 != 0)) + 0x40);
LABEL_8:
    KeReleaseMutex(DeviceExtension + 1, 0);
    if ( v12 )
    {
      memset(MasterIrp, 0, Length);
      *(_DWORD *)(&MasterIrp->Size + 1) = -2147483620;
      *(_DWORD *)&MasterIrp->Type = 36;
      HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = 36;
      LODWORD(MasterIrp->ThreadListEntry.Flink) = Length - 36;
      LODWORD(MasterIrp->MdlAddress) = 0;
      HIDWORD(MasterIrp->ThreadListEntry.Flink) = 20;
      *(_OWORD *)&MasterIrp->ThreadListEntry.Blink = v6;
      a2->IoStatus.Information = 56LL;
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
