/*
 * XREFs of sub_140762F18 @ 0x140762F18
 * Callers:
 *     sub_140764DB0 @ 0x140764DB0 (sub_140764DB0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_14056370C @ 0x14056370C (sub_14056370C.c)
 *     sub_1405637DC @ 0x1405637DC (sub_1405637DC.c)
 *     sub_1405639AC @ 0x1405639AC (sub_1405639AC.c)
 *     sub_140763000 @ 0x140763000 (sub_140763000.c)
 */

__int64 __fastcall sub_140762F18(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int v4; // ebx
  struct _IRP *MasterIrp; // r14
  const wchar_t **FsContext2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  FsContext2 = (const wchar_t **)CurrentStackLocation->FileObject->FsContext2;
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_14056370C((__int64)Irp, (const EVENT_DESCRIPTOR *)qword_14003B4F0, a3, FsContext2[1], FsContext2[2]);
  if ( CurrentStackLocation->Parameters.Create.Options == 4 && *(_DWORD *)&MasterIrp->Type <= 1u )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
    if ( (unsigned __int8)sub_140763000(FsContext2) )
    {
      if ( (byte_140C0DD4C & 2) != 0 )
        sub_1405639AC(
          v10,
          v9,
          v11,
          FsContext2[1],
          FsContext2[2],
          *((_DWORD *)FsContext2 + 45),
          *(_DWORD *)&MasterIrp->Type);
      *((_DWORD *)FsContext2 + 45) = *(_DWORD *)&MasterIrp->Type;
    }
    else
    {
      v4 = -1073741637;
    }
    ExReleaseResourceLite(&stru_140C44820);
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = -1073741811;
  }
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_1405637DC(
      (__int64)FsContext2[2],
      (const EVENT_DESCRIPTOR *)qword_14003B6C0,
      v12,
      FsContext2[1],
      FsContext2[2],
      v4);
  return v4;
}
