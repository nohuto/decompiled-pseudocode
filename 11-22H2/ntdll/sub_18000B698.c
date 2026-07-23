/*
 * XREFs of sub_18000B698 @ 0x18000B698
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_18000B698(
        const WCHAR *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        STATE_LOCATION_TYPE a4,
        WCHAR *a5,
        ULONG a6,
        ULONG *a7)
{
  char v7; // cf
  char v8; // of
  _BYTE *v9; // rsi

  if ( !v8 )
    JUMPOUT(0x18000B6FDLL);
  LOBYTE(a2) = *v9 + v7 + (_BYTE)a2;
  return RtlGetPersistedStateLocation(a1, a2, a3, a4, a5, a6, a7);
}
