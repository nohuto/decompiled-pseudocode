/*
 * XREFs of ?AllowSetForegroundWindow@CTrustedComponentForegroundControl@@EEAAJXZ @ 0x1802EDB10
 * Callers:
 *     ?RevealDesktop@CTrustedComponentForegroundControl@@EEAAJXZ @ 0x1802EDD70 (-RevealDesktop@CTrustedComponentForegroundControl@@EEAAJXZ.c)
 * Callees:
 *     ?GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z @ 0x18005900C (-GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::AllowSetForegroundWindow(
        CTrustedComponentForegroundControl *this,
        enum PROCESS_UICONTEXT *a2)
{
  __int64 result; // rax
  int v3; // [rsp+38h] [rbp+10h] BYREF

  result = CallerIdentity::GetCallingProcessType((CallerIdentity *)&v3, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 == 2 )
      return (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
    else
      return 2147942405LL;
  }
  return result;
}
