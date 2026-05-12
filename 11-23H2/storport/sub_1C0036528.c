/*
 * XREFs of sub_1C0036528 @ 0x1C0036528
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C001F9A4 @ 0x1C001F9A4 (sub_1C001F9A4.c)
 *     sub_1C001FE9C @ 0x1C001FE9C (sub_1C001FE9C.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C00364AC @ 0x1C00364AC (sub_1C00364AC.c)
 */

__int64 __fastcall sub_1C0036528(__int64 *a1, IRP *a2)
{
  struct _IRP *MasterIrp; // r14
  PVOID v3; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  signed int v7; // ebx
  signed int v8; // eax
  ULONG Length; // ecx
  ULONG_PTR v10; // rax
  ULONG v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0LL;
  v12 = 0;
  P = 0LL;
  if ( !a1[71] || !a1[72] )
  {
    v7 = -1073741823;
    goto LABEL_14;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x10 )
  {
    v7 = -1073741820;
LABEL_14:
    v10 = 0LL;
    goto LABEL_15;
  }
  if ( CurrentStackLocation->Parameters.Read.Length < 0x38 )
  {
    v7 = -1073741789;
    goto LABEL_14;
  }
  sub_1C001F9A4(a1[1], (__int64)a2, (__int64 *)&P, &v12);
  v3 = P;
  if ( !P )
  {
    v7 = -1073741801;
    goto LABEL_14;
  }
  v7 = sub_1C00364AC((__int64)a1, a2, (unsigned int *)P, v12);
  if ( v7 < 0 )
    goto LABEL_14;
  memset_0(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
  v8 = sub_1C001FE9C((__int64)a2, (__int64)v3);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v7 = v8;
  if ( Length >= *(_DWORD *)(&MasterIrp->Size + 1) )
    Length = *(_DWORD *)(&MasterIrp->Size + 1);
  v10 = Length;
LABEL_15:
  a2->IoStatus.Information = v10;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  return sub_1C0003440(a2, 0, v7);
}
