/*
 * XREFs of TppValidateCleanupGroupMember @ 0x180034DD4
 * Callers:
 *     TppWaitpValidateWait @ 0x180031BDC (TppWaitpValidateWait.c)
 *     TppTimerpValidateTimer @ 0x180034B18 (TppTimerpValidateTimer.c)
 *     TpStartAsyncIoOperation @ 0x180034CE0 (TpStartAsyncIoOperation.c)
 *     TpPostWork @ 0x180034D80 (TpPostWork.c)
 *     TppIopValidateIo @ 0x18004BCC4 (TppIopValidateIo.c)
 *     TppWorkpValidateWork @ 0x18004E780 (TppWorkpValidateWork.c)
 *     TppAlpcpValidateAlpc @ 0x180050958 (TppAlpcpValidateAlpc.c)
 *     TppJobpValidateJob @ 0x180050E84 (TppJobpValidateJob.c)
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
