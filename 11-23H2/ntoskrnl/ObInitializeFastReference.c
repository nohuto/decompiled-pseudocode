/*
 * XREFs of ObInitializeFastReference @ 0x1406B69CC
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406B64F0 (PspInitializeProcessSecurity.c)
 *     SeAssignPrimaryToken @ 0x14084049C (SeAssignPrimaryToken.c)
 *     PspLocateSystemDll @ 0x14084D394 (PspLocateSystemDll.c)
 *     SepInitializationPhase0 @ 0x140B53588 (SepInitializationPhase0.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x140224660 (ObpIncrPointerCountEx.c)
 */

__int64 __fastcall ObInitializeFastReference(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    ObpIncrPointerCountEx((volatile signed __int64 *)(a2 - 48), 15);
  result = (a2 + 15) & -(__int64)(a2 != 0);
  *a1 = result;
  return result;
}
