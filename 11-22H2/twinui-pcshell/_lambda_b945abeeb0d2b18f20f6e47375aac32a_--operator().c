/*
 * XREFs of _lambda_b945abeeb0d2b18f20f6e47375aac32a_::operator() @ 0x1801E5444
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_13fbf35ce3583effb9cf3b67df432c74___::Invoke @ 0x1801E55C0 (CAsyncCallbackWithLambda__lambda_13fbf35ce3583effb9cf3b67df432c74___--Invoke.c)
 * Callees:
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1800C5528 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ @ 0x18045B1CC (-CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ.c)
 */

__int64 __fastcall lambda_b945abeeb0d2b18f20f6e47375aac32a_::operator()(
        CortanaAvailability *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v4; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_QWORD *)a1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 340LL) )
  {
    CortanaProactiveTelemetry::CortanaStoreAppExperienceManager_WNFReentrancyGuard();
    *(_BYTE *)(*(_QWORD *)a1 + 341LL) = 1;
    return 0LL;
  }
  else
  {
    *(_WORD *)(v4 + 340) = 1;
    while ( 1 )
    {
      v6 = CortanaAvailability::WriteCortanaAvailabilityToRegistry(a1, a2, a3);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x163,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_8;
      }
      if ( !*(_BYTE *)(*(_QWORD *)a1 + 341LL) )
        break;
      *(_BYTE *)(*(_QWORD *)a1 + 341LL) = 0;
    }
    v7 = 0;
LABEL_8:
    *(_BYTE *)(v4 + 340) = 0;
    return v7;
  }
}
