/*
 * XREFs of wil::details::lambda_call__lambda_fd363d759ea9383e34f29f9fac21f9f1___::_lambda_call__lambda_fd363d759ea9383e34f29f9fac21f9f1___ @ 0x14008EC3C
 * Callers:
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x14001F9C0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ??_GCProcessorTransaction@@QEAAPEAXI@Z @ 0x14008EE34 (--_GCProcessorTransaction@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_fd363d759ea9383e34f29f9fac21f9f1___::_lambda_call__lambda_fd363d759ea9383e34f29f9fac21f9f1___(
        _BYTE *a1,
        unsigned int a2)
{
  CProcessorTransaction *v3; // rcx
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    v3 = *(CProcessorTransaction **)(*(_QWORD *)a1 + 768LL);
    if ( v3 )
      CProcessorTransaction::`scalar deleting destructor'(v3, a2);
    result = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 768LL) = 0LL;
  }
  return result;
}
