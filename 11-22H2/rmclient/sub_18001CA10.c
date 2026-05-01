/*
 * XREFs of sub_18001CA10 @ 0x18001CA10
 * Callers:
 *     RmReleaseResources @ 0x18001CCC0 (RmReleaseResources.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall sub_18001CA10(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020770, 8u, 0LL, &v3);
}
