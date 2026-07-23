/*
 * XREFs of sub_140762C04 @ 0x140762C04
 * Callers:
 *     sub_140764DB0 @ 0x140764DB0 (sub_140764DB0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_14056370C @ 0x14056370C (sub_14056370C.c)
 *     sub_1405637DC @ 0x1405637DC (sub_1405637DC.c)
 *     sub_140762E04 @ 0x140762E04 (sub_140762E04.c)
 *     sub_140763000 @ 0x140763000 (sub_140763000.c)
 *     sub_14076E6B4 @ 0x14076E6B4 (sub_14076E6B4.c)
 *     sub_14076E714 @ 0x14076E714 (sub_14076E714.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140762C04(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  const wchar_t **FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  PVOID v12; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (const wchar_t **)CurrentStackLocation->FileObject->FsContext2;
  v14 = 0LL;
  v12 = 0LL;
  P = 0LL;
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_14056370C((__int64)Irp, (const EVENT_DESCRIPTOR *)qword_14003B310, a3, FsContext2[1], FsContext2[2]);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_24;
  v7 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v14);
  if ( v7 < 0 )
    goto LABEL_14;
  NdrMesTypeDecode3(v14, "TP 3\a", &off_140A380F0, &off_140C02FC0, 1, &v12, FsContext2);
  if ( v12 && *((_QWORD *)v12 + 1) && *(_DWORD *)v12 )
  {
    v7 = sub_14076E6B4(*((_QWORD *)v12 + 1));
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
      if ( (unsigned __int8)sub_140763000(FsContext2) )
      {
        v7 = sub_14077DE70(FsContext2[10], 200LL, 1466986064LL, &P);
        if ( v7 >= 0 )
          v7 = sub_140762E04(
                 FsContext2[21],
                 *((unsigned int *)FsContext2 + 44),
                 *((_QWORD *)v12 + 1),
                 *(unsigned int *)v12);
      }
      else
      {
        v7 = -1073741637;
      }
      ExReleaseResourceLite(&stru_140C44820);
      KeLeaveCriticalRegion();
      if ( v7 >= 0 )
        v7 = sub_14076E714(P, 1LL, *((_QWORD *)v12 + 1), *(unsigned int *)v12);
    }
  }
  else
  {
LABEL_24:
    v7 = -1073741811;
  }
LABEL_14:
  if ( P )
    ExFreePoolWithTag(P, 0x57706E50u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x6370726Bu);
  if ( v14 )
    MesHandleFree();
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_1405637DC(v9, (const EVENT_DESCRIPTOR *)qword_14003B260, v10, FsContext2[1], FsContext2[2], v7);
  return (unsigned int)v7;
}
