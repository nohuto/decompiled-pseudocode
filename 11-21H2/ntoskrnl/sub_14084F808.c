/*
 * XREFs of sub_14084F808 @ 0x14084F808
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
 *     sub_14076302C @ 0x14076302C (sub_14076302C.c)
 *     sub_14076E6B4 @ 0x14076E6B4 (sub_14076E6B4.c)
 *     sub_14076E714 @ 0x14076E714 (sub_14076E714.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14084F808(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int v7; // ebx
  unsigned int v8; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v17 = FsContext2;
  v16 = 0LL;
  P = 0LL;
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_14056370C(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)qword_14003B140,
      a3,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16));
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_24;
  v7 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v16);
  if ( v7 < 0 )
    goto LABEL_15;
  NdrMesTypeDecode3(v16, "TP 3\a", &off_140A380F0, &off_140C02FC0, 4, &P);
  if ( P && *(_QWORD *)P && *((_QWORD *)P + 2) && (v8 = *((_DWORD *)P + 2)) != 0 )
  {
    v7 = sub_14076E6B4(*((_QWORD *)P + 2), v8);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
      if ( sub_140763000(FsContext2) )
      {
        v11 = sub_14076302C(v10, *(const wchar_t **)P);
        v7 = v11 ? sub_140762E04(v11[3], *((_DWORD *)v11 + 8), *((_QWORD *)P + 2), *((_DWORD *)P + 2)) : -1073741275;
      }
      else
      {
        v7 = -1073741637;
      }
      ExReleaseResourceLite(&stru_140C44820);
      KeLeaveCriticalRegion();
      if ( v7 >= 0 )
        v7 = sub_14076E714(*(_QWORD *)P, 3u, *((_QWORD *)P + 2), *((_DWORD *)P + 2));
    }
  }
  else
  {
LABEL_24:
    v7 = -1073741811;
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v16 )
    MesHandleFree();
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_1405637DC(
      v12,
      (const EVENT_DESCRIPTOR *)qword_14003B130,
      v13,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      v7);
  return (unsigned int)v7;
}
