/*
 * XREFs of sub_140860758 @ 0x140860758
 * Callers:
 *     sub_140764DB0 @ 0x140764DB0 (sub_140764DB0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_14056370C @ 0x14056370C (sub_14056370C.c)
 *     sub_1405637DC @ 0x1405637DC (sub_1405637DC.c)
 *     sub_140763000 @ 0x140763000 (sub_140763000.c)
 *     sub_14076302C @ 0x14076302C (sub_14076302C.c)
 *     sub_14076341C @ 0x14076341C (sub_14076341C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140860758(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v16 = FsContext2;
  v15 = 0LL;
  P = 0LL;
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_14056370C(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)qword_14003B780,
      a3,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16));
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_20;
  v7 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v15);
  if ( v7 < 0 )
    goto LABEL_11;
  NdrMesTypeDecode3(v15, "TP 3\a", &off_140A380F0, &off_140C02FC0, 3, &P);
  if ( P && *(_QWORD *)P )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
    if ( sub_140763000(FsContext2) )
    {
      v10 = sub_14076302C(v9, *(const wchar_t **)P);
      if ( v10 )
        v7 = sub_14076341C(FsContext2, (__int64)v10, *((_BYTE *)P + 8));
      else
        v7 = -1073741275;
    }
    else
    {
      v7 = -1073741637;
    }
    ExReleaseResourceLite(&stru_140C44820);
    KeLeaveCriticalRegion();
  }
  else
  {
LABEL_20:
    v7 = -1073741811;
  }
LABEL_11:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v15 )
    MesHandleFree();
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_1405637DC(
      v11,
      (const EVENT_DESCRIPTOR *)qword_14003B220,
      v12,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      v7);
  return (unsigned int)v7;
}
