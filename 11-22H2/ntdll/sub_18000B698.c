/*
 * XREFs of sub_18000B698 @ 0x18000B698
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000B698(const WCHAR *a1, __int64 a2, __int64 a3, __int64 a4, void *a5, int a6, __int64 a7)
{
  char v7; // of

  if ( !v7 )
    JUMPOUT(0x18000B6FDLL);
  return RtlGetPersistedStateLocation(a1, a5, a6, a7);
}
