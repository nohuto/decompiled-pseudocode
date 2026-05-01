/*
 * XREFs of ?GetCallingProcessHandle@CallerIdentity@@YGJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PAPAX@Z @ 0x10006424
 * Callers:
 *     ?CheckCallerCapability@CallerIdentity@@YGJPBGPA_N@Z @ 0x10006756 (-CheckCallerCapability@CallerIdentity@@YGJPBGPA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ??1?$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@QAE@XZ @ 0x1000653D (--1-$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@QAE@XZ.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall CallerIdentity::GetCallingProcessHandle(HANDLE *a1)
{
  int v1; // edi
  void *v2; // eax
  int v3; // esi
  unsigned int v5; // [esp+0h] [ebp-10h]
  const char *v6; // [esp+4h] [ebp-Ch]
  int v7; // [esp+8h] [ebp-8h]
  void *ppInterface; // [esp+Ch] [ebp-4h] BYREF
  int retaddr; // [esp+14h] [ebp+4h]

  v1 = 0;
  *a1 = 0;
  ppInterface = 0;
  v2 = (void *)CoGetCallContext(&_GUID_68c6a1b9_de39_42c3_8d28_bf40a5126541, &ppInterface);
  v3 = (int)v2;
  if ( (int)v2 < 0 )
  {
    if ( v2 != (void *)-2147417833 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (wil::details::in1diag3 *)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
        v2,
        v5,
        v6,
        v7);
LABEL_7:
      v1 = v3;
      goto LABEL_8;
    }
    *a1 = GetCurrentProcess();
  }
  else
  {
    v3 = (*(int (__thiscall **)(_DWORD, void *, int, HANDLE *))(*(_DWORD *)ppInterface + 12))(
           *(_DWORD *)(*(_DWORD *)ppInterface + 12),
           ppInterface,
           4096,
           a1);
    if ( v3 < 0 )
      goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<ICallingProcessInfo>::~ComPtr<ICallingProcessInfo>(&ppInterface);
  return v1;
}
