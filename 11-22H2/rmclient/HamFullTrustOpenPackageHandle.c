/*
 * XREFs of HamFullTrustOpenPackageHandle @ 0x18001D830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamFullTrustOpenPackageHandle(_QWORD *a1, __int64 a2, int a3, void *a4, _QWORD *a5)
{
  CLIENT_CALL_RETURN result; // rax
  int v10; // [rsp+28h] [rbp-40h]
  ULONG v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF

  v11 = RtlLengthSid(a4);
  v10 = a3;
  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020EF0, 2u, 0LL, *a1, a2, v10, a4, v11, &v12).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
    *a5 = v12;
  return result;
}
