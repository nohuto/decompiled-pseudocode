/*
 * XREFs of StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1C003E708
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0039A7C (RaidAdapterStartMiniport.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorLogMFNDQueryOperationInfo @ 0x1C003E370 (StorLogMFNDQueryOperationInfo.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryAndUpdateCachedMFNDOperationInfo(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  _DWORD v5[10]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v6; // [rsp+88h] [rbp-20h]

  memset_0(v5, 0, 0x40uLL);
  v6 = v6 & 0xFFFFFF00 | 0xD1;
  v5[0] = 10;
  v2 = StorSendMFNDCommand(a1, 0, 0, 0, (__int64)v5);
  v3 = v2;
  if ( v2 < 0 )
  {
    StorLogMFNDQueryOperationInfo(a1, -1, -1, 0, v2);
  }
  else
  {
    *(_DWORD *)(a1 + 5964) = 0;
    *(_DWORD *)(a1 + 5960) = 0;
  }
  return v3;
}
