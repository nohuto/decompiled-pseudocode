/*
 * XREFs of ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YGJPAXPBGPA_N@Z @ 0x100066A6
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YGJPAXPBGPA_N@Z @ 0x100066E9 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YGJPAXPBGPA_N@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YGJPAXIPBDJ@Z @ 0x10006276 (-Return_NtStatus@in1diag3@details@wil@@YGJPAXIPBDJ@Z.c)
 */

int __userpurge CallerIdentity::CheckCapabilityFromImpersonationToken@<eax>(
        int a1@<ecx>,
        CallerIdentity *this,
        void *a3,
        const unsigned __int16 *a4,
        bool *a5)
{
  void *v5; // eax
  wil::details::in1diag3 *v6; // ecx
  unsigned int v8; // [esp+0h] [ebp-8h]
  const char *v9; // [esp+4h] [ebp-4h] BYREF
  int savedregs; // [esp+8h] [ebp+0h]

  *(_BYTE *)this = 0;
  v5 = (void *)CapabilityCheck(a1, L"expandedResources", (char *)&v9 + 3);
  if ( (int)v5 < 0 )
    return wil::details::in1diag3::Return_NtStatus(v6, v5, v8, v9, savedregs);
  *(_BYTE *)this = HIBYTE(v9) != 0;
  return 0;
}
