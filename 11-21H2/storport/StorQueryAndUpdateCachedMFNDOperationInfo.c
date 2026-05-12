/*
 * XREFs of StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1C003C384
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0038568 (RaidAdapterStartMiniport.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 *     StorLogMFNDQueryOperationInfo @ 0x1C003C044 (StorLogMFNDQueryOperationInfo.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryAndUpdateCachedMFNDOperationInfo(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  _DWORD v5[16]; // [rsp+50h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  v5[10] = v5[10] & 0xFFFFFF00 | 0xD1;
  v5[0] = 10;
  v2 = StorSendMFNDCommand(a1, 0, 0, (unsigned int)v5);
  v3 = v2;
  if ( v2 < 0 )
  {
    StorLogMFNDQueryOperationInfo(a1, -1, -1, 0, v2);
  }
  else
  {
    *(_DWORD *)(a1 + 5900) = 0;
    *(_DWORD *)(a1 + 5896) = 0;
  }
  return v3;
}
