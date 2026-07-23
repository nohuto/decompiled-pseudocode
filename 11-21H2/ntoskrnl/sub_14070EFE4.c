/*
 * XREFs of sub_14070EFE4 @ 0x14070EFE4
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14070F040 @ 0x14070F040 (sub_14070F040.c)
 *     sub_140852C00 @ 0x140852C00 (sub_140852C00.c)
 */

__int64 __fastcall sub_14070EFE4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v4; // xmm2
  __int64 v5; // xmm3_8
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  result = sub_14070F040(a1, L"MitigationAuditOptions", &v8);
  if ( (int)result >= 0 )
  {
    v4 = v8;
    v5 = v9;
    v6 = v8;
    v7 = v9;
    result = sub_140852C00(&v6);
    if ( (int)result >= 0 )
    {
      *(_OWORD *)a2 = v4;
      *(_QWORD *)(a2 + 16) = v5;
    }
  }
  return result;
}
