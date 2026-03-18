/*
 * XREFs of IsClearDelegationCaptureSupported @ 0x1C0097DBC
 * Callers:
 *     zzzDestroyQueue @ 0x1C0038C50 (zzzDestroyQueue.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C0097CF8 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C0149910 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsClearDelegationCaptureSupported()
{
  if ( qword_1C029BE40 )
    return qword_1C029BE40();
  else
    return 3221225659LL;
}
