/*
 * XREFs of sub_1C001D5C8 @ 0x1C001D5C8
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     sub_1C001D420 @ 0x1C001D420 (sub_1C001D420.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1C001D5C8(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *MasterIrp; // rdx
  __int64 Length; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rcx
  unsigned int v11; // r8d
  char v13; // [rsp+30h] [rbp-49h] BYREF
  char v14; // [rsp+31h] [rbp-48h] BYREF
  char v15; // [rsp+32h] [rbp-47h] BYREF
  int v16; // [rsp+34h] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+40h] [rbp-39h] BYREF
  __int64 v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  __int64 v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  int *v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+88h] [rbp+Fh]
  char *v24; // [rsp+90h] [rbp+17h]
  __int64 v25; // [rsp+98h] [rbp+1Fh]
  char *v26; // [rsp+A0h] [rbp+27h]
  __int64 v27; // [rsp+A8h] [rbp+2Fh]
  char *v28; // [rsp+B0h] [rbp+37h]
  __int64 v29; // [rsp+B8h] [rbp+3Fh]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x28 )
  {
    v11 = -1073741820;
LABEL_13:
    a2->IoStatus.Information = 0LL;
    return sub_1C0003440(a2, 0, v11);
  }
  if ( (unsigned int)Length < 0x28 )
  {
    v11 = -1073741789;
    goto LABEL_13;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 40 || *(_DWORD *)(&MasterIrp->Size + 1) != 40 )
  {
    v11 = -1073741811;
    goto LABEL_13;
  }
  *(_OWORD *)(a1 + 2024) = *(_OWORD *)&MasterIrp->MdlAddress;
  *(_DWORD *)&MasterIrp->Type = 40;
  *(_DWORD *)(&MasterIrp->Size + 1) = 40;
  *(_OWORD *)&MasterIrp->AssociatedIrp.MasterIrp = *(_OWORD *)(*(_QWORD *)(a1 + 24) + 5000LL);
  a2->IoStatus.Information = 40LL;
  if ( (unsigned int)dword_1C00930C8 > 5 && sub_1C001ABEC(Length, 0x400000000000LL) )
  {
    v10 = *(_QWORD *)(v8 + 24);
    v19 = 16LL;
    v20 = v9;
    v21 = 16LL;
    v18 = v10 + 5000;
    v16 = *(_DWORD *)(v10 + 56);
    v22 = &v16;
    v13 = *(_BYTE *)(v8 + 96);
    v24 = &v13;
    v14 = *(_BYTE *)(v8 + 97);
    v26 = &v14;
    v15 = *(_BYTE *)(v8 + 98);
    v28 = &v15;
    v23 = 4LL;
    v25 = 1LL;
    v27 = 1LL;
    v29 = 1LL;
    sub_1C001D420(v10, (unsigned __int8 *)dword_1C008503B, v7, v8, 8u, &v17);
  }
  v11 = 0;
  return sub_1C0003440(a2, 0, v11);
}
