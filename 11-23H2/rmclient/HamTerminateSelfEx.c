/*
 * XREFs of HamTerminateSelfEx @ 0x180014F40
 * Callers:
 *     HamTerminateSelf @ 0x18001E910 (HamTerminateSelf.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamTerminateSelfEx(_QWORD *a1, int a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020B88, 0xAu, 0LL, *a1, a2);
}
