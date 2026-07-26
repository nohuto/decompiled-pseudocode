/*
 * XREFs of ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C005C7E4
 * Callers:
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C009FADC (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 */

__int64 __fastcall ethAddOneOpenMulticastAddress(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 *a2, char *a3)
{
  __int64 NumAddresses; // r9
  unsigned int v7; // edi
  int v8; // r8d
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // r14d
  int v12; // ebp
  _ETH_MULTICAST_WRAPPER *OldMCastAddressBuf; // r8
  unsigned int v14; // edx
  unsigned __int16 v15; // ax
  char v17[4]; // [rsp+30h] [rbp-38h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_074752314c3a3f0a224cf35f2e3b0fec_Traceguids,
      a1);
  NumAddresses = a1->NumAddresses;
  v7 = 0;
  v8 = 0;
  *a3 = 1;
  if ( (_DWORD)NumAddresses )
  {
    MCastAddressBuf = a1->MCastAddressBuf;
    while ( *(_DWORD *)&MCastAddressBuf[v8].MCastAddress[2] != *(_DWORD *)(a2 + 2)
         || *(_WORD *)MCastAddressBuf[v8].MCastAddress != *(_WORD *)a2 )
    {
      if ( ++v8 >= (unsigned int)NumAddresses )
        goto LABEL_8;
    }
    ++MCastAddressBuf[v8].RefCount;
  }
  else
  {
LABEL_8:
    if ( (unsigned int)(NumAddresses + 1) <= a1->MaxMulticastAddresses )
    {
      memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12 * NumAddresses);
      v10 = a1->NumAddresses;
      v11 = 0;
      a1->OldNumAddresses = v10;
      v12 = 1;
      a1->NumAddresses = v10 + 1;
      if ( v10 )
      {
        OldMCastAddressBuf = a1->OldMCastAddressBuf;
        v14 = *(_DWORD *)(a2 + 2);
        while ( *(_DWORD *)&OldMCastAddressBuf[v11].MCastAddress[2] <= v14 )
        {
          if ( *(_DWORD *)&OldMCastAddressBuf[v11].MCastAddress[2] >= v14 )
          {
            v15 = *(_WORD *)OldMCastAddressBuf[v11].MCastAddress;
            if ( v15 > *(_WORD *)a2 )
              break;
            v12 = -(v15 < *(_WORD *)a2);
          }
          else
          {
            v12 = -1;
          }
          if ( ++v11 >= a1->OldNumAddresses )
            goto LABEL_21;
        }
        v12 = 1;
      }
LABEL_21:
      memmove(a1->MCastAddressBuf, a1->OldMCastAddressBuf, 12LL * v11);
      memmove(a1->MCastAddressBuf[v11].MCastAddress, a2, 6uLL);
      a1->MCastAddressBuf[v11].RefCount = 1;
      if ( v12 > 0 )
        memmove(&a1->MCastAddressBuf[v11 + 1], &a1->OldMCastAddressBuf[v11], 12LL * (a1->OldNumAddresses - v11));
      *a3 = 0;
    }
    else
    {
      v7 = -1073676279;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v17 = v7;
    WPP_RECORDER_SF_DD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_074752314c3a3f0a224cf35f2e3b0fec_Traceguids,
      *a3,
      *(_DWORD *)v17);
  }
  return v7;
}
