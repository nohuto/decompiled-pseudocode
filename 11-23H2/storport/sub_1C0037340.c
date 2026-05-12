/*
 * XREFs of sub_1C0037340 @ 0x1C0037340
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0056F04 @ 0x1C0056F04 (sub_1C0056F04.c)
 *     sub_1C0057CE4 @ 0x1C0057CE4 (sub_1C0057CE4.c)
 */

__int64 __fastcall sub_1C0037340(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  PVOID v3; // rdi
  struct _IRP *MasterIrp; // r15
  signed int v7; // eax
  signed int v8; // ebx
  signed int v9; // eax
  ULONG Length; // ecx
  ULONG_PTR v11; // rax
  ULONG v13; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  v13 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  P = 0LL;
  if ( !*(_QWORD *)(a1 + 568) || !*(_QWORD *)(a1 + 576) )
  {
    v8 = -1073741823;
    goto LABEL_14;
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 8 || CurrentStackLocation->Parameters.Read.Length < 8 )
  {
    v8 = -1073741820;
    goto LABEL_14;
  }
  v7 = sub_1C0056F04(a1, a2, &P, &v13);
  v3 = P;
  v8 = v7;
  if ( v7 )
    goto LABEL_14;
  if ( !P )
  {
    v8 = -1073741801;
    goto LABEL_14;
  }
  v8 = sub_1C001F308(a1, a2, (unsigned int *)P, v13, 0LL, 0, 64);
  if ( v8 < 0 )
  {
LABEL_14:
    v11 = 0LL;
    goto LABEL_15;
  }
  memset_0(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
  v9 = sub_1C0057CE4(a1, a2, v3);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = v9;
  if ( Length >= *(_DWORD *)(&MasterIrp->Size + 1) )
    Length = *(_DWORD *)(&MasterIrp->Size + 1);
  v11 = Length;
LABEL_15:
  a2->IoStatus.Information = v11;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  return sub_1C0003440(a2, 0, v8);
}
