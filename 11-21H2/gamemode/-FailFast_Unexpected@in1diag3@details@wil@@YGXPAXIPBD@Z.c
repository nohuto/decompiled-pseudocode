/*
 * XREFs of ?FailFast_Unexpected@in1diag3@details@wil@@YGXPAXIPBD@Z @ 0x10003429
 * Callers:
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QBE?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?ReleaseMutex@details@wil@@YGX0@ZU?$integral_constant@I$01@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@@2@PAKKH@Z @ 0x1000444E (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-CloseHandle@details@wil@.c)
 * Callees:
 *     ??$ReportFailure_Hr@$02@details@wil@@YGXPAXIPBD110J@Z @ 0x10003316 (--$ReportFailure_Hr@$02@details@wil@@YGXPAXIPBD110J@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

void __stdcall __noreturn wil::details::in1diag3::FailFast_Unexpected(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4)
{
  int v4; // [esp-14h] [ebp-24h]
  int v5; // [esp-10h] [ebp-20h]
  int v6; // [esp-Ch] [ebp-1Ch]
  int retaddr; // [esp+14h] [ebp+4h]

  wil::details::ReportFailure_Hr<3>(v4, v5, v6, retaddr);
}
