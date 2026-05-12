/*
 * XREFs of StorQueryMFNDCapability @ 0x1C0090CF4
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0038954 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 *     StorValidateMFNDCapabilities @ 0x1C003C460 (StorValidateMFNDCapabilities.c)
 *     StorGetMFNDCapabilities @ 0x1C0090A68 (StorGetMFNDCapabilities.c)
 */

__int64 __fastcall StorQueryMFNDCapability(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  int MFNDCapabilities; // ebx
  _DWORD *v5; // rsi
  size_t v8; // rbp
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = *(_QWORD *)(a2 + 184);
  MFNDCapabilities = 0;
  v5 = *(_DWORD **)(a2 + 24);
  *a3 = 0LL;
  v8 = *(unsigned int *)(v3 + 8);
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
    return 3221225659LL;
  if ( v8 < 0x90 )
    return 3221225507LL;
  if ( *(_QWORD *)(a1 + 5904) || (MFNDCapabilities = StorGetMFNDCapabilities((__int64 *)a1, 1), MFNDCapabilities >= 0) )
  {
    if ( StorValidateMFNDCapabilities(*(_QWORD *)(a1 + 5904)) )
    {
      memset(v5, 0, v8);
      *v5 = 144;
      v5[1] = 144;
      v5[2] = 8913032;
      v10 = *(_QWORD *)(a1 + 5904);
      *a3 = 144LL;
      *((_WORD *)v5 + 6) = *(unsigned __int8 *)(v10 + 4);
      *((_WORD *)v5 + 7) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 5904) + 5LL);
      v11 = *(_QWORD *)(a1 + 5904);
      *(_OWORD *)(v5 + 5) = *(_OWORD *)(v11 + 8);
      *(_OWORD *)(v5 + 9) = *(_OWORD *)(v11 + 24);
      *(_OWORD *)(v5 + 13) = *(_OWORD *)(v11 + 40);
      *(_OWORD *)(v5 + 17) = *(_OWORD *)(v11 + 56);
      *((_BYTE *)v5 + 84) = *(_BYTE *)(v11 + 72);
    }
    else
    {
      return (unsigned int)-1073741436;
    }
  }
  return (unsigned int)MFNDCapabilities;
}
