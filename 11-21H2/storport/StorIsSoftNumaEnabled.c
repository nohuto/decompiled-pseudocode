/*
 * XREFs of StorIsSoftNumaEnabled @ 0x1C0059408
 * Callers:
 *     StorResumeIoGateway @ 0x1C0059444 (StorResumeIoGateway.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorIsSoftNumaEnabled(__int64 a1)
{
  return *(_DWORD *)(a1 + 840) > 1u;
}
