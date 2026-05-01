/*
 * XREFs of ??1?$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@QAE@XZ @ 0x1000653D
 * Callers:
 *     ?GetCallingProcessHandle@CallerIdentity@@YGJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PAPAX@Z @ 0x10006424 (-GetCallingProcessHandle@CallerIdentity@@YGJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PAPAX@Z.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

int __thiscall Microsoft::WRL::ComPtr<ICallingProcessInfo>::~ComPtr<ICallingProcessInfo>(int *this)
{
  int v1; // edx
  int result; // eax

  v1 = *this;
  if ( *this )
  {
    *this = 0;
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v1 + 8))(*(_DWORD *)(*(_DWORD *)v1 + 8), v1);
  }
  return result;
}
