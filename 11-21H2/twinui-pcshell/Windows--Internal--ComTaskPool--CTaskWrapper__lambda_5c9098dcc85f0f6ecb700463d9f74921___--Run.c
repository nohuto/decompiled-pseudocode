/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c9098dcc85f0f6ecb700463d9f74921___::Run @ 0x180198470
 * Callers:
 *     <none>
 * Callees:
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x18008CB4C (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c9098dcc85f0f6ecb700463d9f74921___::Run(
        CortanaAvailability *a1,
        unsigned __int8 *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CortanaAvailability::WriteCortanaAvailabilityToRegistry(a1, a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x105,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
}
