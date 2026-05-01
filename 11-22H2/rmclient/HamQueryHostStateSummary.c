/*
 * XREFs of HamQueryHostStateSummary @ 0x180014B30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

CLIENT_CALL_RETURN __fastcall HamQueryHostStateSummary(_QWORD *a1, __int64 a2, _OWORD *a3)
{
  CLIENT_CALL_RETURN result; // rax
  _OWORD *v5; // rax
  __int64 v6; // rcx
  _BYTE v7[576]; // [rsp+40h] [rbp-258h] BYREF

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020B58, 5u, 0LL, *a1, a2, v7).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v5 = v7;
    v6 = 4LL;
    do
    {
      *a3 = *v5;
      a3[1] = v5[1];
      a3[2] = v5[2];
      a3[3] = v5[3];
      a3[4] = v5[4];
      a3[5] = v5[5];
      a3[6] = v5[6];
      a3 += 8;
      *(a3 - 1) = v5[7];
      v5 += 8;
      --v6;
    }
    while ( v6 );
    *a3 = *v5;
    a3[1] = v5[1];
    a3[2] = v5[2];
    *((_QWORD *)a3 + 6) = *((_QWORD *)v5 + 6);
    return 0LL;
  }
  return result;
}
