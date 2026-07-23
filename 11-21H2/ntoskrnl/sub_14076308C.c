/*
 * XREFs of sub_14076308C @ 0x14076308C
 * Callers:
 *     sub_140764DB0 @ 0x140764DB0 (sub_140764DB0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     sub_14056370C @ 0x14056370C (sub_14056370C.c)
 *     sub_1405637DC @ 0x1405637DC (sub_1405637DC.c)
 *     sub_140563B98 @ 0x140563B98 (sub_140563B98.c)
 *     sub_140762E04 @ 0x140762E04 (sub_140762E04.c)
 *     sub_140763000 @ 0x140763000 (sub_140763000.c)
 *     sub_14076302C @ 0x14076302C (sub_14076302C.c)
 *     sub_14076341C @ 0x14076341C (sub_14076341C.c)
 *     sub_140763500 @ 0x140763500 (sub_140763500.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_14076E6B4 @ 0x14076E6B4 (sub_14076E6B4.c)
 *     sub_14076E714 @ 0x14076E714 (sub_14076E714.c)
 *     sub_1409536B0 @ 0x1409536B0 (sub_1409536B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14076308C(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 FsContext2; // rsi
  char v6; // r12
  struct _IRP *MasterIrp; // rcx
  int v8; // edi
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // r8
  struct _KTHREAD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _KTHREAD *v26; // rax
  PVOID v27; // r14
  _QWORD *v28; // rcx
  PVOID *v29; // rax
  PVOID v30; // [rsp+30h] [rbp-68h] BYREF
  PVOID v31; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v32[11]; // [rsp+40h] [rbp-58h] BYREF
  int v33; // [rsp+B0h] [rbp+18h] BYREF
  PVOID P; // [rsp+B8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v32[1] = CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v32[2] = FsContext2;
  v32[0] = 0LL;
  P = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v33 = 0;
  v6 = 0;
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_14056370C(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)qword_14003B0C0,
      a3,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16));
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    v8 = -1073741811;
    goto LABEL_42;
  }
  v8 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v32);
  if ( v8 >= 0 )
  {
    NdrMesTypeDecode3(v32[0], "TP 3\a", &off_140A380F0, &off_140C02FC0, 2, &P, v30);
    if ( P && *(_QWORD *)P && ((v9 = *((_QWORD *)P + 3)) != 0 || !*((_DWORD *)P + 4)) && (*((_DWORD *)P + 4) || !v9) )
    {
      v8 = sub_14076E6B4(*((_QWORD *)P + 3));
      if ( v8 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
        if ( !sub_140763000(FsContext2) || (*(_DWORD *)(FsContext2 + 64) & 8) != 0 )
        {
          v8 = -1073741637;
        }
        else
        {
          LOBYTE(v11) = 1;
          v8 = sub_140769C24(
                 *(_QWORD *)(FsContext2 + 80),
                 *(_QWORD *)P,
                 *((_QWORD *)P + 1),
                 v11,
                 (__int64)&v31,
                 (__int64)&v33);
          if ( v8 >= 0 )
          {
            if ( (byte_140C0DD4C & 2) != 0 )
              sub_140563B98(
                v12,
                (const EVENT_DESCRIPTOR *)qword_14003B700,
                v13,
                *(const wchar_t **)(FsContext2 + 8),
                *(const wchar_t **)(FsContext2 + 16),
                (const wchar_t *)v31);
            v14 = *(_QWORD *)(FsContext2 + 120);
            if ( v14 )
              *(_DWORD *)(v14 + 48) |= v33;
            v15 = sub_14076302C(FsContext2, (const wchar_t *)v31);
            v30 = v15;
            if ( v15 )
            {
              v8 = sub_140762E04(v15[3], *((_DWORD *)v15 + 8), *((_QWORD *)P + 3), *((_DWORD *)P + 4));
LABEL_21:
              ExReleaseResourceLite(&stru_140C44820);
              KeLeaveCriticalRegion();
              if ( v8 < 0 )
                goto LABEL_42;
              v18 = *((_QWORD *)P + 3);
              if ( v18 )
                v8 = sub_14076E714(*((_QWORD *)v30 + 2), 3LL, v18, *((unsigned int *)P + 4));
              if ( v8 < 0 )
                goto LABEL_42;
              v19 = KeGetCurrentThread();
              --*((_WORD *)v19 + 242);
              ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
              LOBYTE(v20) = *((_BYTE *)P + 32);
              v8 = sub_14076341C(FsContext2, v30, v20);
              goto LABEL_26;
            }
            v8 = sub_140763500(v31, *((_QWORD *)P + 3), *((unsigned int *)P + 4), &v30);
            if ( v8 >= 0 )
            {
              v6 = 1;
              v16 = *(_QWORD **)(FsContext2 + 192);
              if ( *v16 != FsContext2 + 184 )
                goto LABEL_54;
              v17 = v30;
              *(_QWORD *)v30 = FsContext2 + 184;
              v17[1] = v16;
              *v16 = v17;
              *(_QWORD *)(FsContext2 + 192) = v17;
              goto LABEL_21;
            }
          }
        }
LABEL_26:
        ExReleaseResourceLite(&stru_140C44820);
        KeLeaveCriticalRegion();
        if ( v8 < 0 )
          goto LABEL_42;
        v8 = sub_1402E0978(
               &Irp->AssociatedIrp.MasterIrp->Type,
               CurrentStackLocation->Parameters.Read.Length,
               (__int64)v31);
        if ( v8 >= 0 )
        {
          v22 = -1LL;
          do
            ++v22;
          while ( *(_WORD *)(v21 + 2 * v22) );
          Irp->IoStatus.Information = 2 * v22 + 2;
        }
      }
    }
    else
    {
      v8 = -1073741811;
    }
  }
  if ( v8 >= 0 )
    goto LABEL_32;
LABEL_42:
  if ( v30 && v6 )
  {
    v26 = KeGetCurrentThread();
    --*((_WORD *)v26 + 242);
    ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
    v27 = v30;
    v28 = *(_QWORD **)v30;
    v29 = (PVOID *)*((_QWORD *)v30 + 1);
    if ( *(PVOID *)(*(_QWORD *)v30 + 8LL) == v30 && *v29 == v30 )
    {
      *v29 = v28;
      v28[1] = v29;
      ExReleaseResourceLite(&stru_140C44820);
      KeLeaveCriticalRegion();
      sub_1409536B0(v27);
      goto LABEL_32;
    }
LABEL_54:
    __fastfail(3u);
  }
LABEL_32:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  if ( v32[0] )
    MesHandleFree();
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_1405637DC(
      v23,
      (const EVENT_DESCRIPTOR *)qword_14003B320,
      v24,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      v8);
  return (unsigned int)v8;
}
