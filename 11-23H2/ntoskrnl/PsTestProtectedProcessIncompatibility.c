/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x1406B8204
 * Callers:
 *     PspThreadOpen @ 0x1406B8060 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1406B8120 (PspProcessOpen.c)
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x1406BA2B0 (DbgkCopyProcessDebugPort.c)
 *     DbgkOpenProcessDebugPort @ 0x140936CE0 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x1409386C0 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140938AE0 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x14093A27C (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406B825C (PspCheckForInvalidAccessByProtection.c)
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
  if ( qword_140C37A58 )
    return (unsigned __int8)qword_140C37A58(v4, v3) == 0;
  return 1;
}
