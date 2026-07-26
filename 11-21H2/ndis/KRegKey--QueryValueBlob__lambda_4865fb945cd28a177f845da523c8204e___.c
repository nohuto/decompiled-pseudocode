/*
 * XREFs of KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___ @ 0x1C012DD9C
 * Callers:
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C0120228 (ndisLWMBuildConfigurationKeyPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0116050 (--_V@YAXPEAX@Z.c)
 *     _lambda_4865fb945cd28a177f845da523c8204e_::operator() @ 0x1C012E1F8 (_lambda_4865fb945cd28a177f845da523c8204e_--operator().c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3)
{
  HANDLE v5; // rcx
  _BYTE *v6; // rbx
  _BYTE *v7; // rsi
  NTSTATUS ValueKey; // eax
  NTSTATUS v9; // edi
  _BYTE *Pool2; // rax
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v14; // [rsp+190h] [rbp+18h] BYREF

  v14 = a3;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v5 = *a1;
  v6 = 0LL;
  ResultLength[0] = 0;
  v7 = KeyValueInformation;
  ValueKey = ZwQueryValueKey(v5, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v9 = ValueKey;
  if ( ValueKey != -2147483643 )
  {
    if ( ValueKey < 0 )
      goto LABEL_10;
    goto LABEL_7;
  }
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, ResultLength[0], 1852392018);
  v6 = Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_10;
  }
  v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Pool2, ResultLength[0], ResultLength);
  if ( v9 >= 0 )
  {
    v7 = v6;
LABEL_7:
    if ( *((_DWORD *)v7 + 1) == -65406 )
      v9 = lambda_4865fb945cd28a177f845da523c8204e_::operator()(&v14, v7 + 12, *((unsigned int *)v7 + 2));
    else
      v9 = -1073741788;
  }
LABEL_10:
  if ( v6 )
    operator delete[](v6);
  return (unsigned int)v9;
}
