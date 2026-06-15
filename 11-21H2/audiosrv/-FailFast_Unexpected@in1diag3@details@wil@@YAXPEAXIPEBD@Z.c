/*
 * XREFs of ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BE884
 * Callers:
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x18005AE74 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wi.c)
 *     ?wait@?$slim_event_t@$00@wil@@QEAA_NXZ @ 0x180064ED0 (-wait@-$slim_event_t@$00@wil@@QEAA_NXZ.c)
 *     ?RemoteDisconnect@CAudioStream@@UEAAJXZ @ 0x1800E4FB0 (-RemoteDisconnect@CAudioStream@@UEAAJXZ.c)
 *     ?WaitForWorkToComplete@CWorkFifo@@QEAA_NXZ @ 0x180129520 (-WaitForWorkToComplete@CWorkFifo@@QEAA_NXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800BDCE8 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::FailFast_Unexpected(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = -2147418113;
  wil::details::ReportFailure_Hr<3>(
    (__int64)this,
    (int)a2,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
    (__int64)a4,
    v4,
    retaddr,
    v5);
}
