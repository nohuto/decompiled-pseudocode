/*
 * XREFs of sub_14029BAD0 @ 0x14029BAD0
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x14029BA90 (IoBuildAsynchronousFsdRequest.c)
 *     sub_140705F30 @ 0x140705F30 (sub_140705F30.c)
 * Callees:
 *     sub_14029C568 @ 0x14029C568 (sub_14029C568.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_1403437A0 @ 0x1403437A0 (sub_1403437A0.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

IRP *__fastcall sub_14029BAD0(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        LARGE_INTEGER *a5,
        struct _IO_STATUS_BLOCK *a6)
{
  size_t v6; // r12
  __int64 v8; // r13
  IRP *v10; // rbx
  struct _IO_STACK_LOCATION *v11; // rdi
  int v12; // eax
  int v14; // eax
  unsigned int v15; // eax
  PMDL Mdl; // rax
  int v17; // edx
  struct _IRP *Pool2; // rax
  int v19; // eax

  v6 = a4;
  v8 = a2;
  LOBYTE(a2) = *(_BYTE *)(a2 + 76);
  v10 = (IRP *)sub_1402AACA0(v8, a2, 0LL);
  if ( v10 )
  {
    v10->Tail.Overlay.Thread = KeGetCurrentThread();
    v11 = v10->Tail.Overlay.CurrentStackLocation - 1;
    v11->MajorFunction = a1;
    if ( a1 <= 0x1B )
    {
      v12 = 138478080;
      if ( _bittest(&v12, a1) )
      {
LABEL_4:
        v10->Flags = v10->Flags & 0xFFF1FFFF | (((unsigned int)sub_14033D760(v10->Tail.Overlay.Thread) + 1) << 17);
        v10->UserIosb = a6;
        return v10;
      }
    }
    v14 = *(_DWORD *)(v8 + 48);
    if ( (v14 & 4) != 0 )
    {
      Pool2 = (struct _IRP *)ExAllocatePool2(72LL, v6, 1112764233LL);
      v10->AssociatedIrp.MasterIrp = Pool2;
      if ( Pool2 )
      {
        if ( a1 == 4 )
        {
          memmove(Pool2, a3, v6);
          v19 = 48;
        }
        else
        {
          v10->UserBuffer = a3;
          v19 = 112;
        }
        v10->Flags = v19;
        LODWORD(v6) = a4;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (v14 & 0x10) == 0 )
      {
        v10->UserBuffer = a3;
LABEL_8:
        v11->Parameters.Read.Length = v6;
        if ( a5 )
          v11->Parameters.Read.ByteOffset = *a5;
        v15 = *(_DWORD *)(v8 + 72);
        if ( v15 >= 7 && (v15 <= 9 || v15 == 36) )
          sub_1403437A0(v10, v10->Tail.Overlay.Thread);
        goto LABEL_4;
      }
      Mdl = IoAllocateMdl(a3, v6, 0, 0, 0LL);
      v10->MdlAddress = Mdl;
      if ( Mdl )
      {
        sub_14029C568((_DWORD)Mdl, v17, a1 == 3, v8, v11->MajorFunction);
        goto LABEL_8;
      }
    }
    IoFreeIrp(v10);
  }
  return 0LL;
}
