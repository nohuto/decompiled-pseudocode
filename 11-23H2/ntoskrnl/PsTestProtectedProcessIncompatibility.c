/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x1406B8234
 * Callers:
 *     PspThreadOpen @ 0x1406B8090 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1406B8150 (PspProcessOpen.c)
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x1406BA2E0 (DbgkCopyProcessDebugPort.c)
 *     DbgkOpenProcessDebugPort @ 0x140936EE0 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x1409388C0 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140938CE0 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x14093A47C (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406B828C (PspCheckForInvalidAccessByProtection.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r11

  if ( a2 == a3 )
    return 0;
  LOBYTE(a2) = *(_BYTE *)(a2 + 2170);
  LOBYTE(a3) = *(_BYTE *)(a3 + 2170);
  if ( !(unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2, a3) )
    return 0;
  if ( qword_140C379F8 )
    return (unsigned __int8)qword_140C379F8(v4, v3) == 0;
  return 1;
}
