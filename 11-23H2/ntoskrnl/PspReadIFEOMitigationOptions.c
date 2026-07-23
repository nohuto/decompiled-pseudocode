/*
 * XREFs of PspReadIFEOMitigationOptions @ 0x1406B445C
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PspReadOptionsMapFromIFEO @ 0x1406B4540 (PspReadOptionsMapFromIFEO.c)
 *     PspValidateMitigationOptions @ 0x1407C670C (PspValidateMitigationOptions.c)
 */

__int64 __fastcall PspReadIFEOMitigationOptions(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int128 v5; // xmm2
  __int64 v6; // xmm3_8
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  result = PspReadOptionsMapFromIFEO(a1, L"MitigationOptions", &v9);
  if ( (int)result >= 0 )
  {
    v5 = v9;
    LOBYTE(v4) = 1;
    v6 = v10;
    v7 = v9;
    v8 = v10;
    result = PspValidateMitigationOptions(&v7, v4);
    if ( (int)result >= 0 )
    {
      *(_OWORD *)a2 = v5;
      *(_QWORD *)(a2 + 16) = v6;
    }
  }
  return result;
}
