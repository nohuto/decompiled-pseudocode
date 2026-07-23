/*
 * XREFs of sub_180038268 @ 0x180038268
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_180038268(PVOID DllHandle, __int64 a2)
{
  char v2; // cf
  char v3; // of
  char v4; // al

  if ( !v3 )
    JUMPOUT(0x1800382BDLL);
  *(_BYTE *)(a2 - 97) -= v2 + v4;
  return LdrUnloadDll(DllHandle);
}
