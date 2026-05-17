/*
 * XREFs of sub_180038268 @ 0x180038268
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180038268(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // cf
  char v4; // of
  char v5; // al

  if ( !v4 )
    JUMPOUT(0x1800382BDLL);
  *(_BYTE *)(a2 - 97) -= v3 + v5;
  return LdrUnloadDll(a1, a2, a3);
}
