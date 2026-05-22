/*
 * XREFs of wil::details::lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___::_lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___ @ 0x180123EEC
 * Callers:
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x18003FD40 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     _RegistryWatcher::Initialize_::_1_::dtor$0 @ 0x18008240D (_RegistryWatcher--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___::_lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___(
        _BYTE *a1)
{
  HKEY v2; // rcx
  __int64 result; // rax
  void *v4; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = *(HKEY *)(*(_QWORD *)a1 + 24LL);
    if ( v2 )
    {
      RegCloseKey(v2);
      *(_QWORD *)(*(_QWORD *)a1 + 24LL) = 0LL;
    }
    result = *(_QWORD *)a1;
    v4 = *(void **)(*(_QWORD *)a1 + 32LL);
    if ( v4 )
    {
      CloseHandle(v4);
      result = *(_QWORD *)a1;
      *(_QWORD *)(*(_QWORD *)a1 + 32LL) = 0LL;
    }
  }
  return result;
}
