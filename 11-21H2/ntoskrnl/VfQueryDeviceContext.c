/*
 * XREFs of VfQueryDeviceContext @ 0x1405FE1E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A8368C @ 0x140A8368C (sub_140A8368C.c)
 *     sub_140A836FC @ 0x140A836FC (sub_140A836FC.c)
 */

__int64 __fastcall VfQueryDeviceContext(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // r9

  if ( dword_140C1B2A0 && (unsigned __int8)sub_140A8368C(0LL, a2) )
    return sub_140A836FC(v3, 0LL, v2);
  else
    return 0LL;
}
