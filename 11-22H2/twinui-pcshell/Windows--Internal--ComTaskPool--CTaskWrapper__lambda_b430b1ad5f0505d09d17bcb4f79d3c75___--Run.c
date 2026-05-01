/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b430b1ad5f0505d09d17bcb4f79d3c75___::Run @ 0x1801E5640
 * Callers:
 *     <none>
 * Callees:
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1800C5528 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b430b1ad5f0505d09d17bcb4f79d3c75___::Run(
        CortanaAvailability *a1,
        __int64 a2,
        unsigned int *a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CortanaAvailability::WriteCortanaAvailabilityToRegistry(a1, a2, a3);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFA,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
}
