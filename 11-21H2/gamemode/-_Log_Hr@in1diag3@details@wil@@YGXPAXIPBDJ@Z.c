/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10005ACC
 * Callers:
 *     _MsixvcUpdatePolicyInternal@24 @ 0x10004DEE (_MsixvcUpdatePolicyInternal@24.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YGXPAXIPBD110J@Z @ 0x10004515 (--$ReportFailure_Hr@$01@details@wil@@YGXPAXIPBD110J@Z.c)
 */

void __stdcall wil::details::in1diag3::_Log_Hr(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5)
{
  int retaddr; // [esp+4h] [ebp+4h]

  wil::details::ReportFailure_Hr<2>((int)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp", 0, 0, retaddr, (int)a2);
}
