/*
 * XREFs of TppValidateCleanupGroupMember @ 0x18001B6E4
 * Callers:
 *     TpPostWork @ 0x18001B690 (TpPostWork.c)
 *     TppTimerpValidateTimer @ 0x18001B710 (TppTimerpValidateTimer.c)
 *     TppIopValidateIo @ 0x18001B7FC (TppIopValidateIo.c)
 *     TppWaitpValidateWait @ 0x18001E368 (TppWaitpValidateWait.c)
 *     TppWorkpValidateWork @ 0x180020290 (TppWorkpValidateWork.c)
 *     TppAlpcpValidateAlpc @ 0x180081508 (TppAlpcpValidateAlpc.c)
 *     TppJobpValidateJob @ 0x180085D0C (TppJobpValidateJob.c)
 * Callees:
 *     <none>
 */

bool __fastcall TppValidateCleanupGroupMember(__int64 a1, int a2)
{
  int v2; // eax
  void *ThreadPoolData; // rcx

  v2 = *(_DWORD *)(a1 + 168);
  if ( (v2 & 0x10000) != 0 )
    return 0;
  if ( (v2 & 0x20000) == 0 )
    return 1;
  return a2
      && (ThreadPoolData = NtCurrentTeb()->ThreadPoolData) != 0LL
      && *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) == a1;
}
