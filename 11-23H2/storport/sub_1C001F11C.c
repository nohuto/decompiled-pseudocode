/*
 * XREFs of sub_1C001F11C @ 0x1C001F11C
 * Callers:
 *     sub_1C001EB00 @ 0x1C001EB00 (sub_1C001EB00.c)
 *     sub_1C0079310 @ 0x1C0079310 (sub_1C0079310.c)
 * Callees:
 *     sub_1C001EF40 @ 0x1C001EF40 (sub_1C001EF40.c)
 *     sub_1C001F1CC @ 0x1C001F1CC (sub_1C001F1CC.c)
 *     sub_1C001F1F4 @ 0x1C001F1F4 (sub_1C001F1F4.c)
 *     sub_1C001F244 @ 0x1C001F244 (sub_1C001F244.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0078F68 @ 0x1C0078F68 (sub_1C0078F68.c)
 */

void __fastcall sub_1C001F11C(__int64 a1, void *a2, __int64 a3)
{
  IRP *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // r8
  IRP *v8; // r10
  _DWORD v9[2]; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR Information; // [rsp+28h] [rbp-10h]

  v3 = (IRP *)*((_QWORD *)a2 + 1);
  LOBYTE(a3) = *(_BYTE *)a2;
  v9[1] = 0;
  v5 = *((_QWORD *)a2 + 3);
  v9[0] = v3->IoStatus.Status;
  Information = v3->IoStatus.Information;
  if ( (unsigned __int8)sub_1C001F1CC(a1, v5, a3) )
    sub_1C0078F68(v8);
  else
    sub_1C001EF40((__int64)v8, v6, v7, (__int64)v9);
  *(_DWORD *)(*((_QWORD *)a2 + 2) + 48LL) = v9[0];
  *(_QWORD *)(*((_QWORD *)a2 + 2) + 56LL) = Information;
  sub_1C001F1F4(v3);
  sub_1C001F244(*((PVOID *)a2 + 3));
  (*((void (__fastcall **)(_QWORD, _QWORD))a2 + 4))(*((_QWORD *)a2 + 2), *((_QWORD *)a2 + 5));
  ExFreePoolWithTag(a2, 0x69506C50u);
}
