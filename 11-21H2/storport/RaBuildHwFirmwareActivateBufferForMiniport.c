/*
 * XREFs of RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C004D018
 * Callers:
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0034EB4 (RaidAdapterHwFirmwareActivateIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     Feature_Servicing_DeferredFirmwareActivation__private_IsEnabled @ 0x1C00231FC (Feature_Servicing_DeferredFirmwareActivation__private_IsEnabled.c)
 */

__int64 __fastcall RaBuildHwFirmwareActivateBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, int *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  __int64 v6; // rbx
  int v7; // r12d
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 Pool; // rax
  int v13; // eax

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned int)Feature_Servicing_DeferredFirmwareActivation__private_IsEnabled()
    && (*(_DWORD *)(v4 + 8) & 0xC0000000) == 0xC0000000 )
  {
    v5 = -1073741811;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v10 == 1 )
      v11 = *(_QWORD *)(v10 + 24);
    else
      v11 = *(_QWORD *)(a1 + 64);
    v7 = 68;
    if ( *(_DWORD *)v10 != 1 )
      v10 = 0LL;
    Pool = RaidAllocatePool(64LL, 68LL, 1918067026LL, a1);
    v6 = Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 16) = 1771392;
      *(_QWORD *)(Pool + 4) = 0x455241574D524946LL;
      if ( v10 )
        v13 = *(_DWORD *)(v10 + 1264);
      else
        v13 = *(_DWORD *)(v11 + 3996);
      *(_DWORD *)(v6 + 12) = v13;
      *(_DWORD *)(v6 + 24) = 40;
      *(_DWORD *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 32) = 24;
      *(_DWORD *)(v6 + 36) = 3;
      *(_DWORD *)(v6 + 40) = v10 == 0;
      *(_DWORD *)(v6 + 48) = 12;
      *(_DWORD *)(v6 + 44) = 56;
      *(_DWORD *)(v6 + 56) = 1;
      *(_DWORD *)(v6 + 60) = 12;
      *(_BYTE *)(v6 + 64) = *(_BYTE *)(v4 + 12);
      if ( *(int *)(v4 + 8) >= 0 )
      {
        if ( (unsigned int)Feature_Servicing_DeferredFirmwareActivation__private_IsEnabled()
          && (*(_DWORD *)(v4 + 8) & 0x40000000) != 0 )
        {
          *(_DWORD *)(v6 + 40) |= 0x40000000u;
        }
      }
      else
      {
        *(_DWORD *)(v6 + 40) |= 0x80000000;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  *a4 = v7;
  *a3 = v6;
  return v5;
}
