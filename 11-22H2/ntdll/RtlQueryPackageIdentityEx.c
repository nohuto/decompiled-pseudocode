/*
 * XREFs of RtlQueryPackageIdentityEx @ 0x18006E4E0
 * Callers:
 *     RtlQueryPackageIdentity @ 0x18006E480 (RtlQueryPackageIdentity.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x18006E550 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall RtlQueryPackageIdentityEx(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  __int64 result; // rax
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF

  v8 = 0LL;
  result = RtlQueryPackageClaims(a1, a2, a3, a4, a5, a6, (unsigned __int64)&v8 & -(__int64)(a7 != 0LL), 0LL);
  if ( (int)result >= 0 )
  {
    if ( a7 )
      *a7 = (unsigned int)v8;
  }
  return result;
}
