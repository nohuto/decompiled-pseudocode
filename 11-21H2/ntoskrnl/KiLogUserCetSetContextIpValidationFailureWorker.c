/*
 * XREFs of KiLogUserCetSetContextIpValidationFailureWorker @ 0x140960A90
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1409E8614 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall KiLogUserCetSetContextIpValidationFailureWorker(_QWORD *P)
{
  __int64 v1; // rbx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v1 = P[5];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess((PRKPROCESS)v1, &ApcState);
  EtwTimLogUserCetSetContextIpValidationFailure(*((_DWORD *)P + 8), v1, P[6], *((_DWORD *)P + 14), *((_DWORD *)P + 15));
  KeUnstackDetachProcess(&ApcState);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v1 + 1112));
  ObfDereferenceObject((PVOID)v1);
  ExFreePoolWithTag(P, 0);
}
