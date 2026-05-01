/*
 * XREFs of HamCompleteExtendedExecution @ 0x18001D330
 * Callers:
 *     <none>
 * Callees:
 *     sub_180006E68 @ 0x180006E68 (sub_180006E68.c)
 *     memset @ 0x180016A5E (memset.c)
 */

CLIENT_CALL_RETURN __fastcall HamCompleteExtendedExecution(_QWORD *a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  _QWORD v5[9]; // [rsp+40h] [rbp-48h] BYREF

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020B88, 5u, 0LL, *a1, a2).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    memset(v5, 0, 0x40uLL);
    v5[0] = a2;
    v5[1] = 0LL;
    LODWORD(v5[2]) = 3;
    sub_180006E68((__int64)(a1 + 3), (__int64)v5);
    return 0LL;
  }
  return result;
}
