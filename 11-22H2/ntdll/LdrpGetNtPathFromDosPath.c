/*
 * XREFs of LdrpGetNtPathFromDosPath @ 0x18002B2F4
 * Callers:
 *     LdrpResolveDllName @ 0x18002AA44 (LdrpResolveDllName.c)
 *     LdrpMapDllRetry @ 0x180072C9C (LdrpMapDllRetry.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BDC0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009F590 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall LdrpGetNtPathFromDosPath(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  unsigned __int16 *v7; // [rsp+40h] [rbp-39h] BYREF
  __int128 v8; // [rsp+48h] [rbp-31h] BYREF
  int v9; // [rsp+58h] [rbp-21h] BYREF
  __int64 v10; // [rsp+60h] [rbp-19h]
  __int64 v11; // [rsp+68h] [rbp-11h]
  int v12; // [rsp+70h] [rbp-9h]
  __int128 v13; // [rsp+78h] [rbp-1h]
  _BYTE v14[40]; // [rsp+88h] [rbp+Fh] BYREF

  result = RtlpDosPathNameToRelativeNtPathName(1, a1, (unsigned __int16 *)a2, (unsigned __int16 *)&v8, &v7, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v7 == (unsigned __int16 *)&v8 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      if ( a2 + 16 != v5 )
        NtdllpFreeStringRoutine(v5);
      v6 = v8;
      *(_WORD *)(a2 + 16) = 0;
      *(_OWORD *)a2 = v6;
    }
    v4 = 64;
    v9 = 48;
    v10 = 0LL;
    if ( !LdrpUseImpersonatedDeviceMap )
      v4 = 2112;
    v11 = a2;
    v12 = v4;
    v13 = 0LL;
    return ZwQueryAttributesFile(&v9, v14);
  }
  return result;
}
