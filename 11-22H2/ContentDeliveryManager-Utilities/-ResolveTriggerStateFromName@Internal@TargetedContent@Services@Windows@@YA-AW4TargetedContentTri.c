/*
 * XREFs of ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x1800991C4
 * Callers:
 *     _lambda_c0bbf621b4662329ff8f927a7da19c87_::operator() @ 0x18009B808 (_lambda_c0bbf621b4662329ff8f927a7da19c87_--operator().c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x18009CC3C (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(const WCHAR *a1)
{
  LPCWCH *i; // rbx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = (LPCWCH *)&unk_1800F5700; ; i += 2 )
  {
    if ( i == (LPCWCH *)&off_1800F5740 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2B2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070490LL,
        bIgnoreCase);
    if ( CompareStringOrdinal(i[1], -1, a1, -1, 1) == 2 )
      break;
  }
  return *(unsigned int *)i;
}
