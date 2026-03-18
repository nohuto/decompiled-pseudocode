/*
 * XREFs of VerifierMmGetSystemRoutineAddress @ 0x140A9FE30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfThunkHookExportAddress @ 0x140A938A4 (VfThunkHookExportAddress.c)
 */

__int64 __fastcall VerifierMmGetSystemRoutineAddress(__int64 a1)
{
  __int64 result; // rax

  result = ((__int64 (*)(void))pXdvMmGetSystemRoutineAddress)();
  if ( result )
    return VfThunkHookExportAddress(result, a1);
  return result;
}
