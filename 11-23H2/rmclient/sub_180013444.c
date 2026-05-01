/*
 * XREFs of sub_180013444 @ 0x180013444
 * Callers:
 *     RmSetProcessManagement @ 0x18001C4A0 (RmSetProcessManagement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180013444(__int64 a1)
{
  *(_DWORD *)(a1 + 56) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 48);
}
