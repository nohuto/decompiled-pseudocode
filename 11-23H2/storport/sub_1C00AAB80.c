/*
 * XREFs of sub_1C00AAB80 @ 0x1C00AAB80
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C001FA9C @ 0x1C001FA9C (sub_1C001FA9C.c)
 *     sub_1C0023E3C @ 0x1C0023E3C (sub_1C0023E3C.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003B5E0 @ 0x1C003B5E0 (sub_1C003B5E0.c)
 *     sub_1C00569E4 @ 0x1C00569E4 (sub_1C00569E4.c)
 */

NTSTATUS __fastcall sub_1C00AAB80(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char *v3; // rbp
  size_t Length; // r14
  struct _IRP *MasterIrp; // rsi
  signed int v8; // ebx
  int MdlAddress_high; // ecx
  int v11; // ecx
  __int128 v12; // xmm0
  signed int v13; // eax
  unsigned int v14; // eax
  ULONG_PTR v15; // rax
  int v16; // eax
  __int64 v17; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  v18 = 0;
  P = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !sub_1C0023E3C() )
    goto LABEL_32;
  if ( a2->Tail.Overlay.Thread != KeGetCurrentThread() )
  {
    v3 = (char *)P;
LABEL_32:
    v8 = -1073741790;
    goto LABEL_33;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( MasterIrp )
  {
    if ( CurrentStackLocation->Parameters.Create.Options < 0x14 || (unsigned int)Length < 0x24 )
    {
      v8 = -1073741820;
      goto LABEL_37;
    }
    if ( *(_DWORD *)&MasterIrp->Type == 20 && *(_DWORD *)(&MasterIrp->Size + 1) == 20 )
    {
      MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
      if ( MdlAddress_high )
      {
        if ( MdlAddress_high < 4 && (int)MasterIrp->Flags < 1 )
        {
          if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
          {
            ++a2->CurrentLocation;
            ++a2->Tail.Overlay.CurrentStackLocation;
            return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
          }
          if ( MdlAddress_high != 2 )
          {
            v16 = -1073741637;
            if ( MdlAddress_high == 3 )
              v16 = -1073741811;
            v8 = v16;
            goto LABEL_37;
          }
          v8 = sub_1C00569E4(*(_QWORD *)(a1 + 8), (__int64)a2, Length, &P, &v18);
          if ( v8 < 0 )
          {
            v3 = (char *)P;
          }
          else
          {
            v3 = (char *)P;
            v8 = sub_1C001FA9C(a1, (__int64)a2, (__int64)P, v18, 0LL, v17, 128);
            if ( v8 < 0 )
            {
              v15 = 0LL;
            }
            else
            {
              memset_0(MasterIrp, 0, Length);
              v11 = *((_DWORD *)v3 + 5);
              if ( v11 == 6 )
              {
                *(_DWORD *)&MasterIrp->Type = 36;
                v8 = -2147483643;
                MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v3 + 15);
                v12 = *(_OWORD *)(v3 + 44);
                *(_DWORD *)(&MasterIrp->Size + 1) = 36;
                *(_OWORD *)&MasterIrp->MdlAddress = v12;
                a2->IoStatus.Information = 36LL;
                goto LABEL_33;
              }
              if ( v11 )
              {
                v13 = sub_1C003B5E0(v11);
                a2->IoStatus.Information = 0LL;
                v8 = v13;
                goto LABEL_33;
              }
              *(_DWORD *)&MasterIrp->Type = 36;
              v14 = *((_DWORD *)v3 + 15);
              if ( v14 >= (int)Length - 32 )
                v14 = Length - 32;
              *(_DWORD *)(&MasterIrp->Size + 1) = v14 + 32;
              MasterIrp->AssociatedIrp.IrpCount = v14;
              *(_OWORD *)&MasterIrp->MdlAddress = *(_OWORD *)(v3 + 44);
              memmove(&MasterIrp->ThreadListEntry, v3 + 68, v14);
              v15 = *(unsigned int *)(&MasterIrp->Size + 1);
            }
            a2->IoStatus.Information = v15;
          }
LABEL_33:
          if ( v3 )
            ExFreePoolWithTag(v3, 0x72536152u);
          if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
            return sub_1C0003440(a2, 0, v8);
          goto LABEL_37;
        }
      }
    }
  }
  v8 = -1073741811;
LABEL_37:
  a2->IoStatus.Information = 0LL;
  return sub_1C0003440(a2, 0, v8);
}
