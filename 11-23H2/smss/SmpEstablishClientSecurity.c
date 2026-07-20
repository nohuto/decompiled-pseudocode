/*
 * XREFs of SmpEstablishClientSecurity @ 0x140010A8C
 * Callers:
 *     SmpApiCallback @ 0x140002CF0 (SmpApiCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpEstablishClientSecurity(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // edi
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  void *TokenHandle; // [rsp+30h] [rbp-78h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-70h] BYREF
  __int64 ThreadInformation; // [rsp+40h] [rbp-68h] BYREF
  _BYTE TokenInformation[8]; // [rsp+48h] [rbp-60h] BYREF
  int v13; // [rsp+50h] [rbp-58h]
  int v14; // [rsp+54h] [rbp-54h]
  int v15; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+64h] [rbp-44h]

  v2 = a2 + 24;
  v5 = 2;
  if ( !*(_QWORD *)(a2 + 16) )
  {
    RtlAcquireSRWLockShared(a2 + 24);
    RtlReleaseSRWLockShared(v2);
  }
  v6 = NtAlpcImpersonateClientOfPort(*(_QWORD *)(a2 + 16), a1, 0LL);
  if ( v6 >= 0 )
  {
    v6 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0xCu, 0, &TokenHandle);
    if ( v6 >= 0 )
    {
      v6 = NtQueryInformationToken(TokenHandle, TokenStatistics, TokenInformation, 0x38u, &ReturnLength);
      if ( v6 >= 0 && (v16 >= 2 || v15 != 2) && v13 == 999 && !v14 )
        v5 = 4;
      NtClose(TokenHandle);
    }
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  RtlAcquireSRWLockExclusive(v2);
  if ( (*(_DWORD *)a2 & 6) != 0 )
  {
    v6 = 0;
  }
  else if ( v6 >= 0 )
  {
    *(_DWORD *)a2 |= v5;
  }
  RtlReleaseSRWLockExclusive(v2, v7);
  return (unsigned int)v6;
}
