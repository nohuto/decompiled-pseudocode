/*
 * XREFs of _anonymous_namespace_::StringifyStateChange @ 0x18020BE78
 * Callers:
 *     _lambda_4efd027938208ec783bf057b80dc7741_::operator() @ 0x180207794 (_lambda_4efd027938208ec783bf057b80dc7741_--operator().c)
 *     ?OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18020AA5C (-OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall anonymous_namespace_::StringifyStateChange(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return L"PSC_RESUMED";
  v2 = v1 - 1;
  if ( !v2 )
    return L"PSC_SUSPENDING";
  v3 = v2 - 2;
  if ( !v3 )
    return L"PSC_SUSPENDED";
  if ( v3 == 4 )
    return L"PSC_TERMINATED";
  return L"Unknown PLM_STATE_CHANGE";
}
