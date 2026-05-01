/*
 * XREFs of ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1805756B8
 * Callers:
 *     ?ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EURect@Foundation@Windows@@HPEA_J@Z @ 0x180572460 (-ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EUR.c)
 * Callees:
 *     ??$ReportFailure_Win32@$0A@@details@wil@@YAJPEAXIPEBD110K@Z @ 0x1803AF108 (--$ReportFailure_Win32@$0A@@details@wil@@YAJPEAXIPEBD110K@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::Throw_Win32(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        unsigned int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32<0>(
    (__int64)this,
    315LL,
    (__int64)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
    (__int64)a4,
    v5,
    retaddr,
    (int)a4);
}
