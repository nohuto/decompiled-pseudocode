/*
 * XREFs of VfQueryThreadContext @ 0x1405FE2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A8368C @ 0x140A8368C (sub_140A8368C.c)
 *     sub_140A836FC @ 0x140A836FC (sub_140A836FC.c)
 */

__int64 __fastcall VfQueryThreadContext(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // r9
  unsigned int v4; // r10d

  if ( dword_140C1B2A0 && (unsigned __int8)sub_140A8368C(3LL, a2) )
    return sub_140A836FC(v3, v4, v2);
  else
    return 0LL;
}
