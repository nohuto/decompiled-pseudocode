/*
 * XREFs of _lambda_bd25e2ba6f0ad956a34c66bf3060a154_::operator() @ 0x180198238
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_89356f1dd7c6b6dce87a0ac2e29f0aec___::Invoke @ 0x180198450 (CAsyncCallbackWithLambda__lambda_89356f1dd7c6b6dce87a0ac2e29f0aec___--Invoke.c)
 * Callees:
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x18008CB4C (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ @ 0x180386D44 (-CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ.c)
 */

__int64 __fastcall lambda_bd25e2ba6f0ad956a34c66bf3060a154_::operator()(CortanaAvailability *a1, unsigned __int8 *a2)
{
  __int64 v3; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_QWORD *)a1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 340LL) )
  {
    CortanaProactiveTelemetry::CortanaStoreAppExperienceManager_WNFReentrancyGuard();
    *(_BYTE *)(*(_QWORD *)a1 + 341LL) = 1;
    return 0LL;
  }
  else
  {
    *(_WORD *)(v3 + 340) = 1;
    while ( 1 )
    {
      v5 = CortanaAvailability::WriteCortanaAvailabilityToRegistry(a1, a2);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x194,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
        goto LABEL_8;
      }
      if ( !*(_BYTE *)(*(_QWORD *)a1 + 341LL) )
        break;
      *(_BYTE *)(*(_QWORD *)a1 + 341LL) = 0;
    }
    v6 = 0;
LABEL_8:
    *(_BYTE *)(v3 + 340) = 0;
    return v6;
  }
}
