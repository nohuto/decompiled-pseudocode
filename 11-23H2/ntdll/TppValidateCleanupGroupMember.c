/*
 * XREFs of TppValidateCleanupGroupMember @ 0x180034C74
 * Callers:
 *     TppWaitpValidateWait @ 0x180031A7C (TppWaitpValidateWait.c)
 *     TppTimerpValidateTimer @ 0x1800349B8 (TppTimerpValidateTimer.c)
 *     TpStartAsyncIoOperation @ 0x180034B80 (TpStartAsyncIoOperation.c)
 *     TpPostWork @ 0x180034C20 (TpPostWork.c)
 *     TppIopValidateIo @ 0x18004BB64 (TppIopValidateIo.c)
 *     TppWorkpValidateWork @ 0x18004E620 (TppWorkpValidateWork.c)
 *     TppAlpcpValidateAlpc @ 0x1800507F8 (TppAlpcpValidateAlpc.c)
 *     TppJobpValidateJob @ 0x180050D24 (TppJobpValidateJob.c)
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
