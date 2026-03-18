/*
 * XREFs of VslFreePoolTransferObject @ 0x14054E1A8
 * Callers:
 *     VslFinishSecureImageValidation @ 0x140550360 (VslFinishSecureImageValidation.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 * Callees:
 *     VslpUnlockPagesForTransfer @ 0x1403A0EB4 (VslpUnlockPagesForTransfer.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslFreePoolTransferObject(__int64 **P, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rdi

  v3 = *P;
  v4 = v3[4] + *((unsigned int *)v3 + 11);
  if ( a2 )
    *a2 = *((unsigned int *)v3 + 10);
  VslpUnlockPagesForTransfer(P);
  ExFreePoolWithTag(P, 0);
  return v4;
}
