/*
 * XREFs of PortpCompleteRequestIrp @ 0x1C001E46C
 * Callers:
 *     PortpAsyncCompletion @ 0x1C001DE50 (PortpAsyncCompletion.c)
 *     PortpCancelRoutine @ 0x1C0078AE0 (PortpCancelRoutine.c)
 * Callees:
 *     PortPassThroughMarshalResultsFromSrb @ 0x1C001E290 (PortPassThroughMarshalResultsFromSrb.c)
 *     IsScsiPassThroughEx @ 0x1C001E51C (IsScsiPassThroughEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C001E544 (PortPassThroughFreeIrpEx.c)
 *     PortPassThroughFreeSrb @ 0x1C001E594 (PortPassThroughFreeSrb.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0078738 (PortPassThroughExMarshalResultsFromSrbEx.c)
 */

void __fastcall PortpCompleteRequestIrp(__int64 a1, void *a2, __int64 a3)
{
  IRP *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // r8
  IRP *v8; // r10
  _DWORD v9[2]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 Information; // [rsp+28h] [rbp-10h]

  v3 = (IRP *)*((_QWORD *)a2 + 1);
  LOBYTE(a3) = *(_BYTE *)a2;
  v9[1] = 0;
  v5 = *((_QWORD *)a2 + 3);
  v9[0] = v3->IoStatus.Status;
  Information = v3->IoStatus.Information;
  if ( (unsigned __int8)IsScsiPassThroughEx(a1, v5, a3) )
    PortPassThroughExMarshalResultsFromSrbEx(v8);
  else
    PortPassThroughMarshalResultsFromSrb((__int64)v8, v6, v7, (__int64)v9);
  *(_DWORD *)(*((_QWORD *)a2 + 2) + 48LL) = v9[0];
  *(_QWORD *)(*((_QWORD *)a2 + 2) + 56LL) = Information;
  PortPassThroughFreeIrpEx(v3);
  PortPassThroughFreeSrb(*((PVOID *)a2 + 3));
  (*((void (__fastcall **)(_QWORD, _QWORD))a2 + 4))(*((_QWORD *)a2 + 2), *((_QWORD *)a2 + 5));
  ExFreePoolWithTag(a2, 0x69506C50u);
}
