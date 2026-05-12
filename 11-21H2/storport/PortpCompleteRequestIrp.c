/*
 * XREFs of PortpCompleteRequestIrp @ 0x1C0022008
 * Callers:
 *     PortpAsyncCompletion @ 0x1C0021F80 (PortpAsyncCompletion.c)
 *     PortpCancelRoutine @ 0x1C00692E0 (PortpCancelRoutine.c)
 * Callees:
 *     PortPassThroughFreeIrpEx @ 0x1C0015538 (PortPassThroughFreeIrpEx.c)
 *     PortPassThroughFreeSrb @ 0x1C00220CC (PortPassThroughFreeSrb.c)
 *     PortPassThroughMarshalResultsFromSrb @ 0x1C0022154 (PortPassThroughMarshalResultsFromSrb.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0068F38 (PortPassThroughExMarshalResultsFromSrbEx.c)
 */

void __fastcall PortpCompleteRequestIrp(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rax
  IRP *v5; // rdi
  __int64 v6; // rdx
  IRP *v7; // rcx
  bool v8; // r9
  _DWORD v9[2]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 Information; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 184);
  v5 = (IRP *)*((_QWORD *)a2 + 1);
  v9[1] = 0;
  LOBYTE(a3) = *(_BYTE *)a2;
  v6 = *((_QWORD *)a2 + 3);
  v7 = (IRP *)*((_QWORD *)a2 + 2);
  v8 = ((*(_DWORD *)(v3 + 24) - 315460) & 0xFFFFFFFB) == 0;
  v9[0] = v5->IoStatus.Status;
  Information = v5->IoStatus.Information;
  if ( v8 )
    PortPassThroughExMarshalResultsFromSrbEx(v7);
  else
    PortPassThroughMarshalResultsFromSrb(v7, v6, a3, v9);
  *(_DWORD *)(*((_QWORD *)a2 + 2) + 48LL) = v9[0];
  *(_QWORD *)(*((_QWORD *)a2 + 2) + 56LL) = Information;
  PortPassThroughFreeIrpEx(v5);
  PortPassThroughFreeSrb(*((PVOID *)a2 + 3));
  (*((void (__fastcall **)(_QWORD, _QWORD))a2 + 4))(*((_QWORD *)a2 + 2), *((_QWORD *)a2 + 5));
  ExFreePoolWithTag(a2, 0x69506C50u);
}
