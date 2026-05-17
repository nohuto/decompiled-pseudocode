/*
 * XREFs of AVrfpSetProcessVerifierOptions @ 0x1800E6A40
 * Callers:
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AVrfpSetProcessVerifierOptions(__int64 a1)
{
  int *v2; // r8
  int v3; // [rsp+38h] [rbp+10h] BYREF

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x2000100) == 0 )
    return 0LL;
  v2 = *(int **)(a1 + 144);
  if ( !v2 )
    return 3221225495LL;
  v3 = *v2;
  return ((__int64 (__fastcall *)(_QWORD, int *))qword_1801812F0)(0LL, &v3);
}
