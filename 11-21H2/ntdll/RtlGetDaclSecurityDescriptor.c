/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x180071C30
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800718B4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlReplaceSidInSd @ 0x1800F1C40 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetDaclSecurityDescriptor(__int64 a1, _BYTE *a2, _QWORD *a3, bool *a4)
{
  __int64 v4; // rax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    *a2 = 1;
    if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
    {
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v4 = *(_QWORD *)(a1 + 32);
      }
      else if ( *(_DWORD *)(a1 + 16) )
      {
        v4 = a1 + *(unsigned int *)(a1 + 16);
      }
    }
    *a3 = v4;
    *a4 = (*(_BYTE *)(a1 + 2) & 8) != 0;
  }
  else
  {
    *a2 = 0;
  }
  return 0LL;
}
