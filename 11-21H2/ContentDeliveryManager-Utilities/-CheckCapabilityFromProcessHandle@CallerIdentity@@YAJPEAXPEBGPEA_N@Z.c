/*
 * XREFs of ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18008456C
 * Callers:
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180084408 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 * Callees:
 *     ??$__invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x1800273F8 (--$__invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180084514 (-CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x180084B64 (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::CheckCapabilityFromProcessHandle(
        CallerIdentity *this,
        void *a2,
        unsigned __int16 *a3,
        bool *a4)
{
  int ImpersonationTokenFromProcess; // eax
  bool *v7; // r9
  unsigned int v8; // ebx
  __int64 (__fastcall *v10[2])(_QWORD); // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CallerIdentity *v12; // [rsp+60h] [rbp+30h] BYREF
  CallerIdentity *v13; // [rsp+68h] [rbp+38h] BYREF

  *(_BYTE *)a3 = 0;
  v12 = 0LL;
  ImpersonationTokenFromProcess = CallerIdentity::GetImpersonationTokenFromProcess(
                                    this,
                                    a2,
                                    (unsigned int)&v12,
                                    (void **)0xFFFFFFFFFFFFFFFFLL);
  v8 = ImpersonationTokenFromProcess;
  if ( ImpersonationTokenFromProcess >= 0 )
  {
    v8 = CallerIdentity::CheckCapabilityFromImpersonationToken(v12, a2, a3, v7);
    if ( (unsigned __int64)v12 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v13 = v12;
      v10[0] = (__int64 (__fastcall *)(_QWORD))CloseHandle;
      wistd::__invoke<int (*)(void *),void * &>(v10, &v13);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)ImpersonationTokenFromProcess);
    if ( (unsigned __int64)v12 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v13 = v12;
      v10[0] = (__int64 (__fastcall *)(_QWORD))CloseHandle;
      wistd::__invoke<int (*)(void *),void * &>(v10, &v13);
    }
  }
  return v8;
}
