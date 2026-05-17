/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x1800F5D80
 * Callers:
 *     LdrpGetProcedureAddress @ 0x18003BD10 (LdrpGetProcedureAddress.c)
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     LdrpResolveForwarder @ 0x18003F350 (LdrpResolveForwarder.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180033A60 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v9; // rax

  if ( (unsigned int)a3 < *(_DWORD *)(a5 + 116) )
  {
    v6 = a3;
    v7 = *(unsigned int *)(a5 + 8LL * a3 + 120);
    if ( !(_DWORD)v7 )
      return 3221225474LL;
    *a4 = *(_DWORD *)(a5 + 8 * v6 + 124);
    if ( a2 || (unsigned int)v7 < *(_DWORD *)(a5 + 84) )
    {
      *a6 = a1 + v7;
      return 0LL;
    }
    v9 = RtlAddressInSectionTable();
    *a6 = v9;
    if ( v9 )
      return 0LL;
  }
  return 3221225485LL;
}
