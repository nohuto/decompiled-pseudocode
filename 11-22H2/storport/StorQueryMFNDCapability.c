/*
 * XREFs of StorQueryMFNDCapability @ 0x1C00AC42C
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0039ED4 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorValidateMFNDCapabilities @ 0x1C003E7F4 (StorValidateMFNDCapabilities.c)
 *     StorGetMFNDCapabilities @ 0x1C00ABD64 (StorGetMFNDCapabilities.c)
 */

__int64 __fastcall StorQueryMFNDCapability(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  _DWORD *v6; // rbx
  size_t v7; // rbp
  int MFNDCapabilities; // esi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = *(_QWORD *)(a2 + 184);
  *a3 = 0LL;
  v6 = *(_DWORD **)(a2 + 24);
  v7 = *(unsigned int *)(v3 + 8);
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
    return 3221225659LL;
  if ( v7 < 0x60 )
    return 3221225507LL;
  MFNDCapabilities = StorGetMFNDCapabilities((__int64 *)a1, 1);
  if ( MFNDCapabilities >= 0 )
  {
    if ( StorValidateMFNDCapabilities(*(_QWORD *)(a1 + 5968)) )
    {
      memset_0(v6, 0, v7);
      *v6 = 6291457;
      *((_WORD *)v6 + 2) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 5968) + 4LL);
      *((_WORD *)v6 + 3) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 5968) + 5LL);
      v10 = *(_QWORD *)(a1 + 5968);
      *(_OWORD *)(v6 + 2) = *(_OWORD *)(v10 + 8);
      *(_OWORD *)(v6 + 6) = *(_OWORD *)(v10 + 24);
      *(_OWORD *)(v6 + 10) = *(_OWORD *)(v10 + 40);
      *(_OWORD *)(v6 + 14) = *(_OWORD *)(v10 + 56);
      *((_BYTE *)v6 + 72) = *(_BYTE *)(v10 + 72);
      v11 = *(_QWORD *)(a1 + 5968);
      if ( *(_BYTE *)(v11 + 73) )
      {
        switch ( *(_BYTE *)(v11 + 73) )
        {
          case 1:
            v6[19] = 2;
            break;
          case 2:
            v6[19] = 3;
            break;
          case 3:
            v6[19] = 4;
            break;
          case 4:
            v6[19] = 5;
            break;
          default:
            v6[19] = 0;
            break;
        }
      }
      else
      {
        v6[19] = 1;
      }
      v12 = *(_QWORD *)(a1 + 5968);
      if ( *(_BYTE *)(v12 + 74) )
      {
        switch ( *(_BYTE *)(v12 + 74) )
        {
          case 1:
            v6[20] = 2;
            break;
          case 2:
            v6[20] = 3;
            break;
          case 3:
            v6[20] = 4;
            break;
          case 4:
            v6[20] = 5;
            break;
          default:
            v6[20] = 0;
            break;
        }
      }
      else
      {
        v6[20] = 1;
      }
      *a3 = 96LL;
    }
    else
    {
      return (unsigned int)-1073741436;
    }
  }
  return (unsigned int)MFNDCapabilities;
}
