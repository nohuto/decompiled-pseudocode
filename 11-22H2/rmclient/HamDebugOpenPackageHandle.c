/*
 * XREFs of HamDebugOpenPackageHandle @ 0x1800027F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamDebugOpenPackageHandle(_QWORD *a1, __int64 a2, void *a3, _QWORD *a4)
{
  CLIENT_CALL_RETURN result; // rax
  ULONG v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+88h] [rbp+20h]

  v11 = a4;
  v9 = RtlLengthSid(a3);
  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800209E0, 2u, 0LL, *a1, a2, a3, v9, &v10).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
    *a4 = v10;
  return result;
}
