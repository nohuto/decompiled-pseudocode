/*
 * XREFs of HamQueryCallerTerminateReason @ 0x1800072B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000738C @ 0x18000738C (sub_18000738C.c)
 *     sub_180007760 @ 0x180007760 (sub_180007760.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

__int64 __fastcall HamQueryCallerTerminateReason(_DWORD *a1)
{
  NTSTATUS v2; // ebx
  void *TokenHandle; // [rsp+20h] [rbp-258h] BYREF
  _BYTE v5[464]; // [rsp+30h] [rbp-248h] BYREF
  _BYTE v6[96]; // [rsp+200h] [rbp-78h] BYREF

  TokenHandle = 0LL;
  v2 = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
  if ( v2 >= 0 )
    v2 = sub_180007760(TokenHandle);
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( v2 >= 0 )
  {
    if ( (unsigned __int8)PsmIsDynamicKey(v5) )
    {
      *a1 = 0;
      return 0;
    }
    else
    {
      v2 = sub_18000738C(v5, v6, a1);
      if ( v2 >= 0 )
        return 0;
    }
  }
  return (unsigned int)v2;
}
