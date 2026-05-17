/*
 * XREFs of sub_18000B478 @ 0x18000B478
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000B478(const WCHAR *a1, __int64 a2, __int64 a3, __int64 a4, void *a5, int a6, __int64 a7)
{
  char v7; // of

  if ( !v7 )
    JUMPOUT(0x18000B4DDLL);
  return RtlGetPersistedStateLocation(a1, a5, a6, a7);
}
