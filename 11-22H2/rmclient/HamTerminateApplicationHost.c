/*
 * XREFs of HamTerminateApplicationHost @ 0x180014E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamTerminateApplicationHost(_QWORD *a1, __int64 a2, void *a3, int a4, int a5, __int64 a6)
{
  ULONG v10; // eax
  CLIENT_CALL_RETURN result; // rax
  ULONG v12; // [rsp+30h] [rbp-48h]

  if ( a1[1] )
  {
    v10 = RtlLengthSid(a3);
    result.Simple = HampInProcTerminateApplicationHost(a1[1], a2, a3, v10, a4, a5, a6);
  }
  else
  {
    v12 = RtlLengthSid(a3);
    result.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0,
                       0x12u,
                       0LL,
                       *a1,
                       a2,
                       a3,
                       v12,
                       a4,
                       a5,
                       a6).Pointer;
  }
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
