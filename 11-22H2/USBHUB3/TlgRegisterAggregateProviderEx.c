/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C008F574
 * Callers:
 *     TlgRegisterAggregateProvider @ 0x1C008F55C (TlgRegisterAggregateProvider.c)
 * Callees:
 *     RunningHash @ 0x1C0043D78 (RunningHash.c)
 *     FinishHash @ 0x1C0043DAC (FinishHash.c)
 *     __security_check_cookie @ 0x1C0044810 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C008E600 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     DestroyAggregateSession @ 0x1C008EDAC (DestroyAggregateSession.c)
 *     CreateTlgAggregateSession @ 0x1C008EDF8 (CreateTlgAggregateSession.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(__int64 a1)
{
  unsigned __int64 TlgAggregateSession; // rax
  __int64 v2; // rbx
  __int128 v4; // xmm0
  __int64 v5; // rdx
  int v6; // esi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 *v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  TlgAggregateSession = (unsigned __int64)CreateTlgAggregateSession(a1, 1);
  v2 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1C00691F8, 0LL, 0LL);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  v10 = 0;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_1C00691F8;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  v4 = *((_OWORD *)off_1C0069200 - 1);
  v11 = TlgAggregateSession >> 4;
  v12 = v4;
  RunningHash(&v10, (__int64)&v12, 0x10uLL);
  RunningHash(&v10, (__int64)&v11, 8uLL);
  FinishHash(&v10);
  *(_DWORD *)(v2 + 368) = v10 % 0x927C0 + 600000;
  v6 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
         (char *)&dword_1C00691F8,
         (__int64)TlgAggregateInternalRegisteredProviderEtwCallback,
         v2);
  if ( v6 >= 0 )
  {
    ExAcquirePushLockExclusiveEx(&unk_1C006CD70, 0LL);
    v8 = qword_1C006CD78;
    if ( !qword_1C006CD78 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (char *)&dword_1C006C840,
        (__int64)TlgAggregateInternalProviderCallback,
        0LL);
      v8 = qword_1C006CD78;
    }
    v9 = &qword_1C006CD78;
    while ( v8 )
    {
      if ( *(int **)(v8 + 344) == &dword_1C00691F8 )
        goto LABEL_12;
      v9 = (__int64 *)(v8 + 352);
      v8 = *(_QWORD *)(v8 + 352);
    }
    *v9 = v2;
LABEL_12:
    ExReleasePushLockExclusiveEx(&unk_1C006CD70, 0LL);
    return 0LL;
  }
  else
  {
    qword_1C0069220 = 0LL;
    DestroyAggregateSession((_QWORD *)v2, v5, v7);
    return (unsigned int)v6;
  }
}
