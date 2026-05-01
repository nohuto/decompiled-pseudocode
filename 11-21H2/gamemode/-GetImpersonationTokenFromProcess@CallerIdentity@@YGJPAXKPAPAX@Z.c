/*
 * XREFs of ?GetImpersonationTokenFromProcess@CallerIdentity@@YGJPAXKPAPAX@Z @ 0x100064A9
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YGJPAXPBGPA_N@Z @ 0x100066E9 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YGJPAXPBGPA_N@Z.c)
 * Callees:
 *     ?ResultFromWin32Bool@@YGJH@Z @ 0x10006293 (-ResultFromWin32Bool@@YGJH@Z.c)
 */

int __userpurge CallerIdentity::GetImpersonationTokenFromProcess@<eax>(
        void *a1@<ecx>,
        PHANDLE phNewToken,
        void *a3,
        unsigned int a4,
        void **a5)
{
  void *v5; // eax
  int v6; // esi
  void *v7; // eax
  void *v8; // eax
  void *TokenHandle; // [esp+Ch] [ebp-4h] BYREF

  *phNewToken = 0;
  TokenHandle = 0;
  v5 = (void *)OpenProcessToken(a1, 0xEu, &TokenHandle);
  v6 = ResultFromWin32Bool(v5);
  if ( v6 >= 0 )
  {
    v7 = (void *)DuplicateTokenEx(TokenHandle, 0xCu, 0, SecurityImpersonation, TokenImpersonation, phNewToken);
    v6 = ResultFromWin32Bool(v7);
  }
  v8 = TokenHandle;
  TokenHandle = 0;
  if ( v8 && v8 != (void *)-1 )
    CloseHandle(v8);
  return v6;
}
