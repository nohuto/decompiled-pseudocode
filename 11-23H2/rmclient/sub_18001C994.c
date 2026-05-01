/*
 * XREFs of sub_18001C994 @ 0x18001C994
 * Callers:
 *     RmRegisterResource @ 0x18001CC60 (RmRegisterResource.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall sub_18001C994(__int64 a1, int a2, int a3, int a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020770, 2u, 0LL, *(_QWORD *)(a1 + 8), a2, a3, a4);
}
