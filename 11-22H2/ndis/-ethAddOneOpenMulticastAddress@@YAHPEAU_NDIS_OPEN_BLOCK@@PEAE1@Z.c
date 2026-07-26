/*
 * XREFs of ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C0061A6C
 * Callers:
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A5EB0 (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062EAC (WPP_RECORDER_SF_LL_ea_1C0062EAC.c)
 */

__int64 __fastcall ethAddOneOpenMulticastAddress(
        struct _NDIS_OPEN_BLOCK *a1,
        _ETH_MULTICAST_WRAPPER *MCastAddressBuf,
        char *a3)
{
  unsigned __int8 *v4; // r14
  unsigned int NumAddresses; // r9d
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  int v9; // esi
  __int64 v10; // rcx
  unsigned int v11; // r9d
  unsigned int v12; // ebp
  _ETH_MULTICAST_WRAPPER *OldMCastAddressBuf; // r8
  unsigned int v14; // edx
  unsigned __int16 v15; // ax
  __int64 v16; // r15

  v4 = (unsigned __int8 *)MCastAddressBuf;
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
  v9 = 1;
  if ( NumAddresses )
  {
    MCastAddressBuf = a1->MCastAddressBuf;
    while ( *(_DWORD *)&MCastAddressBuf[v8].MCastAddress[2] != *(_DWORD *)(v4 + 2)
         || *(_WORD *)MCastAddressBuf[v8].MCastAddress != *(_WORD *)v4 )
    {
      ++v8;
      v9 = 1;
      if ( v8 >= NumAddresses )
        goto LABEL_8;
    }
    ++MCastAddressBuf[v8].RefCount;
  }
  else
  {
LABEL_8:
    v10 = a1->NumAddresses;
    if ( (unsigned int)(v10 + 1) <= a1->MaxMulticastAddresses )
    {
      memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12 * v10);
      v11 = a1->NumAddresses;
      v12 = 0;
      a1->OldNumAddresses = v11;
      a1->NumAddresses = v11 + 1;
      if ( v11 )
      {
        OldMCastAddressBuf = a1->OldMCastAddressBuf;
        v14 = *(_DWORD *)(v4 + 2);
        while ( *(_DWORD *)&OldMCastAddressBuf[v12].MCastAddress[2] <= v14 )
        {
          if ( *(_DWORD *)&OldMCastAddressBuf[v12].MCastAddress[2] >= v14 )
          {
            v15 = *(_WORD *)OldMCastAddressBuf[v12].MCastAddress;
            if ( v15 > *(_WORD *)v4 )
              break;
            v9 = -(v15 < *(_WORD *)v4);
          }
          else
          {
            v9 = -1;
          }
          if ( ++v12 >= v11 )
            goto LABEL_21;
        }
        v9 = 1;
      }
LABEL_21:
      v16 = v12;
      memmove(a1->MCastAddressBuf, a1->OldMCastAddressBuf, v16 * 12);
      memmove(a1->MCastAddressBuf[v16].MCastAddress, v4, 6uLL);
      a1->MCastAddressBuf[v16].RefCount = 1;
      if ( v9 > 0 )
        memmove(&a1->MCastAddressBuf[v12 + 1], &a1->OldMCastAddressBuf[v16], 12LL * (a1->OldNumAddresses - v12));
      *a3 = 0;
    }
    else
    {
      v7 = -1073676279;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MCastAddressBuf) = 4;
    WPP_RECORDER_SF_LL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MCastAddressBuf,
      11,
      14,
      (struct _GUID *)&WPP_074752314c3a3f0a224cf35f2e3b0fec_Traceguids,
      *a3,
      v7);
  }
  return v7;
}
